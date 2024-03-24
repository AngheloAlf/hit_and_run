#include "code/allps2main.hpp"

#include "include_asm.h"
#include "types.h"

#include "sce_libs/gcc/ee/libg/rand.h"
#include "sce_libs/lib/libkernl/iopheap.h"

#include "libs/pure3d/pure3dpr/utility.hpp"
#include "libs/radcore/radcorepr/targetx.hpp"
#include "libs/radcore/radcorepr/consoleclient.hpp"
#include "libs/radcore/radcorepr/radfile.hpp"
#include "libs/radcontent/radcontentpr/manager.hpp"
#include "libs/radcore/radcorepr/memorymanager.hpp"
#include "libs/radmath/radmathpr/radmath.hpp"
#include "libs/radcore/radcorepr/debug.hpp"
#include "libs/radcore/radcorepr/platform.hpp"
#include "libs/radmovie/radmoviepr/movieplayer.hpp"
#include "libs/radcore/radcorepr/system.hpp"

#include "code/allingame.hpp"
#include "code/allinput.hpp"
#include "code/allmemory.hpp"
#include "code/allsound.hpp"

// TODO: migrate funcs from https://decomp.me/scratch/c0cMu

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", STR_0045D010);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", STR_0045D020);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", STR_0045D050);

void CommandLineOptions::InitDefaults(void) {
    unsigned long tmp;

    tmp = 1ULL << CMDLINEOPTIONENUM_CDFILES;
    sOptions |= tmp;

    tmp = 1ULL << CMDLINEOPTIONENUM_NOHEAPS;
    sOptions |= tmp;
}

typedef unsigned int size_t;

extern "C" int strcmp(const char *, const char *);
extern "C" char *strcpy(char *dest, const char *src);
extern "C" size_t strlen(const char *str);
extern "C" char *strupr(char *str);

extern char gFruitless;
extern char gTuneSound;
extern char g_AllowDebugOutput;

