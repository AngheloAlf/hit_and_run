#ifndef ASSERT_HPP
#define ASSERT_HPP

#include "attributes.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef MODDING
NORETURN
#endif
void __assert(const char *filename, int line, const char *expr);

#define __ASSERT_IMPL(expr, filename, line) ((expr) ? ((void)0) : __assert(filename, line, #expr))

#ifdef NDEBUG
#define ASSERT(expr, filename, line) ((void)0)
#elif PROPER_ASSERT
#define ASSERT(expr, filename, line) __ASSERT_IMPL(expr, __FILE__, __LINE__)
#else
#define ASSERT(expr, filename, line) __ASSERT_IMPL(expr, filename, line)
#endif

#ifdef NDEBUG
#define assert(expr) ((void)0)
#else
#define assert(expr) ASSERT(expr, #expr, __FILE__, __LINE__)
#endif

// rodata

// extern UNK_TYPE D_004AC370;

#ifdef __cplusplus
}
#endif

#endif
