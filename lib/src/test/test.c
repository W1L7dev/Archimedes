#include <archimedes/err/err.h>
#include <archimedes/test/test.h>

void arc_test_start() { arc_err_set(ARC_ERR_NONE); }

arc_out arc_test_stop() {
  if (arc_err_get() != ARC_ERR_NONE)
    return ARC_TEST_FAILURE;
  return ARC_TEST_SUCCESS;
}