void CommandLineOptions::HandleOption(const char *opt) {
    char sp[0x100];
    int var_s2;
    unsigned long var_s0;
    char *temp_v0;
    char temp_s1;

    var_s2 = 1;
    var_s0 = 1ULL;

    strcpy(sp, opt);
    rReleasePrintf("Commandline Option: %s\n", sp);

    if (strcmp(strupr(sp), "NOMUSIC") == 0) {
        var_s0 <<= CMDLINEOPTIONENUM_NOMUSIC;
    } else if (strcmp(strupr(sp), "NOEFFECTS") == 0) {
        var_s0 <<= CMDLINEOPTIONENUM_NOEFFECTS;
    } else if (strcmp(strupr(sp), "NODIALOG") == 0) {
        var_s0 <<= CMDLINEOPTIONENUM_NODIALOG;
    } else if (strcmp(strupr(sp), "MUTE") == 0) {
        var_s0 <<= CMDLINEOPTIONENUM_MUTE;
    } else if (strcmp(strupr(sp), "SKIPMOVIE") == 0) {
        var_s0 <<= CMDLINEOPTIONENUM_SKIPMOVIE;
    } else if (strcmp(strupr(sp), "MEMMONITOR") == 0) {
        var_s0 <<= CMDLINEOPTIONENUM_MEMMONITOR;
    } else if (strcmp(strupr(sp), "HEAPSTATS") == 0) {
        var_s0 <<= CMDLINEOPTIONENUM_HEAPSTATS;
    } else if (strcmp(strupr(sp), "CDFILES") == 0) {
        var_s0 <<= CMDLINEOPTIONENUM_CDFILES;
    } else if (strcmp(strupr(sp), "HOSTFILES") == 0) {
        var_s2 = 0;
        CommandLineOptions::sOptions &= ~(1ULL << CMDLINEOPTIONENUM_CDFILES);
    } else if (strcmp(strupr(sp), "FIREWIRE") == 0) {
        var_s0 <<= CMDLINEOPTIONENUM_FIREWIRE;
    } else if (strcmp(strupr(sp), "SNPROFILER") == 0) {
        var_s0 <<= CMDLINEOPTIONENUM_SNPROFILER;
    } else if (strcmp(strupr(sp), "ARTSTATS") == 0) {
        var_s0 <<= CMDLINEOPTIONENUM_ARTSTATS;
    } else if (strcmp(strupr(sp), "PROPSTATS") == 0) {
        var_s0 <<= CMDLINEOPTIONENUM_PROPSTATS;
    } else if (strcmp(strupr(sp), "FEUNJOINED") == 0) {
        var_s0 <<= CMDLINEOPTIONENUM_FEUNJOINED;
    } else if (strcmp(strupr(sp), "SPEEDOMETER") == 0) {
        var_s0 <<= CMDLINEOPTIONENUM_SPEEDOMETER;
    } else if (strcmp(strupr(sp), "NOHUD") == 0) {
        var_s0 <<= CMDLINEOPTIONENUM_NOHUD;
    } else if (strcmp(strupr(sp), "DEBUGBV") == 0) {
        var_s0 <<= CMDLINEOPTIONENUM_DEBUGBV;
    } else if (strcmp(strupr(sp), "NOTRAFFIC") == 0) {
        var_s0 <<= CMDLINEOPTIONENUM_NOTRAFFIC;
    } else if (strcmp(strupr(sp), "SKIPSUNDAY") == 0) {
        var_s0 <<= CMDLINEOPTIONENUM_SKIPSUNDAY;
    } else if (strcmp(strupr(sp), "SKIPFE") == 0) {
        var_s0 <<= CMDLINEOPTIONENUM_SKIPFE;
    } else if (strcmp(strupr(sp), "FEGAGS") == 0) {
        var_s0 <<= CMDLINEOPTIONENUM_FEGAGS;
    } else if (strcmp(strupr(sp), "FPS") == 0) {
        var_s0 <<= CMDLINEOPTIONENUM_FPS;
    } else if (strcmp(strupr(sp), "DESIGNER") == 0) {
        var_s0 <<= CMDLINEOPTIONENUM_DESIGNER;
    } else if (strcmp(strupr(sp), "DETECTLEAKS") == 0) {
        var_s0 <<= CMDLINEOPTIONENUM_DETECTLEAKS;
    } else if (strcmp(strupr(sp), "NOHEAPS") == 0) {
        var_s0 <<= CMDLINEOPTIONENUM_NOHEAPS;
    } else if (strcmp(strupr(sp), "PRINTMEMORY") == 0) {
        var_s0 <<= CMDLINEOPTIONENUM_PRINTMEMORY;
    } else if (strcmp(strupr(sp), "DEMOTEST") == 0) {
        var_s0 <<= CMDLINEOPTIONENUM_DEMOTEST;
    } else if (strcmp(strupr(sp), "NOSPLASH") == 0) {
        var_s0 <<= CMDLINEOPTIONENUM_NOSPLASH;
    } else if (strcmp(strupr(sp), "SKIPLANGCHECK") == 0) {
        var_s0 <<= CMDLINEOPTIONENUM_SKIPLANGCHECK;
    } else if (strcmp(strupr(sp), "SKIPMEMCHECK") == 0) {
        var_s0 <<= CMDLINEOPTIONENUM_SKIPMEMCHECK;
    } else if (strcmp(strupr(sp), "NOHAPTIC") == 0) {
        var_s0 <<= CMDLINEOPTIONENUM_NOHAPTIC;
    } else if (strcmp(strupr(sp), "RANDOMBUTTONS") == 0) {
        var_s0 <<= CMDLINEOPTIONENUM_RANDOMBUTTONS;
    } else if (strcmp(strupr(sp), "SEQUENTIALDEMO") == 0) {
        var_s0 <<= CMDLINEOPTIONENUM_SEQUENTIALDEMO;
    } else if (strcmp(strupr(sp), "PCTEST") == 0) {
        var_s0 <<= CMDLINEOPTIONENUM_PCTEST;
    } else if (strcmp(strupr(sp), "NOAVRIL") == 0) {
        var_s0 <<= CMDLINEOPTIONENUM_NOAVRIL;
    } else if (strcmp(strupr(sp), "SHORTDEMO") == 0) {
        var_s0 <<= CMDLINEOPTIONENUM_SHORTDEMO;
    } else if (strcmp(strupr(sp), "PRINTLOADTIME") == 0) {
        var_s0 <<= CMDLINEOPTIONENUM_PRINTLOADTIME;
    } else if (strcmp(strupr(sp), "PRINTFRAMERATE") == 0) {
        var_s0 <<= CMDLINEOPTIONENUM_PRINTFRAMERATE;
    } else if (strcmp(strupr(sp), "SHOWDYNALOAD") == 0) {
        var_s0 <<= CMDLINEOPTIONENUM_SHOWDYNALOAD;
    } else if (strcmp(strupr(sp), "NOPEDS") == 0) {
        var_s0 <<= CMDLINEOPTIONENUM_NOPEDS;
    } else if (strcmp(strupr(sp), "MANUALRESETDAMAGE") == 0) {
        var_s0 <<= CMDLINEOPTIONENUM_MANUALRESETDAMAGE;
    } else if (strcmp(strupr(sp), "WINDOW") == 0) {
        var_s0 <<= CMDLINEOPTIONENUM_WINDOW;
    } else if (strcmp(strupr(sp), "NOTUTORIAL") == 0) {
        var_s0 <<= CMDLINEOPTIONENUM_NOTUTORIAL;
    } else if (strcmp(strupr(sp), "COINS") == 0) {
        var_s0 <<= CMDLINEOPTIONENUM_COINS;
    } else if (strcmp(strupr(sp), "PROGSCAN") == 0) {
        var_s0 <<= CMDLINEOPTIONENUM_PROGSCAN;
    } else if (strcmp(strupr(sp), "LARGEHEAPS") == 0) {
        var_s0 <<= CMDLINEOPTIONENUM_LARGEHEAPS;
    } else if (strcmp(strupr(sp), "MEMCARDCHEAT") == 0) {
        var_s0 <<= CMDLINEOPTIONENUM_MEMCARDCHEAT;
    } else if (strcmp(strupr(sp), "TOOL") == 0) {
        var_s0 <<= CMDLINEOPTIONENUM_TOOL;
    } else if (strcmp(strupr(sp), "FILENOTFOUND") == 0) {
        var_s0 <<= CMDLINEOPTIONENUM_FILENOTFOUND;
    } else if (strcmp(strupr(sp), "LOADINGSPEW") == 0) {
        var_s0 <<= CMDLINEOPTIONENUM_LOADINGSPEW;
    } else if (strcmp(strupr(sp), "RELEASEPRINT") == 0) {
        g_AllowDebugOutput = 1;
        var_s2 = 0;
    } else if (strcmp(strupr(sp), "NOFRUITLESS") == 0) {
        var_s2 = 0;
        gFruitless = 0;
    } else if (strcmp(strupr(sp), "RADTUNER") == 0) {
        gTuneSound = 1;
        var_s2 = 0;
    } else {
        temp_v0 = sp + (strlen(sp) - 1);
        temp_s1 = *temp_v0;
        *temp_v0 = '\0';
        if (strcmp(strupr(sp), "L") == 0) {
            CommandLineOptions::s_defaultLevel = temp_s1 - '1';
        } else if (strcmp(strupr(sp), "M") == 0) {
            CommandLineOptions:s_defaultMission = temp_s1 - '1';
        } else {
            var_s2 = 0;
        }
    }

    if (var_s2 != 0) {
        CommandLineOptions::sOptions |= var_s0;
    }
}

