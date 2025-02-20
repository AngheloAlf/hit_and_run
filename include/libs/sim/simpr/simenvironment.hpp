#ifndef SIMENVIRONMENT_HPP
#define SIMENVIRONMENT_HPP

#include "types.h"
#include "unk.h"

// text

namespace sim {
    class SimUnits {
    public:
        static void Initialize(void);
        static UNK_RET Reset(void); // void Reset__Q23sim8SimUnits();

    private:
        // void __Q23sim8SimUnits();
        // void _$_Q23sim8SimUnits();

    public:
        static char sUnitSet; // extern UNK_TYPE _Q23sim8SimUnits$sUnitSet;
        // extern UNK_TYPE D_00436389;
        static float sM; // extern UNK_TYPE _Q23sim8SimUnits$sM;
        static float sL; // extern UNK_TYPE _Q23sim8SimUnits$sL;
        static float sT; // extern UNK_TYPE _Q23sim8SimUnits$sT;
        // extern UNK_TYPE _Q23sim8SimUnits$sList;
    };

    class SimEnvironment {
        // void SetCollisionDistanceCGS__Q23sim14SimEnvironmentf();
        // void GetDefaultSimEnvironment__Q23sim14SimEnvironment();
        // void __Q23sim14SimEnvironment();
        // void _$_Q23sim14SimEnvironment();
        // void func_002D1E70();
        // void UpdateUnits__Q23sim14SimEnvironment();
        // void SetGravityCGS__Q23sim14SimEnvironmentfff();

        /* vt 0x0C */ virtual void virtual_0C(void); // placeholder
    public:
        /* vt 0x14 */ virtual void virtual_14(void);
    private:
        /* vt 0x1C */ virtual void virtual_1C(void); // placeholder

        // void __tfQ23sim14SimEnvironment();
    public:
        static SimEnvironment *sDefaultSimEnvironment; // extern UNK_TYPE _Q23sim14SimEnvironment$sDefaultSimEnvironment;
    private:
        // extern UNK_TYPE _Q23sim14SimEnvironment$sCollisionDistanceCGS;
        // extern UNK_TYPE _Q23sim14SimEnvironment$sCollisionDistance;
        // extern UNK_TYPE _vt$Q23sim14SimEnvironment$Q23sim8SimUnits;
        // extern UNK_TYPE _vt$Q23sim14SimEnvironment;
    };
}

// void func_002D1FF8();
// void SetValueCGS__Q23sim8SimSpeedf();
// void __Q23sim9SimLengthf();
// void SetValueCGS__Q23sim9SimLengthf();
// void __Q23sim7SimTimef();
// void SetValueCGS__Q23sim7SimTimef();
// void func_002D2100();
// void __tfQ23sim8SimUnits();
// void _$_Q23sim7SimTime();
// void __tfQ23sim7SimTime();
// void _$_Q23sim9SimLength();
// void __tfQ23sim9SimLength();
// void __tfQ23sim8SimSpeed();
// void _$_Q23simt5TList1ZPQ23sim8SimUnits();
// void __tfQ23simt5TList1ZPQ23sim8SimUnits();
// void UpdateUnits__Q23sim8SimUnits();
// void func_002D2388();
// void ValueCGS__CQ23sim11SimCGSValue();
// void Value__CQ23sim11SimCGSValue();
// void _$_Q23sim8SimSpeed();
// void __tfQ23sim11SimCGSValue();
// void _$_Q23sim11SimCGSValue();

// data


// rodata

// extern UNK_TYPE D_004848C8;
// extern UNK_TYPE _vt$Q23simt5TList1ZPQ23sim8SimUnits;
// extern UNK_TYPE _vt$Q23sim8SimSpeed;
// extern UNK_TYPE _vt$Q23sim9SimLength;
// extern UNK_TYPE _vt$Q23sim7SimTime;
// extern UNK_TYPE _vt$Q23sim8SimUnits;
// extern UNK_TYPE D_00484A00;
// extern UNK_TYPE D_00484A10;
// extern UNK_TYPE D_00484A28;
// extern UNK_TYPE D_00484A38;
// extern UNK_TYPE D_00484A48;
// extern UNK_TYPE D_00484A60;
// extern UNK_TYPE D_00484A70;
// extern UNK_TYPE _vt$Q23sim11SimCGSValue;
// extern UNK_TYPE D_00484AC8;
// extern UNK_TYPE D_00484AE0;

#endif
