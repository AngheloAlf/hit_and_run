#ifndef MEMORY_HPP
#define MEMORY_HPP

// text

namespace p3d {
    enum AllocType {
        /* 2 */ ENUM_P3D_ALLOCTYPE_2 = 2,
    };

    // void MemSetup__3p3dv();
    // void func_003285C0();
    AllocType GetCurrentAlloc(void); // void GetCurrentAlloc__3p3dv();
    void SetCurrentAlloc(AllocType); // void SetCurrentAlloc__3p3dQ23p3d9AllocType();
    // void func_00328668();
    // void MallocTemp__3p3dUi();
    // void FreeTemp__3p3dPv();
    void UsePermanentMem(bool);
};
// void func_003286E8();
// void __Q23p3d12MemoryRouter();
// void __tfQ23p3d12MemoryRouter();
// void __tfQ23p3d13DefaultRouter();
// void GetCurrent__Q23p3d13DefaultRouter();
// void SetCurrent__Q23p3d13DefaultRouterQ23p3d9AllocType();
// void _GLOBAL_$I$MemSetup__3p3dv();

// bss

// extern UNK_TYPE D_004B2E78;

// rodata

// extern UNK_TYPE _vt$Q23p3d13DefaultRouter;
// extern UNK_TYPE _vt$Q23p3d12MemoryRouter;
// extern UNK_TYPE D_0048ED08;
// extern UNK_TYPE D_0048ED20;

// data

// extern UNK_TYPE D_004365D4;
// extern UNK_TYPE D_004365D8;

#endif
