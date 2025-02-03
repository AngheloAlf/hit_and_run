#ifndef MEMORYMANAGER_HPP
#define MEMORYMANAGER_HPP

// text

// void GetStatus__19IRadMemoryAllocatorPUiN31();
// void GetSize__19IRadMemoryAllocator();
// void radMemorySetUsableAllocators__FPiUi();
void radMemoryInitialize(void);
void radMemoryTerminate(void);
void radMemorySetOutOfMemoryCallback(void (*)(void *, int, unsigned int), void *);
// void SetMemoryIdentification__FPCc();
// void radMemoryAlloc__FiUi();
// void radMemoryAllocAligned__FiUiUi();
// void radMemoryFree__FiPv();
// void radMemoryFreeAligned__FiPv();
// void radMemoryFreeAligned__FPv();
// void radMemoryFree__FPv();
// void radMemoryRegisterAllocator__FiiP19IRadMemoryAllocator();
// void radMemoryGetAllocator__Fi();
// void radMemoryGetAllocatorID__FP19IRadMemoryAllocator();
// void radMemoryUnregisterAllocator__Fi();
// void radMemoryFindAllocatorRecursive__FP26radMemoryAllocatorTreeNodePv();
// void radMemoryFindAllocatorAlignedRecursive__FP26radMemoryAllocatorTreeNodePv();
// void func_003C8408();
// void radMemorySetAllocatorCallback__FP30IRadMemorySetAllocatorCallback();
// void radMemoryGetAllocatorCallback__Fv();
// void func_003C84F0();
// void radMemoryGetCurrentAllocator__Fv();
int radMemorySetCurrentAllocator(int);
// void radMemorySetAllocationName__FPCc();
// void radMemoryGetAllocationName__Fv();
// void __tf19IRadMemoryAllocator();
// void __tf24radMemoryAllocatorMalloc();
// void func_003C8718();
// void AddRef__24radMemoryAllocatorMalloc();
// void Release__24radMemoryAllocatorMalloc();
// void GetMemory__24radMemoryAllocatorMallocUi();
// void FreeMemory__24radMemoryAllocatorMallocPv();
// void GetMemoryAligned__24radMemoryAllocatorMallocUiUi();
// void FreeMemoryAligned__24radMemoryAllocatorMallocPv();
// void CanFreeMemory__24radMemoryAllocatorMallocPv();
// void CanFreeMemoryAligned__24radMemoryAllocatorMallocPv();
// void func_003C87C0();

// bss

// extern UNK_TYPE D_004F7D50;
// extern UNK_TYPE D_004F7D58;
// extern UNK_TYPE D_004F7D68;

// rodata

// extern UNK_TYPE D_004A5748;
// extern UNK_TYPE D_004A5768;
// extern UNK_TYPE D_004A5778;
// extern UNK_TYPE D_004A57A0;
// extern UNK_TYPE D_004A57B0;
// extern UNK_TYPE D_004A57C0;
// extern UNK_TYPE D_004A57D8;
// extern UNK_TYPE _vt$24radMemoryAllocatorMalloc;
// extern UNK_TYPE _vt$19IRadMemoryAllocator;
// extern UNK_TYPE D_004A58B0;
// extern UNK_TYPE D_004A58C8;

// data

// extern UNK_TYPE gEmergencyMemory;
// extern UNK_TYPE g_pRadMemoryAllocator_Malloc;
// extern UNK_TYPE D_0043D5C0;
// extern UNK_TYPE D_0043D5C4;
// extern UNK_TYPE D_0043D5C8;
// extern UNK_TYPE D_0043D5CC;
// extern UNK_TYPE D_0043D5D0;
// extern UNK_TYPE D_0043D5D4;
// extern UNK_TYPE g_pRadMemoryOutOfMemoryCallback;
// extern UNK_TYPE g_pRadMemoryOutOfMemoryCallbackUserData;
// extern UNK_TYPE g_CurrentMemoryIdentification;
// extern UNK_TYPE g_pAllocationName;
// extern UNK_TYPE D_0043D6E4;

#endif
