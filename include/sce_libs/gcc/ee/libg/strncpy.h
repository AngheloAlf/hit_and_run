#ifndef STRNCPY_H
#define STRNCPY_H

#include "libc/stddef.h"

#ifdef __cplusplus
extern "C" {
#endif

char *strncpy( char *dest, const char *src, size_t count );

#ifdef __cplusplus
}
#endif

#endif