bool CommandLineOptions::Get(CmdLineOptionEnum option) {
    return sOptions & (1ULL << option);
}

Game *Game::CreateInstance(Platform *platform) {
    if (spInstance == NULL) {
        spInstance = new (GameMemoryAllocator_3) Game(platform);
    }

    return spInstance;
}

#if 0
void Game::DestroyInstance(void) {
    void *temp_v0;

    if (spInstance != NULL) {
        //temp_v0 = spInstance->unk_20;
        //temp_v0->unk_C(spInstance + temp_v0->unk_8, 3);
        delete (GameMemoryAllocator_3) spInstance;
    }
    spInstance = NULL;
}
#else
INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", DestroyInstance__4Game);
#endif

Game *Game::GetInstance(void) {
    return spInstance;
}

Platform *Game::GetPlatform(void) {
    return this->platform;
}

void Game::Initialize() {
    this->platform->virtual_14();

    radTimeCreateList(&this->unk_04, 0x10, 3);

    this->unk_08 = GameFlow::CreateInstance();

    this->unk_0C = RenderFlow::GetInstance();
    this->unk_0C->DoAllRegistration();

    CGuiScreenMissionLoad::InitializePermanentVariables();

    this->unk_08->SetContext(ContextEnum_1);
}

void Game::Terminate() {
    GameFlow::DestroyInstance();
    this->unk_08 = NULL;
    this->unk_0C = NULL;
    this->unk_04->virtual_14();
    this->unk_04 = NULL;
}

