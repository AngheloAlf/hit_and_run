#ifndef UNK_H
#define UNK_H

#include "types.h"

typedef s32 UNK_TYPE;
typedef s8 UNK_PAD;
typedef s8 UNK_TYPE1;
typedef s16 UNK_TYPE2;
typedef s32 UNK_TYPE4;
typedef s64 UNK_TYPE8;
typedef void * UNK_PTR;
typedef UNK_TYPE UNK_RET;
#define UNK_ARGS
typedef UNK_RET (*UNK_FUN_PTR)(UNK_ARGS);
#define UNK_CALLBACK void(*)(void)
#define UNK_SIZE 1

#endif
