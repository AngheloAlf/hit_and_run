#ifndef IREFCOUNT_HPP
#define IREFCOUNT_HPP

class IRefCount {
protected:
    IRefCount(void); // void __9IRefCount();

    /* vt 0x0C */ virtual void AddRef(void) = 0;
    /* vt 0x14 */ virtual void Release(void) = 0;
};

#endif
