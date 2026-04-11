#include <archimedes/err/err.h>
#include <archimedes/std/exit.h>
#include <archimedes/std/print.h>
#include <archimedes/test/test.h>

/**
 * @brief Test for the `arc_err_set` function.
 */
arc_test_out_t main(void) {
  arc_test_start();

  // TODO: fix printf
  arc_std_printf("test");

  arc_err_code_t start_value = arc_err_get();
  // ARC_TEST_ASSERT(start_value);

  arc_test_stop();
}
