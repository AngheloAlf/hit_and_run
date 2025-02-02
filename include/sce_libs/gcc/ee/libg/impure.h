#ifndef IMPURE_H
#define IMPURE_H

#include "unk.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct struct__impure_ptr_unk_0C {
    /* 0x00 */ UNK_PAD unk_00[0x1];
} struct__impure_ptr_unk_0C; // size >= 0x1

typedef struct struct__impure_ptr {
    /* 0x00 */ UNK_PAD unk_00[0x4];
    /* 0x04 */ UNK_PTR unk_04;
    /* 0x08 */ UNK_PTR unk_08;
    /* 0x0C */ struct__impure_ptr_unk_0C *unk_0C;
} struct__impure_ptr; // size >= 0x10

// rodata

// extern UNK_TYPE D_004AC4A8;

// data

// extern UNK_TYPE D_0043E510;
// extern UNK_TYPE D_0043E6F4;
// extern UNK_TYPE D_0043E74C;
// extern UNK_TYPE D_0043E7A4;
extern struct__impure_ptr *_impure_ptr;

#ifdef __cplusplus
}
#endif

#endif