void Game::Run() {
    unsigned int temp_s1;
    int temp_v0;
    int var_s2;
    PS2Platform *platform;

    var_s2 = radTimeGetMilliseconds();

    while (this->unk_14 == 0) {
        temp_v0 = radTimeGetMilliseconds();

        temp_s1 = temp_v0 - var_s2;
        var_s2 = temp_v0;

        platform = static_cast<PS2Platform*>(this->platform);

        if (platform->unk_08 == 0) {
            this->unk_04->virtual_24();
            this->unk_08->virtual_0C(temp_s1, 0);

            if (this->unk_14 == 0) {
                this->unk_0C->virtual_0C(temp_s1, 0);
            }
        } else if (((platform->unk_04 ^ 2) == 0) && (InputManager::GetInstance() != NULL)) {
            InputManager::GetInstance()->Update(temp_s1);
        }

        radFileService();
        radDbgComService();
        radDebugConsoleService();

        CommandLineOptions::Get(CMDLINEOPTIONENUM_MEMMONITOR);

        SoundManager::GetInstance()->Update();

        // kinda cursed but it matches
        if (static_cast<PS2Platform*>(this->platform)->unk_08 != 0) {
            SoundManager::GetInstance()->UpdateOncePerFrame(0, ContextEnum_C, 0);
        }

        p3d::loadManager->SwitchTask();

        this->unk_10++;
    }
}

void Game::Stop(void) {
    this->unk_14 = 1;
}

int Game::GetRandomSeed(void) {
    radDate sp0;

    radTimeGetDate(&sp0);
    return ((sp0.unk_0 << 0x10) | (sp0.unk_2 << 8) | sp0.unk_3) ^ ((sp0.unk_6 << 0x18) | (sp0.unk_5 << 8) | sp0.unk_4);
}

Game::Game(Platform *pf) {
    this->platform = pf;
    this->unk_04 = NULL;
    this->unk_08 = NULL;
    this->unk_0C = NULL;
    this->unk_10 = 0;
    this->unk_14 = 0;
    this->unk_18 = 0;
    this->unk_1C = 0;
}

#if 0
// triggers emitting the virtual table
Game::~Game() {

}
#else
INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", _$_4Game);
#endif

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

    CommandLineOptions::Get(CMDLINEOPTIONENUM_ARTSTATS);
}

void func_001634B8(void) {
}

__asm__(".section .rodata; .align 3");
INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", STR_0045D380);

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

PS2Platform *PS2Platform::CreateInstance(void) {
    spInstance = new (GameMemoryAllocator_3) PS2Platform();

    return spInstance;
}

PS2Platform *PS2Platform::GetInstance(void) {
    return spInstance;
}

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

extern const char STR_0045D5A8[];
extern const char STR_0045D5D0[];
extern const char STR_0045D600[];
extern const char STR_0045D620[];
extern const char STR_0045D648[];
extern const char STR_0045D658[]; // !
extern const char STR_0045D660[]; // !
extern const char STR_0045D670[];

