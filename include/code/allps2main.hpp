#ifndef ALLPS2MAIN_HPP
#define ALLPS2MAIN_HPP

#include "unk.h"

#include "libs/radcore/radcorepr/time.hpp"

#include "code/allgameflow.hpp"
#include "code/allrenderflow.hpp"

enum CmdLineOptionEnum {
    /* 0x05 */ CmdLineOptionEnum_5 = 0x5,

    /* 0x07 */ CmdLineOptionEnum_7 = 0x7,
    /* 0x08 */ CmdLineOptionEnum_8,

    /* 0x0A */ CmdLineOptionEnum_A = 0xA,

    /* 0x2E */ CmdLineOptionEnum_2E = 0x2E,
};

class CommandLineOptions {
    static unsigned long sOptions;

public:
    static void InitDefaults(void);
    static void HandleOption(char const *);
    static int Get(CmdLineOptionEnum);
};

class Platform {
private:

public:
    // /* 0x0 */ char unk_0[0x4];
    // /* 0x4 */ unsigned int unk_4;
    // /* 0x8 */ unsigned char unk_8;

    virtual void virtual_0C(void);
    virtual void virtual_14(void);
};

// text

class Game {
private:
    /* 0x00 */ Platform *platform;
    /* 0x04 */ IRadTimerList *unk_04;
    /* 0x08 */ GameFlow *unk_08;
    /* 0x0C */ RenderFlow *unk_0C;
    /* 0x10 */ int unk_10;
    /* 0x14 */ unsigned char unk_14;
    /* 0x18 */ int unk_18;
    /* 0x1C */ int unk_1C;

    static Game *spInstance;

public:
    static Game *CreateInstance(Platform *platform);
    static void DestroyInstance(void);
    static Game *Game::GetInstance(void);

    Platform *GetPlatform(void);

    void Initialize(void);
    void Terminate(void);
    void Run(void);
    void Stop(void);

    static int GetRandomSeed(void);

private:
    Game(Platform *);
    virtual ~Game();
};

int main(int argc, char *argv[]);

// void func_00163468__FiPPc();
// void func_001634B8__Fv();
// void LoadMemP3DFile__FPUcUiP12tEntityStore();
// void CreateInstance__11PS2Platform();
// void GetInstance__11PS2Platform();
// void DestroyInstance__11PS2Platform();
// void InitializeFoundation__11PS2Platform();
// void InitializeMemory__11PS2Platform();
// void InitializePlatform__11PS2Platform();
// void ShutdownPlatform__11PS2Platform();
// void ResetMachine__11PS2Platform();
// void LaunchDashboard__11PS2Platform();
// void DisplaySplashScreen__11PS2PlatformQ28Platform12SplashScreenPCcfffG10pddiColouri();
// void DisplaySplashScreen__11PS2PlatformPCcT1fffG10pddiColouri();
// void InitializeFoundationDrive__11PS2Platform();
// void ShutdownFoundation__11PS2Platform();
// void InitializePure3D__11PS2Platform();
// void ShutdownPure3D__11PS2Platform();
// void SetProgressiveMode__11PS2Platformb();
// void CheckForStartupButtons__11PS2Platform();
// void OnControllerError__11PS2PlatformPCc();
// void OnDriveError__11PS2Platform12radFileErrorPCcPv();
// void __11PS2Platform();
// void _$_11PS2Platform();
// void EnableSnProfiler__11PS2Platform();
void CreateSingletons(void);
void DestroySingletons(void);
// void __13tUidUnaligned();
// void __13tUidUnalignedRC13tUidUnaligned();
// void __ne__C13tUidUnalignedG13tUidUnaligned();
// void __eq__C13tUidUnalignedG13tUidUnaligned();
// void __lt__C13tUidUnalignedG13tUidUnaligned();
// void __er__C13tUidUnalignedG13tUidUnaligned();
// void __aml__13tUidUnalignedUl();
// void __ad__C13tUidUnalignedG13tUidUnaligned();
// void __rs__C13tUidUnalignedi();
// void func_00165BC8();
// void __tf4Game();
// void __tf11PS2Platform();
// void func_00165CB8();
// void __11tBMPHandler();
// void __11tPNGHandler();
// void __13tTargaHandler();
// void __Q216radLoadInventoryt8SafeCast1Z12tTextureFont();
// void func_00165DA0();
// void __tf8Platform();
// void __tfQ216radLoadInventoryt8SafeCast1Z12tTextureFont();
// void func_00165E60();
// void safe_cast__Q216radLoadInventoryt8SafeCast1Z12tTextureFontP9IRefCount();
// void func_00165EB8();
// void _GLOBAL_$I$_18CommandLineOptions$sOptions();

// data

// extern UNK_TYPE _18CommandLineOptions$sOptions;
// extern UNK_TYPE _18CommandLineOptions$s_defaultLevel;
// extern UNK_TYPE _18CommandLineOptions$s_defaultMission;
// extern UNK_TYPE _4Game$spInstance;
// extern UNK_TYPE g_inDemoMode;
// extern UNK_TYPE D_00427161;
// extern UNK_TYPE ERROR_STRINGS;
// extern UNK_TYPE _11PS2Platform$s_MainCement;
// extern UNK_TYPE _11PS2Platform$spInstance;
// extern UNK_TYPE gFont;
// extern UNK_TYPE D_0042AACD;

// bss

// extern UNK_TYPE D_004B19D8;
// extern UNK_TYPE D_004B19E0;
// extern UNK_TYPE D_004B19E8;
// extern UNK_TYPE D_004B19F0;

// rodata

