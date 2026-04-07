#include <archimedes/api.h>
#include <archimedes/err/err.h>

arc_err_code_t arc_err_prev = ARC_ERR_NONE;

arc_out arc_err_set(arc_err_code_t err) {
  return err == ARC_ERR_NONE ? ARC_SUCCESS : ARC_FAILURE;
}

arc_err_code_t arc_err_get() { return arc_err_prev; }