void PS2Platform::InitializeFoundation(void) {
    char sp00[] = "IRX\\";
    char sp10[] = "IOPRP254.IMG";
    unsigned int temp_v0_2;

    InitializeMemory();

    radMemorySetOutOfMemoryCallback(PrintOutOfMemoryMessage, NULL);

    CommandLineOptions::Get(CMDLINEOPTIONENUM_MEMMONITOR);

    HeapMgr()->PrepareHeapsStartup();
    HeapMgr()->PushHeap(GameMemoryAllocator_3);

    if (CommandLineOptions::Get(CMDLINEOPTIONENUM_FIREWIRE)) {
        radPlatformInitialize(sp00, radPlatformIOPMedia_1, radPlatformGameMediaType_1, NULL, 3);
    } else if (CommandLineOptions::Get(CMDLINEOPTIONENUM_CDFILES)) {
        radPlatformInitialize(sp00, radPlatformIOPMedia_1, radPlatformGameMediaType_1, sp10, 3);
    } else {
        radPlatformInitialize(sp00, radPlatformIOPMedia_0, radPlatformGameMediaType_1, sp10, 3);
    }

    if (CommandLineOptions::Get(CMDLINEOPTIONENUM_TOOL)) {
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

    if (CommandLineOptions::Get(CMDLINEOPTIONENUM_FIREWIRE)) {
        radDbgComTargetInitialize(radDbgComType_3, 0x213E, (void*)STR_0045D380, 0xC);
    } else {
        radDbgComTargetInitialize(radDbgComType_0, 0x213E, NULL, 0xC);
    }

    radFileInitialize(0x32, 0x20, 3);
    radLoadInitialize(NULL);

    if (CommandLineOptions::Get(CMDLINEOPTIONENUM_FIREWIRE)) {
        radSetDefaultDrive(STR_0045D648);
    } else if (CommandLineOptions::Get(CMDLINEOPTIONENUM_CDFILES)) {
        radSetDefaultDrive(STR_0045D658);
    } else {
        radSetDefaultDrive(STR_0045D660);
    }

    radDriveMount(NULL, 3);
    if (CommandLineOptions::Get(CMDLINEOPTIONENUM_CDFILES)) {
        radFileRegisterCementLibrarySync(&s_MainCement, STR_0045D670, radCementLibraryPriority_0, 0, 0, radMemorySpace_1);
    }

    radMovieInitialize2(3);
    radMathInitialize();

    HeapMgr()->PopHeap(GameMemoryAllocator_3);
}

void PS2Platform::InitializeMemory(void) {
    if (gMemorySystemInitialized != 1) {
        gMemorySystemInitialized = 1;
        radThreadInitialize(0x32);
        radMemoryInitialize();
    }
}

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", InitializePlatform__11PS2Platform);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", ShutdownPlatform__11PS2Platform);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", ResetMachine__11PS2Platform);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", LaunchDashboard__11PS2Platform);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", DisplaySplashScreen__11PS2PlatformQ28Platform12SplashScreenPCcfffG10pddiColouri);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", DisplaySplashScreen__11PS2PlatformPCcT1fffG10pddiColouri);

void PS2Platform::InitializeFoundationDrive() {
    IRadDrive *temp_v1;
    void *temp_v0;

    if (CommandLineOptions::Get(CMDLINEOPTIONENUM_CDFILES)) {
        radDriveOpenAsync(&this->unk_0C, STR_0045D658, radFilePriority_1, 3);

        this->unk_0C->virtual_0C4(this, 0);
    } else {
        radDriveOpenAsync(&this->unk_0C, STR_0045D660, radFilePriority_1, 3);

        this->unk_0C->virtual_0C4(this, 0);
    }
}

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

PS2Platform::PS2Platform() {
    this->unk_08 = 0;
    this->unk_0C = 0;
    this->unk_10 = 0;
    this->unk_14 = 0;
}

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
