/**
 * @file test.h
 * @brief Utilities for testing.
 * @author Ink
 * @date 2026-04-07
 *
 * Gives some utilities for testing framework.
 */
#ifndef ARCHIMEDES__TEST_TEST_H__
#define ARCHIMEDES__TEST_TEST_H__

#include <archimedes/api.h>
#include <archimedes/err/err.h>
#include <archimedes/std/exit.h>

typedef arc_out arc_test_out_t;

/**
 * @brief Marks a test as successful.
 */
#define ARC_TEST_SUCCESS ((arc_test_out_t)ARC_STD_EXIT_SUCCESS)
/**
 * @brief Marks a test as failured.
 */
#define ARC_TEST_FAILURE ((arc_test_out_t)ARC_STD_EXIT_FAILURE)

/**
 * @brief Marks the start of a test. Sets current error to `ARC_ERR_NONE`.
 */
void arc_test_start();

/**
 * @brief Marks the end of a test. Checks current error for result.
 * @return Always returns a value of either `ARC_TEST_SUCCESS` or
 * `ARC_TEST_FAILURE`.
 */
arc_out arc_test_stop();

// Disable asserts with NDEBUG flag
#ifdef NDEBUG
#ifndef ARC_TEST_NO_ASSERTS
#define ARC_TEST_NO_ASSERTS
#endif
#endif

// Library flag
#ifdef ARC_TEST_NO_ASSERTS
#define ARC_TEST_ASSERT(expr) ((void)0)
#else
#define ARC_TEST_ASSERT(expr)                                                  \
  do {                                                                         \
    if (!expr) {                                                               \
      return ARC_TEST_FAILURE;                                                 \
    }                                                                          \
  } while (0);
#endif

#endif /* ARCHIMEDES__TEST_TEST_H__ */
