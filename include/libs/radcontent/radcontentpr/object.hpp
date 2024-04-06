#ifndef OBJECT_HPP
#define OBJECT_HPP

#include "types.h"
#include "unk.h"

#include "libc/stddef.h"

// text

class radLoadObject {
private:
    // void __13radLoadObject();
    // void _$_13radLoadObject();
    // void AddRef__13radLoadObject();
    // void Release__13radLoadObject();
    // void ReleaseVerified__13radLoadObject();
public:
    void *operator new(size_t);
    void *operator new(size_t, int);
private:
    // void func_003ED588();
    // void __dl__13radLoadObjectPv();
    // void func_003ED5B8();
    // void __tf13radLoadObject();

public:
    /* vt 0x0C */ virtual void virtual_0C(void);
    /* vt 0x14 */ virtual void virtual_14(void);
private:
    /* vt 0x1C */ virtual void virtual_1C(void); /* placeholder */
};
// void func_003ED618();

// rodata

// extern UNK_TYPE _vt$13radLoadObject;
// extern UNK_TYPE D_004ABFA8;

// data

// extern UNK_TYPE _13radLoadObject$s_allocator;

#endif
