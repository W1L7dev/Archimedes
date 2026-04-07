/**
 * @file mem.h
 * @brief Redefines C standard memory-related fucntions.
 * @author Ink
 * @date 2026-04-07
 *
 * Provides a definition for C standard memory-related functions such that any
 * modifications needed to be made on these base functions do not require heavy
 * refactoring.
 */
#ifndef ARCHIMEDES__STD_MEM_H__
#define ARCHIMEDES__STD_MEM_H__

#include <string.h>

#include "archimedes/std/heap.h"
static inline void *arc_std_memcpy(void *dest, const void *src,
                                   arc_std_size_t n) {
  return memcpy(dest, src, n);
}

#endif /* ARCHIMEDES__STD_MEM_H__ */
