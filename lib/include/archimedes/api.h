/**
 * @file api.h
 * @brief Defines types used project-wide.
 * @author Ink
 * @date 2026-04-06
 *
 * Provides a definition for constants and types used throughout the framework.
 */
#ifndef ARCHIMEDES__API_H__
#define ARCHIMEDES__API_H__

/**
 * @brief Current framework version.
 */
#define ARCHIMEDES_VERSION "0.0.0"

#include <archimedes/std/int.h>

/**
 * @brief Type for the return value of function.
 */
typedef arc_std_sint32_t arc_out;
/**
 * @brief Value for `arc_out` type of true or 0.
 */
#define ARC_SUCCESS 1
/**
 * @brief Value for `arc_out` type of false or 1.
 */
#define ARC_FAILURE 0

#endif /* ARCHIMEDES__API_H__ */