// extern UNK_TYPE STR_0045D010;
// extern UNK_TYPE STR_0045D020;
// extern UNK_TYPE STR_0045D050;
// extern UNK_TYPE D_0045D078;
// extern UNK_TYPE D_0045D090;
// extern UNK_TYPE D_0045D098;
// extern UNK_TYPE D_0045D0A8;
// extern UNK_TYPE D_0045D0B8;
// extern UNK_TYPE D_0045D0C0;
// extern UNK_TYPE D_0045D0D0;
// extern UNK_TYPE D_0045D0E0;
// extern UNK_TYPE D_0045D0F0;
// extern UNK_TYPE D_0045D0F8;
// extern UNK_TYPE D_0045D108;
// extern UNK_TYPE D_0045D118;
// extern UNK_TYPE D_0045D128;
// extern UNK_TYPE D_0045D138;
// extern UNK_TYPE D_0045D148;
// extern UNK_TYPE D_0045D158;
// extern UNK_TYPE D_0045D168;
// extern UNK_TYPE D_0045D170;
// extern UNK_TYPE D_0045D178;
// extern UNK_TYPE D_0045D188;
// extern UNK_TYPE D_0045D198;
// extern UNK_TYPE D_0045D1A0;
// extern UNK_TYPE D_0045D1A8;
// extern UNK_TYPE D_0045D1B0;
// extern UNK_TYPE D_0045D1C0;
// extern UNK_TYPE D_0045D1D0;
// extern UNK_TYPE D_0045D1D8;
// extern UNK_TYPE D_0045D1E8;
// extern UNK_TYPE D_0045D1F8;
// extern UNK_TYPE D_0045D208;
// extern UNK_TYPE D_0045D218;
// extern UNK_TYPE D_0045D228;
// extern UNK_TYPE D_0045D238;
// extern UNK_TYPE D_0045D248;
// extern UNK_TYPE D_0045D258;
// extern UNK_TYPE D_0045D260;
// extern UNK_TYPE D_0045D268;
// extern UNK_TYPE D_0045D278;
// extern UNK_TYPE D_0045D288;
// extern UNK_TYPE D_0045D298;
// extern UNK_TYPE D_0045D2A8;
// extern UNK_TYPE D_0045D2B0;
// extern UNK_TYPE D_0045D2C8;
// extern UNK_TYPE D_0045D2D0;
// extern UNK_TYPE D_0045D2E0;
// extern UNK_TYPE D_0045D2E8;
// extern UNK_TYPE D_0045D2F8;
// extern UNK_TYPE D_0045D308;
// extern UNK_TYPE D_0045D318;
// extern UNK_TYPE D_0045D320;
// extern UNK_TYPE D_0045D330;
// extern UNK_TYPE D_0045D340;
// extern UNK_TYPE D_0045D350;
// extern UNK_TYPE D_0045D360;
// extern UNK_TYPE D_0045D370;
// extern UNK_TYPE D_0045D378;
extern UNK_TYPE D_0045D380;
// extern UNK_TYPE STR_0045D388;
// extern UNK_TYPE STR_0045D448;
// extern UNK_TYPE STR_0045D450;
// extern UNK_TYPE STR_0045D458;
// extern UNK_TYPE D_0045D460;
// extern UNK_TYPE D_0045D468;
// extern UNK_TYPE D_0045D478;
// extern UNK_TYPE D_0045D490;
// extern UNK_TYPE D_0045D4C8;
// extern UNK_TYPE D_0045D4D0;
// extern UNK_TYPE D_0045D4E0;
// extern UNK_TYPE D_0045D4F8;
// extern UNK_TYPE D_0045D510;
// extern UNK_TYPE D_0045D528;
// extern UNK_TYPE D_0045D538;
// extern UNK_TYPE D_0045D548;
// extern UNK_TYPE D_0045D570;
// extern UNK_TYPE D_0045D580;
// extern UNK_TYPE STR_0045D590;
// extern UNK_TYPE STR_0045D598;
// extern UNK_TYPE STR_0045D5A8;
// extern UNK_TYPE STR_0045D5D0;
// extern UNK_TYPE STR_0045D600;
// extern UNK_TYPE STR_0045D620;
// extern UNK_TYPE STR_0045D648;
// extern UNK_TYPE STR_0045D658;
// extern UNK_TYPE STR_0045D660;
// extern UNK_TYPE STR_0045D670;
// extern UNK_TYPE STR_0045D678;
// extern UNK_TYPE STR_0045D690;
// extern UNK_TYPE STR_0045D6A0;
// extern UNK_TYPE STR_0045D6B8;
// extern UNK_TYPE STR_0045D6C8;
// extern UNK_TYPE D_0045D6D0;
// extern UNK_TYPE D_0045D6E0;
// extern UNK_TYPE D_0045D6F0;
// extern UNK_TYPE D_0045D6F8;
// extern UNK_TYPE D_0045D700;
// extern UNK_TYPE jtbl_0045D710;
// extern UNK_TYPE D_0045D738;
// extern UNK_TYPE D_0045D748;
// extern UNK_TYPE D_0045D758;
// extern UNK_TYPE D_0045D768;
// extern UNK_TYPE D_0045D778;
// extern UNK_TYPE D_0045D788;
// extern UNK_TYPE D_0045D798;
// extern UNK_TYPE _vt$11PS2Platform;
// extern UNK_TYPE _vt$4Game;
// extern UNK_TYPE D_0045D840;
// extern UNK_TYPE D_0045D848;
// extern UNK_TYPE _vt$Q216radLoadInventoryt8SafeCast1Z12tTextureFont;
// extern UNK_TYPE D_0045D8C0;
// extern UNK_TYPE D_0045D8D0;

#endif
