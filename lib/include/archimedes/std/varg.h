/**
 * @file varg.h
 * @brief Redefines C standard library variadic function tools.
 * @author Ink
 * @date 2026-04-07
 *
 * Provides a definition for C standard functions that handle variadic
 * functions.
 */
#ifndef ARCHIMEDES__STD_VARG_H__
#define ARCHIMEDES__STD_VARG_H__

#include <stdarg.h>
#include <stdio.h>

typedef va_list arc_std_va_list_t;

/**
 * @brief Enables access to variable arguments.
 * @param ap Instance of `arc_std_va_list_t`.
 * @param param Number of arguments.
 */
#define ARC_STD_VA_START(ap, param) va_start(ap, param)
#define ARC_STD_VA_END(ap) va_end(ap)
#define ARC_STD_VA_ARG(ap, type) va_arg(ap, type)
#define ARC_STD_VA_COPY(dest, src) va_copy(dest, src)

#endif /* ARCHIMEDES__STD_VARG_H__ */
