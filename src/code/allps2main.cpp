#include "include_asm.h"
#include "types.h"

// TODO: migrate funcs from https://decomp.me/scratch/c0cMu

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
    static int Get(CmdLineOptionEnum);
    static void HandleOption(char const *);
};

void CommandLineOptions::InitDefaults(void) {
    unsigned long tmp;
    tmp= 0x80;
    sOptions |= tmp;
    tmp=0x100000000;
    sOptions |= tmp;
}

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", STR_0045D010);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", STR_0045D020);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", STR_0045D050);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", HandleOption__18CommandLineOptionsPCc);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", Get__18CommandLineOptions17CmdLineOptionEnum);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", CreateInstance__4GameP8Platform);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", DestroyInstance__4Game);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", GetInstance__4Game);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", GetPlatform__4Game);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", Initialize__4Game);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", Terminate__4Game);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", Run__4Game);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", Stop__4Game);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", GetRandomSeed__4Game);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", __4GameP8Platform);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", _$_4Game);

enum radDbgComType {
    /* 0x0 */ radDbgComType_0,
    /* 0x3 */ radDbgComType_3 = 0x3,
};

class radLoadInit {

};

class IRadCementLibrary {

};

enum radCementLibraryPriority {
    /* 0x0 */ radCementLibraryPriority_0,
};

enum radMemorySpace {
    /* 0x1 */ radMemorySpace_1 = 0x1,
};

enum radPlatformIOPMedia {
    /* 0x0 */ radPlatformIOPMedia_0,
    /* 0x1 */ radPlatformIOPMedia_1,
};

enum radPlatformGameMediaType {
    /* 0x1 */ radPlatformGameMediaType_1 = 1,
};

class Platform {
private:
    char unk_00[0x4];

public:
};

class IRadDrive {
    virtual void virtual_68(void);
    virtual void virtual_6C(void);
    virtual void virtual_70(void);
    virtual void virtual_74(void);
    virtual void virtual_78(void);
    virtual void virtual_7C(void);
    virtual void virtual_80(void);
    virtual void virtual_84(void);
    virtual void virtual_88(void);
    virtual void virtual_8C(void);
    virtual void virtual_90(void);
    virtual void virtual_94(void);
    virtual void virtual_98(void);
    virtual void virtual_9C(void);
    virtual void virtual_A0(void);
    virtual void virtual_A4(void);
    virtual void virtual_A8(void);
    virtual void virtual_AC(void);
    virtual void virtual_B0(void);
    virtual void virtual_B4(void);
    virtual void virtual_B8(void);
    virtual void virtual_BC(void);
    virtual void virtual_C0(void);
public:
    virtual void virtual_C4(Platform *, int);
};

enum radFilePriority {
    /* 0x1 */ radFilePriority_1 = 0x1,
};

class PS2Platform : public Platform {
private:
    char unk_04[0x8];
    IRadDrive *unk_0C;
    char unk_10[0xC];

    PS2Platform();

    static PS2Platform* spInstance;
    static IRadCementLibrary *s_MainCement;

    static void InitializeMemory(void);

    void InitializeFoundationDrive(void);

public:
    static PS2Platform *CreateInstance(void);
    static PS2Platform *GetInstance(void);
    static void DestroyInstance(void);
    static void InitializeFoundation(void);

    // virtual void virtual_20(int);
};

//PS2Platform *CreateInstance__11PS2Platform(); // PS2Platform::CreateInstance(void)
//void DestroyInstance__11PS2Platform(); // PS2Platform::DestroyInstance(void)
//void InitializeFoundation__11PS2Platform(); // PS2Platform::InitializeFoundation(void)

class Game {
public:
    static Game *CreateInstance(Platform *); // Game::CreateInstance(Platform *)
    static int GetRandomSeed(void); // Game::GetRandomSeed(void)
    static void DestroyInstance(void); // Game::DestroyInstance(void)

    void Initialize(void); // Game::Initialize(void)
    void Run(void); // Game::Run(void)
    void Terminate(void); // Game::Terminate(void)
};

