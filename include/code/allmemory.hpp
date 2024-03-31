#ifndef ALLMEMORY_HPP
#define ALLMEMORY_HPP

#include "types.h"
#include "libc/stddef.h"

enum GameMemoryAllocator {
    /* 0x1 */ GameMemoryAllocator_1 = 1,
    /* 0x3 */ GameMemoryAllocator_3 = 3,
};

// text

// void func_00165EE0();
// void CreateHeap__F19GameMemoryAllocatorUi();
// void DestroyHeapA__F19GameMemoryAllocator();
// void GetAllocator__F19GameMemoryAllocator();
// void GetHeapReference__F19GameMemoryAllocator();
// void GetTotalMemoryFreeInAllHeaps__Fv();
// void func_001661E8();
// void __12FBMemoryPoolUii19GameMemoryAllocator();
// void _$_12FBMemoryPool();
// void Allocate__12FBMemoryPoolUi();
// void Free__12FBMemoryPoolPvUi();
// void func_001663E8();
// void AllocateLargestFreeBlock__6MemoryP19IRadMemoryAllocatorRPv();
// void InitializeMemoryUtilities__6Memoryv();
// void func_00166508();
// void GetFreeMemoryProfile__6Memoryv();
// void GetLargestFreeBlock__6Memoryv();
// void GetLargestFreeBlock__6MemoryP19IRadMemoryAllocator();
// void GetMaxFreeMemory__6Memoryv();
// void GetTotalMemoryFree__6Memoryv();
// void GetTotalMemoryFreeLowWaterMark__6Memoryv();
// void GetTotalMemoryUnavailable__6Memoryv();
// void GetTotalMemoryUsed__6Memoryv();
// void PrintMemoryStatsToTty__6Memoryv();
// void func_00166930();
// void __builtin_new();
// void __builtin_delete();
// void __builtin_vec_new();
// void __builtin_vec_delete();
void* operator new(size_t, GameMemoryAllocator);
// void __dl__FPv19GameMemoryAllocator(); // operator delete(void *, GameMemoryAllocator)
// void __vn__FUi19GameMemoryAllocator();
// void func_00166D48();
// void FindFreeMemory__F19GameMemoryAllocatorUi();
// void SetupAllocatorSearch__F19GameMemoryAllocator();
void PrintOutOfMemoryMessage(void *, s32, u32);
// void __9HeapStack19GameMemoryAllocator();
// void _$_9HeapStack();
// void Push__9HeapStack19GameMemoryAllocator();
// void Pop__9HeapStack19GameMemoryAllocator();
// void SetTop__9HeapStack19GameMemoryAllocator();
// void Top__C9HeapStack();
// void __19HeapActivityTracker();
// void MemoryAllocated__19HeapActivityTrackeriPvUi();
// void MemoryFreed__19HeapActivityTrackeriPv();
// void GetInstance__11HeapManager();
// void func_001675E8();

class HeapManager {
private:
// void __11HeapManager19GameMemoryAllocator();
// void _$_11HeapManager();
// void func_001676C0();
// void GetFudgeFactor__11HeapManager();

public:
    void PushHeap(GameMemoryAllocator);
    void PopHeap(GameMemoryAllocator);

private:

// void GetCurrentHeap__C11HeapManager();
// void GetCurrentAllocator__11HeapManager();
// void SetCurrentAllocator__11HeapManageri();
// void DumpHeapStats__11HeapManagerb();
// void ResetArtStats__11HeapManager();

public:
    void PrepareHeapsStartup(void);

private:
// void PrepareHeapsFE__11HeapManager();
// void PrepareHeapsInGame__11HeapManager();
// void PrepareHeapsSuperSprint__11HeapManager();
};

// void func_00168968();
HeapManager *HeapMgr(void);
// void _M_erase__t8_Rb_tree5ZPvZt4pair2ZCPvZUiZt10_Select1st1Zt4pair2ZCPvZUiZt4less1ZPvZt7s2alloc1Zt4pair2ZCPvZUiPt13_Rb_tree_node1Zt4pair2ZCPvZUi();
// void func_00168A18();
// void _$_t19_Rb_tree_alloc_base3Zt4pair2ZCPvZUiZt7s2alloc1Zt4pair2ZCPvZUib0();
// void _$_t3map4ZPvZUiZt4less1ZPvZt7s2alloc1Zt4pair2ZCPvZUi();
// void func_00168AE0();
// void __tf9HeapStack();
// void __tf19HeapActivityTracker();
// void __tf11HeapManager();
// void __30IRadMemorySetAllocatorCallback();
// void __26IRadMemoryActivityCallback();
// void func_00168C90();
// void __tf30IRadMemorySetAllocatorCallback();
// void __tf26IRadMemoryActivityCallback();
// void _GLOBAL_$I$g_HeapCreationData();
// void _GLOBAL_$D$g_HeapCreationData();

// bss

