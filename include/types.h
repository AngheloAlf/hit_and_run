#ifndef TYPES_H
#define TYPES_H

#ifdef __cplusplus
extern "C" {
#endif

typedef signed   char       s8;
typedef unsigned char       u8;
typedef signed   short      s16;
typedef unsigned short      u16;
typedef signed   int        s32;
typedef unsigned int        u32;

#if CC_CHECK
typedef signed   long long  s64;
typedef unsigned long long  u64;
#else
typedef signed   long       s64;
typedef unsigned long       u64;
#endif

typedef float           f32;
typedef double          f64;

#ifndef NULL
#define NULL (0)
#endif

#define ARR_LEN(arr) (sizeof(arr) / sizeof(*arr))

#ifdef __cplusplus
}
#endif

#endif
