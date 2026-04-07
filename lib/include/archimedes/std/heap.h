/**
 * @file heap.h
 * @brief Redefines C standard heap-related functions.
 * @author Ink
 * @date 2026-04-06
 *
 * Provides a definition for C standard heap-related functions such that any
 * modifications needed to be made on these base functions do not require heavy
 * refactoring.
 */
#ifndef ARCHIMEDES__STD_HEAP_H__
#define ARCHIMEDES__STD_HEAP_H__

#include <stdio.h>
#include <stdlib.h>

typedef size_t arc_std_size_t;

/**
 * @param s Size of block to allocate.
 * @return Pointer to the allocated block or null if there allocation failed.
 */
static inline void *arc_std_malloc(arc_std_size_t s) { return malloc(s); }
/**
 * @brief Allocates memory for `n` blocks of size `s`; the block is zeroed.
 * @param n Number of blocks to allocate.
 * @param s Size of block.
 * @return Pointer to the allocated block.
 */
static inline void *arc_std_calloc(arc_std_size_t n, arc_std_size_t s) {
  return calloc(n, s);
}
/**
 * @param ptr Pointer to the block to reallocate.
 * @param s New size of block.
 * @return Pointer to the allocated block.
 */
static inline void *arc_std_realloc(void *ptr, arc_std_size_t s) {
  return realloc(ptr, s);
}

/**
 * @brief Free a block allocated by `malloc`, `calloc`, or `realloc`.
 * @param ptr Pointer to the block to freed.
 */
static inline void arc_std_free(void *ptr) { free(ptr); }

#endif /* ARCHIMEDES__STD_HEAP_H__ */
