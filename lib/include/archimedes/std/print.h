/**
 * @file print.h
 * @brief Redefines print standard C functions.
 * @author Ink
 * @date 2026-04-07
 */
#ifndef ARCHIMEDES__STD_PRINT_H__
#define ARCHIMEDES__STD_PRINT_H__

#include "archimedes/std/int.h"

arc_std_sint32_t arc_std_printf(const arc_std_c_t *fmt, ...);

#endif /* ARCHIMEDES__STD_PRINT_H__ */
