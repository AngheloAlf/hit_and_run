#ifndef LIBS_RADCORE_RADCOREPR_PLATFORM_HPP
#define LIBS_RADCORE_RADCOREPR_PLATFORM_HPP

#include "IRadDriveErrorCallback.hpp"
// text

enum radPlatformIOPMedia {
    /* 0x0 */ radPlatformIOPMedia_0,
    /* 0x1 */ radPlatformIOPMedia_1,
};

enum radPlatformGameMediaType {
    /* 0x1 */ radPlatformGameMediaType_1 = 1,
};

void radPlatformInitialize(char const *, radPlatformIOPMedia, radPlatformGameMediaType, char const *, int);
void radPlatformTerminate(void);
// void radPlatformGet__Fv();
// void func_003D7968();
// void __tf11radPlatform();
// void func_003D79D0();
// void __11radPlatform();
// void AddRef__11radPlatform();
// void Release__11radPlatform();
// void LoadIrxModule__11radPlatformPCciPc();
// void UnloadIrxModule__11radPlatformPCc();
// void GetMediaType__11radPlatform();
// void func_003D7F28();
// void __tf12IRadPlatform();
// void func_003D7F90();
// void __12IRadPlatform();

// rodata

// extern UNK_TYPE D_004A80A0;
// extern UNK_TYPE D_004A80D8;
// extern UNK_TYPE D_004A80E0;
// extern UNK_TYPE D_004A80E8;
// extern UNK_TYPE D_004A80F0;
// extern UNK_TYPE D_004A8100;
// extern UNK_TYPE _vt$11radPlatform;
// extern UNK_TYPE D_004A81F0;
// extern UNK_TYPE D_004A8270;
// extern UNK_TYPE _vt$12IRadPlatform;

// bss

// extern UNK_TYPE D_004F8980;
// extern UNK_TYPE D_004F8988;

#endif
