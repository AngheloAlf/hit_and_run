#ifndef RADFILE_HPP
#define RADFILE_HPP

#include "types.h"

#include "cementer.hpp"
#include "memoryspaceps2.hpp"
#include "instancedrive.hpp"

//! GUESS: This is here by guess
enum radFilePriority {
    /* 0x1 */ radFilePriority_1 = 0x1,
};

//! GUESS: This is here by guessing
enum radFileError {
    /* 0x00 */ RADFILEERROR_0,
    /* 0x01 */ RADFILEERROR_1,
    /* 0x02 */ RADFILEERROR_2,
    /* 0x03 */ RADFILEERROR_3,
    /* 0x04 */ RADFILEERROR_4,
    /* 0x05 */ RADFILEERROR_5,
    /* 0x06 */ RADFILEERROR_6,
    /* 0x07 */ RADFILEERROR_7,
    /* 0x08 */ RADFILEERROR_8,
    /* 0x09 */ RADFILEERROR_9,
    /* 0x0A */ RADFILEERROR_A,
    /* 0x0B */ RADFILEERROR_B,
    /* 0x0C */ RADFILEERROR_C,
    /* 0x0D */ RADFILEERROR_D,
    /* 0x0E */ RADFILEERROR_E,
    /* 0x0F */ RADFILEERROR_F,
    /* 0x10 */ RADFILEERROR_10,
    /* 0x11 */ RADFILEERROR_11,
    /* 0x12 */ RADFILEERROR_12,
    /* 0x13 */ RADFILEERROR_13,
    /* 0x14 */ RADFILEERROR_14,
    /* 0x15 */ RADFILEERROR_15,
    /* 0x16 */ RADFILEERROR_16,
    /* 0x17 */ RADFILEERROR_17,
    /* 0x18 */ RADFILEERROR_18,
    /* 0x19 */ RADFILEERROR_19,
};

// text

// void radMakeIconSys__FP13radPs2IconSysP11radSJISCharUs();
// void radSetIconSysTitle__FP13radPs2IconSysP11radSJISCharUs();
void radFileInitialize(u32, u32, s32);
void radFileTerminate(void);
void radFileService(void);
// void func_003D7498();
// void radFileOpenAsync__FPP8IRadFilePCcb16radFileOpenFlags15radFilePriorityUii14radMemorySpace();
// void func_003D74C8();
void radDriveOpenAsync(IRadDrive **, char const *, radFilePriority, s32);
// void func_003D7500();
void radSetDefaultDrive(char const *);
// void func_003D7528();
// void radFileRegisterCementLibraryAsync__FPP17IRadCementLibraryPCc24radCementLibraryPriorityUii14radMemorySpace();
void radFileRegisterCementLibrarySync(IRadCementLibrary **, char const *, radCementLibraryPriority, u32, s32, radMemorySpace);
// void func_003D7578();
void radDriveMount(char const *, s32);
void radDriveUnmount(char const *);
// void func_003D75C0();

// rodata

// extern UNK_TYPE D_004A7FF8;
// extern UNK_TYPE D_004A8000;
// extern UNK_TYPE D_004A8030;
// extern UNK_TYPE D_004A8060;
// extern UNK_TYPE D_004A8070;
// extern UNK_TYPE D_004A8080;
// extern UNK_TYPE D_004A8090;

#endif