// int CreateInstance__4GameP8Platform(int); // Game::CreateInstance(Platform *)
//void DestroyInstance__4Game(); // Game::DestroyInstance(void)
//int GetRandomSeed__4Game(); // Game::GetRandomSeed(void)
//void Initialize__4Game(int); // Game::Initialize(void)
//void Run__4Game(int); // Game::Run(void)
//void Terminate__4Game(int); // Game::Terminate(void)


//void InitDefaults__18CommandLineOptions(); // CommandLineOptions::InitDefaults(void)


enum GameMemoryAllocator {
    GameMemoryAllocator_3 = 3,
};

class HeapManager {
public:
    void PopHeap(GameMemoryAllocator);
    void PushHeap(GameMemoryAllocator);

    void PrepareHeapsStartup(void);
};

//void PopHeap__11HeapManager19GameMemoryAllocator(int, int); // HeapManager::PopHeap(GameMemoryAllocator)
//void PushHeap__11HeapManager19GameMemoryAllocator(int, int); // HeapManager::PushHeap(GameMemoryAllocator)

void CreateSingletons(void); // CreateSingletons(void)
void DestroySingletons(void); // DestroySingletons(void)
HeapManager *HeapMgr(void); // HeapMgr(void)

extern "C" void __main(int argc, char *argv[]);
extern "C" void srand(int);

void func_00163468(int argc, char *argv[]);
void func_001634B8();


int main(int argc, char *argv[]) {
    Game *game;

    // __main is implictly called

    CommandLineOptions::InitDefaults();

    func_00163468(argc, argv);
    PS2Platform::InitializeFoundation();

    srand(Game::GetRandomSeed());

    HeapMgr()->PushHeap(GameMemoryAllocator_3);

    func_001634B8();
    CreateSingletons();

    game = Game::CreateInstance(PS2Platform::CreateInstance());

    game->Initialize();
    HeapMgr()->PopHeap(GameMemoryAllocator_3);

    game->Run();
    game->Terminate();

    Game::DestroyInstance();

    PS2Platform::DestroyInstance();
    DestroySingletons();

    return 0;
}

void func_00163468(int argc, char *argv[]) {
    int i;

    for (i = 0; i < argc; i++) {
        CommandLineOptions::HandleOption(argv[i]);
    }

    CommandLineOptions::Get(CmdLineOptionEnum_A);
}

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", func_001634B8__Fv);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", D_0045D380);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", STR_0045D388);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", STR_0045D448);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", STR_0045D450);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", STR_0045D458);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", D_0045D460);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", D_0045D468);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", D_0045D478);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", D_0045D490);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", D_0045D4C8);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", D_0045D4D0);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", D_0045D4E0);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", D_0045D4F8);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", D_0045D510);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", D_0045D528);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", D_0045D538);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", D_0045D548);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", D_0045D570);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", LoadMemP3DFile__FPUcUiP12tEntityStore);

void* operator new(unsigned int, GameMemoryAllocator);

PS2Platform *PS2Platform::CreateInstance(void) {
    spInstance = new (GameMemoryAllocator_3) PS2Platform();

    return spInstance;
}

#ifdef NON_MATCHING
PS2Platform *PS2Platform::GetInstance(void) {
    return spInstance;
}
#else
INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", GetInstance__11PS2Platform);
#endif

//extern void **_11PS2Platform$spInstance;
#if 0
void PS2Platform::DestroyInstance(void) {
    PS2Platform *temp_v0;

    if (spInstance != NULL) {
        temp_v0 = spInstance;
    //    temp_v0->unk_6C(spInstance + temp_v0->unk_68, 3);
        temp_v0->virtual_20(3);
    }

    spInstance = NULL;
}
#else
INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", DestroyInstance__11PS2Platform);
#endif

