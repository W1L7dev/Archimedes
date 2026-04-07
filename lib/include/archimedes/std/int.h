/**
 * @file int.h
 * @brief Redefines integer types.
 * @author Ink
 * @date 2026-04-06
 *
 * Provides definitions for integer types of various sizes invarious of system
 * type. Currently macroes to the C standard library `stdint` header.
 */
#ifndef ARCHIMEDES__STD_INT__
#define ARCHIMEDES__STD_INT__

#include <stdint.h>

// Integer definitions
/**
 * @brief Unsigned 8 bit integer, equates to an `unsigned char`.
 */
typedef uint8_t arc_std_uint8_t;
/**
 * @brief Unsigned 16 bit integer, equates to an `unsigned short`.
 */
typedef uint16_t arc_std_uint16_t;
/**
 * @brief Unsigned 32 bit integer, equates to an `unsigned int`.
 */
typedef uint32_t arc_std_uint32_t;
/**
 * @brief Unsigned 64 bit integer, equates to an `unsigned long`.
 */
typedef uint64_t arc_std_uint64_t;

/**
 * @brief Signed 8 bit integer, equates to an `signed char`.
 */
typedef int8_t arc_std_sint8_t;
/**
 * @brief Signed 16 bit integer, equates to an `short`.
 */
typedef int16_t arc_std_sint16_t;
/**
 * @brief Signed 32 bit integer, equates to an `int`.
 */
typedef int32_t arc_std_sint32_t;
/**
 * @brief Signed 64 bit integer, equates to a `long`.
 */
typedef int64_t arc_std_sint64_t;

// Character definitions
/**
 * @brief Unsigned 8 bit integer, equates to an `unsigned char`.
 */
typedef arc_std_uint8_t arc_std_uc_t;
/**
 * @brief Signed 8 bit integer, equates to an `signed char`.
 */
typedef arc_std_sint8_t arc_std_sc_t;
/**
 * @brief 8 bit integer, equates to an `char`. Signedness matches that of
 * `char`.
 */
typedef char arc_std_c_t;

#endif /* ARCHIMEDES__STD_INT__ */
