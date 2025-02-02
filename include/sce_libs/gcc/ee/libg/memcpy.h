#ifndef MEMCPY_HPP
#define MEMCPY_HPP

#include "libc/stddef.h"

#ifdef __cplusplus
extern "C" {
#endif

void memcpy(void *dest, const void *src, size_t count);

#ifdef __cplusplus
}
#endif

#endif