// extern UNK_TYPE D_004B19F8;
// extern UNK_TYPE D_004B19FC;
// extern UNK_TYPE D_004B1A00;
// extern UNK_TYPE D_004B1A10;
// extern UNK_TYPE D_004B1A18;

// data

// extern UNK_TYPE g_HeapCreationData;
// extern UNK_TYPE D_0042C2A8;
// extern UNK_TYPE D_0042C2B0;
// extern UNK_TYPE D_0042C2B4;
// extern UNK_TYPE D_0042C2B8;
// extern UNK_TYPE D_0042C2BC;
// extern UNK_TYPE g_LockedPersistentHeap;
// extern UNK_TYPE g_HeapManagerCreated;
extern u8 gMemorySystemInitialized;
// extern UNK_TYPE g_NoHeapRoute;
// extern UNK_TYPE HeapNames;
// extern UNK_TYPE D_0042C31C;
// extern UNK_TYPE D_0042C320;
// extern UNK_TYPE D_0042C330;
// extern UNK_TYPE D_0042C340;
// extern UNK_TYPE D_0042C348;
// extern UNK_TYPE D_0042C34C;
// extern UNK_TYPE g_HeapActivityTracker;
// extern UNK_TYPE _11HeapManager$s_Instance;
// extern UNK_TYPE D_0042C398;
// extern UNK_TYPE g_HeapArray;
// extern UNK_TYPE D_0042C41C;

// rodata

// extern UNK_TYPE D_0045D940;
// extern UNK_TYPE D_0045D950;
// extern UNK_TYPE D_0045DA58;
// extern UNK_TYPE D_0045DAB0;
// extern UNK_TYPE D_0045DAC0;
// extern UNK_TYPE D_0045DAD0;
// extern UNK_TYPE D_0045DAF0;
// extern UNK_TYPE D_0045DB00;
// extern UNK_TYPE D_0045DB10;
// extern UNK_TYPE D_0045DB20;
// extern UNK_TYPE D_0045DB30;
// extern UNK_TYPE D_0045DB48;
// extern UNK_TYPE D_0045DB60;
// extern UNK_TYPE D_0045DB70;
// extern UNK_TYPE D_0045DB80;
// extern UNK_TYPE D_0045DB90;
// extern UNK_TYPE D_0045DBA0;
// extern UNK_TYPE D_0045DBB0;
// extern UNK_TYPE D_0045DBC0;
// extern UNK_TYPE D_0045DBD8;
// extern UNK_TYPE D_0045DBF0;
// extern UNK_TYPE D_0045DC08;
// extern UNK_TYPE D_0045DC18;
// extern UNK_TYPE D_0045DC30;
// extern UNK_TYPE D_0045DC48;
// extern UNK_TYPE D_0045DC60;
// extern UNK_TYPE D_0045DC68;
// extern UNK_TYPE D_0045DC80;
// extern UNK_TYPE D_0045DC98;
// extern UNK_TYPE D_0045DCB0;
// extern UNK_TYPE D_0045DCC0;
// extern UNK_TYPE D_0045DCD0;
// extern UNK_TYPE D_0045DCE8;
// extern UNK_TYPE D_0045DCF8;
// extern UNK_TYPE D_0045DD00;
// extern UNK_TYPE D_0045DD08;
// extern UNK_TYPE D_0045DD10;
// extern UNK_TYPE D_0045DD18;
// extern UNK_TYPE D_0045DD20;
// extern UNK_TYPE D_0045DD30;
// extern UNK_TYPE D_0045DD38;
// extern UNK_TYPE D_0045DD40;
// extern UNK_TYPE D_0045DD48;
// extern UNK_TYPE D_0045DD58;
// extern UNK_TYPE D_0045DD78;
// extern UNK_TYPE D_0045DD90;
// extern UNK_TYPE D_0045DDA8;
// extern UNK_TYPE D_0045DDC0;
// extern UNK_TYPE D_0045DDD0;
// extern UNK_TYPE D_0045DE00;
// extern UNK_TYPE D_0045DE08;
// extern UNK_TYPE D_0045DE18;
// extern UNK_TYPE D_0045DE38;
// extern UNK_TYPE D_0045DE48;
// extern UNK_TYPE D_0045DE60;
// extern UNK_TYPE D_0045DE70;
// extern UNK_TYPE D_0045DE80;
// extern UNK_TYPE D_0045DEB0;
// extern UNK_TYPE _vt$11HeapManager;
// extern UNK_TYPE _vt$19HeapActivityTracker;
// extern UNK_TYPE _vt$9HeapStack;
// extern UNK_TYPE D_0045DF38;
// extern UNK_TYPE D_0045DF48;
// extern UNK_TYPE D_0045DF60;
// extern UNK_TYPE _vt$26IRadMemoryActivityCallback;
// extern UNK_TYPE _vt$30IRadMemorySetAllocatorCallback;
// extern UNK_TYPE D_0045DFB0;
// extern UNK_TYPE D_0045DFD8;

#endif