#if 0
s32 CommandLineOptions::Get(CmdLineOptionEnum_?); /* extern */
s32 HeapMgr__Fv();                                  /* extern */
? InitializeMemory__11PS2Platform(?, s8, ? *, ? *); /* extern */
? PopHeap__11HeapManager19GameMemoryAllocator(s32, ?); /* extern */
? PrepareHeapsStartup__11HeapManager(s32);          /* extern */
? PushHeap__11HeapManager19GameMemoryAllocator(s32, ?); /* extern */
s32 rDebugAssertFail_Implementation__FPCcT0Ui(? *, ? *, ?); /* extern */
? rReleasePrintf__FPCce(? *, u32);                  /* extern */
? radDbgComTargetInitialize__F13radDbgComTypeUsPvi(?, ?, ? *, ?); /* extern */
? radDriveMount__FPCci(?, ?);                       /* extern */
? radFileInitialize__FUiUii(?, ?, ?);               /* extern */
? radFileRegisterCementLibrarySync__FPP17IRadCementLibraryPCc24radCementLibraryPriorityUii14radMemorySpace(? *, ? *, ?, ?); /* extern */
? radLoadInitialize__FP11radLoadInit(?);            /* extern */
? radMathInitialize__Fv();                          /* extern */
? radMemorySetOutOfMemoryCallback__FPFPviUi_vPv(? *, ?); /* extern */
? radMovieInitialize2__Fi(?);                       /* extern */
? radPlatformInitialize__FPCc19radPlatformIOPMedia24radPlatformGameMediaTypeT0i(void *, ?, ?, ? *); /* extern */
? radSetDefaultDrive__FPCc(? *);                    /* extern */
? radTimeInitialize__Fv();                          /* extern */
extern ? D_0045D380;
extern ? PrintOutOfMemoryMessage__FPviUi;
extern ? _11PS2Platform$s_MainCement;
#endif

extern "C" int sceSifAllocIopHeap(int);                          /* extern */
extern "C" unsigned int sceSifQueryMaxFreeMemSize();                    /* extern */

#define UNK_TYPE int

extern UNK_TYPE D_0045D380;

void radFileInitialize(unsigned int, unsigned int, int);
void radLoadInitialize(radLoadInit *);

void PrintOutOfMemoryMessage(void *, int, unsigned int);
void radMemorySetOutOfMemoryCallback(void (*)(void *, int, unsigned int), void *);
void radTimeInitialize(void);
void radDbgComTargetInitialize(radDbgComType, unsigned short, void *, int);
void radSetDefaultDrive(char const *);
void radMovieInitialize2(int);
void radMathInitialize(void);
void radDriveMount(char const *, int);

void radFileRegisterCementLibrarySync(IRadCementLibrary **, char const *, radCementLibraryPriority, unsigned int, int, radMemorySpace);

void rReleasePrintf(char const *,...);

void radPlatformInitialize(char const *, radPlatformIOPMedia, radPlatformGameMediaType, char const *, int);


int rDebugAssertFail_Implementation(char const *, char const *, unsigned int);


extern const char STR_0045D5A8[];
extern const char STR_0045D5D0[];
extern const char STR_0045D600[];
extern const char STR_0045D620[];
extern const char STR_0045D648[];
extern const char STR_0045D658[]; // !
extern const char STR_0045D660[]; // !
extern const char STR_0045D670[];

