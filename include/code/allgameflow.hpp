#ifndef ALLGAMEFLOW_HPP
#define ALLGAMEFLOW_HPP

#include "types.h"

#include "code/ContextEnum.hpp"

// text

class GameFlow {
public:
    static GameFlow *CreateInstance(void);

private:
// void GetInstance__8GameFlow();

public:
    static void DestroyInstance(void);

private:
// void PushContext__8GameFlow11ContextEnum();
// void func_0014FDD8(); // ????

public:
    void SetContext(ContextEnum);

private:
// void OnTimerDone__8GameFlowUiPv();

// void __8GameFlow();
// void _$_8GameFlow();

public:
    virtual void virtual_0C(u32, s32);
};

// void __uninitialized_copy_aux__H2ZP11ContextEnumZP11ContextEnum_X01X01X11G12__false_type_X11();
// void _M_insert_aux__t6vector2Z11ContextEnumZt7s2alloc1Z11ContextEnumP11ContextEnumRC11ContextEnum();
// void __tf8GameFlow();
// void __17IRadTimerCallback();
// void _$_t5stack2Z11ContextEnumZt6vector2Z11ContextEnumZt7s2alloc1Z11ContextEnum();
// void __tf17IRadTimerCallback();
// void _$_t18_Vector_alloc_base3Z11ContextEnumZt7s2alloc1Z11ContextEnumb0();

// data

// extern UNK_TYPE _8GameFlow$spInstance;
// extern UNK_TYPE D_00426DA0;

// rodata

// extern UNK_TYPE D_0045AEE8;
// extern UNK_TYPE _vt$8GameFlow;
// extern UNK_TYPE D_0045AFC8;
// extern UNK_TYPE _vt$17IRadTimerCallback;
// extern UNK_TYPE D_0045AFF0;

#endif
