#ifndef OBJECT_HPP
#define OBJECT_HPP

#include "types.h"
#include "unk.h"

#include "libc/stddef.h"

#include "libs/IRefCount.hpp"

// text

class radLoadObject: public IRefCount {
protected:
    radLoadObject(void); // void __13radLoadObject();

public:
    /* vt 0x0C */ virtual void AddRef(void); // void AddRef__13radLoadObject();
    /* vt 0x14 */ virtual void Release(void); // void Release__13radLoadObject();
protected:
    /* vt 0x1C */ virtual ~radLoadObject(void); // void _$_13radLoadObject();

    // void ReleaseVerified__13radLoadObject();
public:
    void *operator new(size_t);
    void *operator new(size_t, int);
    // void func_003ED588();
    void operator delete(void *); // void __dl__13radLoadObjectPv();
    // void func_003ED5B8();
    // void __tf13radLoadObject();
};
// void func_003ED618();

// rodata

// extern UNK_TYPE _vt$13radLoadObject;
// extern UNK_TYPE D_004ABFA8;

// data

// extern UNK_TYPE _13radLoadObject$s_allocator;

#endif
