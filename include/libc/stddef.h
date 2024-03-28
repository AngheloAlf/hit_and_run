#ifndef STDDEF_H
#define STDDEF_H

#ifndef NULL
#define NULL (0)
#endif

#ifndef _SIZE_T
    #define _SIZE_T
    #ifdef __SIZE_TYPE__
        typedef __SIZE_TYPE__ size_t;
    #else
        typedef unsigned int size_t;
    #endif
#endif

#ifndef _PTRDIFF_T
    #define _PTRDIFF_T
    #ifdef __PTRDIFF_TYPE__
        typedef __PTRDIFF_TYPE__ ptrdiff_t;
    #else
        typedef int ptrdiff_t;
    #endif
#endif

#if 0
#ifndef offsetof
    #if defined(__GNUC__) && !__IS_OLD_COMP__
    #define offsetof(structure, member) __builtin_offsetof (structure, member)
    #else
    #define offsetof(structure, member) ((size_t)&(((structure*)0)->member))
    #endif
#endif
#endif

#endif
