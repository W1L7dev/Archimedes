/**
 * @file err.h
 * @brief Error management.
 * @author Ink
 * @date 2026-04-07
 *
 * Error management.
 */
#ifndef ARCHIMEDES__ERR_ERR_H__
#define ARCHIMEDES__ERR_ERR_H__

#include <archimedes/api.h>

/**
 * @brief Error codes generated from the `codes.inc` header.
 */
typedef enum {
#define X(name, code, desc) name,
#include <archimedes/err/codes.inc>
#undef X
} arc_err_code_t;

/**
 * @brief Holds the last error. Think of `errno` in standard C.
 */
extern arc_err_code_t arc_err_prev;

/**
 * @brief Sets the previous error.
 */
arc_out arc_err_set(arc_err_code_t err);

/**
 * @brief Gets the previous error.
 * @return Previous error.
 */
arc_err_code_t arc_err_get();

#endif /* ARCHIMEDES__ERR_ERR_H__ */