#if 0
void PS2Platform::InitializeFoundation(void) {
    char sp00[] = "IRX\\";
    char sp10[] = "IOPRP254.IMG";
    unsigned int temp_v0_2;

#if 0
    ? sp3;
    s8 sp4;
    ? sp10;
    ? sp1B;
    s8 sp1C;
    ? *temp_v0;
    ? *temp_v1;
    ? temp_a0;
    s8 temp_a1;

    temp_v0 = "IRX\\";
    temp_v1 = "IOPRP254.IMG";
    sp3 = (unaligned s32) M2C_ERROR(/* Unable to handle lwr; missing a corresponding lwl */);
    sp4 = temp_v0->unk_4;
    M2C_ERROR(/* unknown instruction: ldl $v0, 0x7($a2) */);
    M2C_ERROR(/* unknown instruction: ldr $v0, ($a2) */);
    temp_a0 = M2C_ERROR(/* Unable to handle lwr; missing a corresponding lwl */);
    temp_a1 = temp_v1->unk_C;
    M2C_ERROR(/* unknown instruction: sdl $v0, 0x17($sp) */);
    M2C_ERROR(/* unknown instruction: sdr $v0, 0x10($sp) */);
    sp1B = (unaligned s32) temp_a0;
    sp1C = temp_a1;

    InitializeMemory__11PS2Platform(temp_a0, temp_a1, temp_v1, temp_v0);
#else
    InitializeMemory();
#endif

    radMemorySetOutOfMemoryCallback(PrintOutOfMemoryMessage, NULL);

    CommandLineOptions::Get(CmdLineOptionEnum_5);

    HeapMgr()->PrepareHeapsStartup();
    HeapMgr()->PushHeap(GameMemoryAllocator_3);

    if (CommandLineOptions::Get(CmdLineOptionEnum_8) != 0) {
        radPlatformInitialize(sp00, radPlatformIOPMedia_1, radPlatformGameMediaType_1, NULL, 3);
    } else if (CommandLineOptions::Get(CmdLineOptionEnum_7) != 0) {
        radPlatformInitialize(sp00, radPlatformIOPMedia_1, radPlatformGameMediaType_1, sp10, 3);
    } else {
        radPlatformInitialize(sp00, radPlatformIOPMedia_0, radPlatformGameMediaType_1, sp10, 3);
    }

    if (CommandLineOptions::Get(CmdLineOptionEnum_2E) != 0) {
        rReleasePrintf(STR_0045D5A8, 0x5F4900U);

        do {
            if (sceSifAllocIopHeap(0x10000) == 0) {
                if (rDebugAssertFail_Implementation(STR_0045D5D0, STR_0045D600, 406) != 0) {
                    __asm__("break 0, 1;");
                }
            }
            temp_v0_2 = sceSifQueryMaxFreeMemSize();
            rReleasePrintf(STR_0045D620, temp_v0_2);
        } while (temp_v0_2 > 0x1A3900U);
    }

    radTimeInitialize();

    if (CommandLineOptions::Get(CmdLineOptionEnum_8) != 0) {
        radDbgComTargetInitialize(radDbgComType_3, 0x213E, &D_0045D380, 0xC);
    } else {
        radDbgComTargetInitialize(radDbgComType_0, 0x213E, NULL, 0xC);
    }

    radFileInitialize(0x32, 0x20, 3);
    radLoadInitialize(NULL);

    if (CommandLineOptions::Get(CmdLineOptionEnum_8) != 0) {
        radSetDefaultDrive(STR_0045D648);
    } else if (CommandLineOptions::Get(CmdLineOptionEnum_7) == 0) {
        radSetDefaultDrive(STR_0045D660);
    } else {
        radSetDefaultDrive(STR_0045D658);
    }

    radDriveMount(NULL, 3);
    if (CommandLineOptions::Get(CmdLineOptionEnum_7) != 0) {
        radFileRegisterCementLibrarySync(&s_MainCement, STR_0045D670, radCementLibraryPriority_0, 0, 0, radMemorySpace_1);
    }

    radMovieInitialize2(3);
    radMathInitialize();

    HeapMgr()->PopHeap(GameMemoryAllocator_3);
}
#else
INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", InitializeFoundation__11PS2Platform);
#endif

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", InitializeMemory__11PS2Platform);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", InitializePlatform__11PS2Platform);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", ShutdownPlatform__11PS2Platform);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", ResetMachine__11PS2Platform);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", LaunchDashboard__11PS2Platform);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", DisplaySplashScreen__11PS2PlatformQ28Platform12SplashScreenPCcfffG10pddiColouri);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", DisplaySplashScreen__11PS2PlatformPCcT1fffG10pddiColouri);

//? radDriveOpenAsync__FPP9IRadDrivePCc15radFilePriorityi(void *, ? *, ?, ?); /* extern */
void radDriveOpenAsync(IRadDrive **, char const *, radFilePriority, int);

