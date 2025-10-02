#ifndef OBJECT_HPP
#define OBJECT_HPP

#include "types.h"
#include "unk.h"

#include "libc/stddef.h"

#include "libs/IRefCount.hpp"

class radLoadObject: public IRefCount {
    /* 0x04 */ size_t reference_count;
    /*      */ // size = 0x8

protected:
    radLoadObject(void); // void __13radLoadObject();

public:
    /* vt 0x0C */ virtual void AddRef(void); // void AddRef__13radLoadObject();
    /* vt 0x14 */ virtual void Release(void); // void Release__13radLoadObject();
protected:
    /* vt 0x1C */ virtual ~radLoadObject(void); // void _$_13radLoadObject();

    void ReleaseVerified(void); // void ReleaseVerified__13radLoadObject();
public:
    void *operator new(size_t); // __nw__13radLoadObjectUi
    void *operator new(size_t, int); // __nw__13radLoadObjectUii
    void operator delete(void *); // void __dl__13radLoadObjectPv();

private:
    static UNK_TYPE4 s_allocator;
};

#endif
