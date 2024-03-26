#ifndef RADFILE_HPP
#define RADFILE_HPP

#include "cementer.hpp"
#include "memoryspaceps2.hpp"
#include "instancedrive.hpp"

// This is here by guess
enum radFilePriority {
    /* 0x1 */ radFilePriority_1 = 0x1,
};

// text

// void radMakeIconSys__FP13radPs2IconSysP11radSJISCharUs();
// void radSetIconSysTitle__FP13radPs2IconSysP11radSJISCharUs();
void radFileInitialize(unsigned int, unsigned int, int);
void radFileTerminate(void);
void radFileService(void);
// void func_003D7498();
// void radFileOpenAsync__FPP8IRadFilePCcb16radFileOpenFlags15radFilePriorityUii14radMemorySpace();
// void func_003D74C8();
void radDriveOpenAsync(IRadDrive **, char const *, radFilePriority, int);
// void func_003D7500();
void radSetDefaultDrive(char const *);
// void func_003D7528();
// void radFileRegisterCementLibraryAsync__FPP17IRadCementLibraryPCc24radCementLibraryPriorityUii14radMemorySpace();
void radFileRegisterCementLibrarySync(IRadCementLibrary **, char const *, radCementLibraryPriority, unsigned int, int, radMemorySpace);
// void func_003D7578();
void radDriveMount(char const *, int);
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
