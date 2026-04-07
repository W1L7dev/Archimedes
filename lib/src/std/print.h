#include <archimedes/err/err.h>
#include <archimedes/std/heap.h>
#include <archimedes/std/print.h>
#include <archimedes/std/varg.h>
#include <stdio.h>

arc_std_sint32_t arc_std_printf(const arc_std_c_t *fmt, ...) {
  arc_std_va_list_t args;
  ARC_STD_VA_START(args, fmt);

  // Get size
  arc_std_va_list_t args_copy;
  ARC_STD_VA_COPY(args_copy, args);
  arc_std_size_t size = vsnprintf(NULL, 0, fmt, args_copy);
  ARC_STD_VA_END(args_copy);

  if (size < 0) {
    arc_err_set(ARC_ERR_FMT);
    ARC_STD_VA_END(args);
    return size;
  }

  arc_std_c_t *buf = arc_std_malloc(size + 1);
  if (!buf) {
    arc_err_set(ARC_ERR_MEM_ALLOC);
    ARC_STD_VA_END(args);
    return size;
  }

  vsnprintf(buf, size + 1, fmt, args);
  ARC_STD_VA_END(args);

  fputs(buf, stdout);

  arc_std_free(buf);
  return size;
}
