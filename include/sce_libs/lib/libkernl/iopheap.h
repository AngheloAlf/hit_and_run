#ifndef IOPHEAP_HPP
#define IOPHEAP_HPP

#include "types.h"
#include "libc/stddef.h"

#ifdef __cplusplus
extern "C" {
#endif

// text

// void sceSifInitIopHeap();
s32 sceSifAllocIopHeap(s32);
// void sceSifFreeSysMemory();
// void sceSifFreeIopHeap();
size_t sceSifQueryMaxFreeMemSize();
// void func_00411990();

// data

// extern UNK_TYPE D_0044D68C;

// bss

// extern UNK_TYPE D_00500180;
// extern UNK_TYPE D_005001C0;
// extern UNK_TYPE D_00500200;

#ifdef __cplusplus
}
#endif

#endif