#if 0
void PS2Platform::InitializeFoundationDrive() {
    IRadDrive *temp_v1;
    void *temp_v0;

    if (CommandLineOptions::Get(CmdLineOptionEnum_7) != 0) {
        radDriveOpenAsync(&this->unk_0C, STR_0045D658, radFilePriority_1, 3);
        //temp_v1 = this->unk_0C;
    #if 0
        temp_v0 = *temp_v1;
        temp_v0->unk_C4(temp_v1 + temp_v0->unk_C0, arg0, 0);
    #endif
        this->unk_0C->virtual_C4(this, 0);
    } else {
        radDriveOpenAsync(&this->unk_0C, STR_0045D660, radFilePriority_1, 3);
        //temp_v1 = this->unk_0C;
    #if 0
        temp_v0 = *temp_v1;
        temp_v0->unk_C4(temp_v1 + temp_v0->unk_C0, arg0, 0);
    #endif
        this->unk_0C->virtual_C4(this, 0);
    }
}
#else
INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", InitializeFoundationDrive__11PS2Platform);
#endif

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", ShutdownFoundation__11PS2Platform);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", InitializePure3D__11PS2Platform);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", ShutdownPure3D__11PS2Platform);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", SetProgressiveMode__11PS2Platformb);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", CheckForStartupButtons__11PS2Platform);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", OnControllerError__11PS2PlatformPCc);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", STR_0045D5A8);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", STR_0045D5D0);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", STR_0045D600);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", STR_0045D620);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", STR_0045D648);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", STR_0045D658);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", STR_0045D660);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", STR_0045D670);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", STR_0045D678);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", STR_0045D690);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", STR_0045D6A0);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", STR_0045D6B8);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", STR_0045D6C8);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", D_0045D6D0);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", D_0045D6E0);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", D_0045D6F0);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", D_0045D6F8);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", D_0045D700);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", OnDriveError__11PS2Platform12radFileErrorPCcPv);

#if 0
class IRadDriveErrorCallback {
public:
    IRadDriveErrorCallback(void);
};

void __22IRadDriveErrorCallback(); // IRadDriveErrorCallback::IRadDriveErrorCallback

//extern ? _vt$t3PS2Platform;

PS2Platform::PS2Platform() {
    //__22IRadDriveErrorCallback();
    IRadDriveErrorCallback temp;

    //arg0->unk_8 = 0;
    //arg0->unk_0 = &_vt$t3PS2Platform;
    //arg0->unk_C = 0;
    //arg0->unk_10 = 0;
    //arg0->unk_14 = 0;
}
#else
INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", __11PS2Platform);
#endif

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", _$_11PS2Platform);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", EnableSnProfiler__11PS2Platform);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", CreateSingletons__Fv);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", DestroySingletons__Fv);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", __13tUidUnaligned);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", __13tUidUnalignedRC13tUidUnaligned);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", __ne__C13tUidUnalignedG13tUidUnaligned);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", __eq__C13tUidUnalignedG13tUidUnaligned);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", __lt__C13tUidUnalignedG13tUidUnaligned);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", __er__C13tUidUnalignedG13tUidUnaligned);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", __aml__13tUidUnalignedUl);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", __ad__C13tUidUnalignedG13tUidUnaligned);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", __rs__C13tUidUnalignedi);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", func_00165BC8);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", D_0045D738);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", D_0045D748);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", D_0045D758);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", D_0045D768);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", D_0045D778);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", D_0045D788);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", D_0045D798);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", _vt$11PS2Platform);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", _vt$4Game);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", __tf4Game);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", __tf11PS2Platform);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", func_00165CB8);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", __11tBMPHandler);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", __11tPNGHandler);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", __13tTargaHandler);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", __Q216radLoadInventoryt8SafeCast1Z12tTextureFont);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", func_00165DA0);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", _vt$Q216radLoadInventoryt8SafeCast1Z12tTextureFont);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", __tf8Platform);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", __tfQ216radLoadInventoryt8SafeCast1Z12tTextureFont);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", func_00165E60);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", safe_cast__Q216radLoadInventoryt8SafeCast1Z12tTextureFontP9IRefCount);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", func_00165EB8);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", _GLOBAL_$I$_18CommandLineOptions$sOptions);
