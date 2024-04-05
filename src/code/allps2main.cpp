#include "code/allps2main.hpp"

#include "include_asm.h"
#include "types.h"
#include "attributes.h"

#include "sce_libs/gcc/ee/libg/rand.h"
#include "sce_libs/lib/libkernl/iopheap.h"
#include "sce_libs/gcc/ee/libg/strcmp.h"
#include "sce_libs/gcc/ee/libg/strcpy.h"
#include "sce_libs/gcc/ee/libg/strlen.h"
#include "sce_libs/gcc/ee/libg/strupr.h"
#include "sce_libs/gcc/ee/libg/sprintf.h"
#include "sce_libs/lib/libkernl/exit.hpp"
#include "sce_libs/lib/libkernl/sifcmd.hpp"
#include "sce_libs/lib/libpad/libpad.hpp"
#include "sce_libs/gcc/ee/libg/strncpy.h"

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
#include "libs/sim/simpr/simenvironment.hpp"
#include "libs/pure3d/pure3dpr/unicode.hpp"
#include "libs/pure3d/pure3dpr/texturefont.hpp"

#include "code/allingame.hpp"
#include "code/allinput.hpp"
#include "code/allmemory.hpp"
#include "code/allsound.hpp"
#include "code/allatc.hpp"
#include "code/allgui.hpp"
#include "code/allcards.hpp"
#include "code/allcoins.hpp"
#include "code/allactor.hpp"
#include "code/allevents.hpp"
#include "code/allworldsim.hpp"
#include "code/allworldsim.hpp"
#include "code/allloadmanager.hpp"
#include "code/allmission.hpp"
#include "code/allrewards.hpp"
#include "code/alldata.hpp"
#include "code/allinteriors.hpp"
#include "code/allskidmarks.hpp"
#include "code/allcamera.hpp"
#include "code/allpresentation.hpp"
#include "code/allcharacter.hpp"
#include "code/allcheats.hpp"
#include "code/allfootprint.hpp"
#include "code/allai.hpp"
#include "code/allmeta.hpp"
#include "code/allcharactersheet.hpp"
#include "code/allconsole.hpp"
#include "code/allsoundrenderer.hpp"

// TODO: migrate funcs from https://decomp.me/scratch/c0cMu

extern const char STR_0045D010[] = "bad_alloc";

extern const char STR_0045D020[] = "*** WARNING: Too many commandline options!";

extern const char STR_0045D050[] = "../../code/main/commandlineoptions.cpp";

void CommandLineOptions::InitDefaults(void) {
    u64 tmp;

    tmp = 1ULL << CMDLINEOPTIONENUM_CDFILES;
    sOptions |= tmp;

    tmp = 1ULL << CMDLINEOPTIONENUM_NOHEAPS;
    sOptions |= tmp;
}

void CommandLineOptions::HandleOption(const char *opt) {
    char sp[0x100];
    s32 var_s2;
    u64 var_s0;
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
            CommandLineOptions::s_defaultMission = temp_s1 - '1';
        } else {
            var_s2 = 0;
        }
    }

    if (var_s2 != 0) {
        CommandLineOptions::sOptions |= var_s0;
    }
}

bool CommandLineOptions::Get(CmdLineOptionEnum option) {
    return sOptions & (1L << option);
}

Game *Game::CreateInstance(Platform *platform) {
    if (spInstance == NULL) {
        spInstance = new (GameMemoryAllocator_3) Game(platform);
    }

    return spInstance;
}

void Game::DestroyInstance(void) {
    if (spInstance != NULL) {
        delete spInstance;
    }
    spInstance = NULL;
}

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
    u32 temp_s1;
    s32 temp_v0;
    s32 var_s2;
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

s32 Game::GetRandomSeed(void) {
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

void LoadMemP3DFile(u8 *, u32, tEntityStore *);
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
    size_t temp_v0_2;

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

void PS2Platform::InitializePlatform() {
    HeapMgr()->PushHeap(GameMemoryAllocator_3);

    if (CommandLineOptions::Get(CMDLINEOPTIONENUM_SNPROFILER)) {
        this->EnableSnProfiler();
    }

    this->virtual_5C();
    this->virtual_34(1, NULL, 1.0f, 0.0f, 0.0f, 0xFFFFFFFF, 3);
    this->virtual_4C();

    InputManager::GetInstance()->Init();

    HeapMgr()->PopHeap(GameMemoryAllocator_3);
}

void PS2Platform::ShutdownPlatform() {
    this->virtual_64();
    this->virtual_54();
}

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", STR_0045D5A8);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", STR_0045D5D0);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", STR_0045D600);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", STR_0045D620);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", STR_0045D648);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", STR_0045D658);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", STR_0045D660);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", STR_0045D670);

void PS2Platform::ResetMachine(void) {
    char sp[0x40];

    scePadEnd();
    sceSifExitCmd();

    if (CommandLineOptions::Get(CMDLINEOPTIONENUM_CDFILES)) {
        sprintf(sp, "cdrom0:\\slps123.45");
        LoadExecPS2(sp, 0, NULL);
    } else {
        const char *sp40 = "hostfiles";

        sprintf(sp, "hostdrive:\\srr2p%c.elf", 'r');
        LoadExecPS2(sp, 1, &sp40);
    }
}

void PS2Platform::LaunchDashboard() {
    LoadingManager::GetInstance()->CancelPendingRequests();
    SoundManager::GetInstance()->SetMasterVolume(0.0f);

    this->virtual_34(2, NULL, 1.0f, 0.0f, 0.0f, 0xFFFFFFFF, 3);

    PresentationManager::GetInstance()->StopAll();
    GameDataManager::DestroyInstance();

    p3d::loadManager->CancelAll();
    SoundManager::DestroyInstance();

    this->virtual_1C();
    this->virtual_2C();
}

void PS2Platform::DisplaySplashScreen(UNUSED Platform::SplashScreen arg1, char const * arg2, float arg3, float arg4, float arg5, pddiColour arg6, s32 arg7) {
    this->virtual_3C(NULL, arg2, arg3, arg4, arg5, arg6, arg7);
}

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", STR_0045D6B8);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", STR_0045D6C8);

#if 0
? AddSection__10tInventoryPCc(s32, ? *);            /* extern */
? AsciiToUnicode__3p3dPCcPUsi(s32, ? *, ?);         /* extern */
? DeleteSection__10tInventoryG13tUidUnaligned(s32, ? *); /* extern */
void ****GetPlatform__9tPlatform();                 /* extern */
s32 HeapMgr__Fv();                                  /* extern */
? LoadMemP3DFile__FPUcUiP12tEntityStore(? *, ?, s32); /* extern */
? MakeUID__5tNamePCc(? *, ? *);                     /* extern */
? PopHeap__11HeapManager19GameMemoryAllocator(s32, ?); /* extern */
? PopSection__10tInventory(s32);                    /* extern */
? PushHeap__11HeapManager19GameMemoryAllocator(s32, ?); /* extern */
? PushSection__10tInventory(s32);                   /* extern */
? RemoveSectionElements__10tInventoryG13tUidUnaligned(s32, ? *); /* extern */
? Scale__12tMatrixStackfff(f32, ?, void **);        /* extern */
? SelectSection__10tInventoryRC5tName(s32, ? *);    /* extern */
? SetMissingLetter__12tTextureFontUs(void **, ?);   /* extern */
? SwapBuffers__8tContext(s32);                      /* extern */
? Translate__12tMatrixStackfff(f32, ?, void **);    /* extern */
? _$_5tName(? *, ?);                                /* extern */
? __13tUidUnalignedRC13tUidUnaligned(? *, ? *);     /* extern */
? __5tNamePCc(? *, ? *);                            /* extern */
? __Q216radLoadInventoryt8SafeCast1Z12tTextureFont(? *); /* extern */
s32 __eq__C13tUidUnalignedG13tUidUnaligned(? *, ? *); /* extern */
extern ? D_0045D6D0;
extern ? D_0045D6E0;
extern ? STR_0045D6B8;
extern ? STR_0045D6C8;
extern s32 _3p3d$context;
extern s32 _3p3d$inventory;
extern void *_3p3d$pddi;
extern void **_3p3d$stack;
#endif

extern u8 gFont[];

extern const char STR_0045D6B8[];

#if 0
void PS2Platform::DisplaySplashScreen(char const *arg1, char const *arg2, float arg3, float arg4, float arg5, pddiColour arg6, s32 arg7) {
    char16_t sp10[0x100];
#if 0
    ? sp210;
    ? sp220;
    ? sp230;
    ? sp240;
    ? sp250;
    s32 sp260;
#endif
    float sp264;
#if 0
    s32 temp_fp;
    s32 temp_s0;
    s32 temp_s0_2;
#endif
    s32 temp_s4;
    s32 var_s6;
    s32 var_s3;
    s32 var_a0;
#if 0
    s32 var_v0;
    void **temp_s1;
    void **temp_s2;
    void *temp_v0;
    void *temp_v0_10;
    void *temp_v0_11;
    void *temp_v0_12;
    void *temp_v0_13;
    void *temp_v0_14;
    void *temp_v0_15;
    void *temp_v0_16;
    void *temp_v0_17;
    void *temp_v0_18;
    void *temp_v0_19;
    void *temp_v0_20;
    void *temp_v0_21;
    void *temp_v0_22;
    void *temp_v0_23;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v0_8;
    void *temp_v0_9;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
#endif
    tTextureFont *var_s0;

    temp_s4 = arg7;
    sp264 = arg3;

#if 0
    temp_v0 = _3p3d$pddi->unk_8;
    temp_v0->unk_304(_3p3d$pddi + temp_v0->unk_300, &STR_0045D6B8);
#endif

    HeapMgr()->PushHeap(GameMemoryAllocator_1);

    p3d::inventory->PushSection();
    p3d::inventory->AddSection(STR_0045D6B8);

#if 0
    __5tNamePCc(sp, &STR_0045D6B8);
    SelectSection__10tInventoryRC5tName(_3p3d$inventory, sp);
    _$_5tName(sp, 2);
#else
    {
        tName sp(STR_0045D6B8);
        p3d::inventory->SelectSection(sp);
    }
#endif

#if 0
    temp_v0_2 = _3p3d$pddi->unk_8;
    sp260 = temp_v0_2->unk_C4(_3p3d$pddi + temp_v0_2->unk_C0);
    temp_v0_3 = _3p3d$pddi->unk_8;
    temp_v0_3->unk_BC(_3p3d$pddi + temp_v0_3->unk_B8, 2);
    temp_v0_4 = _3p3d$pddi->unk_8;
    temp_fp = temp_v0_4->unk_1C4(_3p3d$pddi + temp_v0_4->unk_1C0);
    temp_v0_5 = _3p3d$pddi->unk_8;
    temp_v0_5->unk_1BC(_3p3d$pddi + temp_v0_5->unk_1B8, 0);
#endif

    LoadMemP3DFile(gFont, 0xF05B, p3d::inventory);

#if 0
    temp_s2 = **GetPlatform__9tPlatform();
    __5tNamePCc(&sp210, &D_0045D6E0);
    MakeUID__5tNamePCc(&sp220, &STR_0045D6C8);
    __13tUidUnalignedRC13tUidUnaligned(&sp230, &sp210);
    if ((__eq__C13tUidUnalignedG13tUidUnaligned(&sp230, &sp220) != 0) || (MakeUID__5tNamePCc(&sp220, &D_0045D6D0), __13tUidUnalignedRC13tUidUnaligned(&sp240, &sp210), var_v0 = 0 & 0xFF, (__eq__C13tUidUnalignedG13tUidUnaligned(&sp240, &sp220) != 0))) {
        var_v0 = 1 & 0xFF;
    }
    var_s0 = NULL;
    if (var_v0 == 0) {
        __Q216radLoadInventoryt8SafeCast1Z12tTextureFont(&sp220);
        __13tUidUnalignedRC13tUidUnaligned(&sp250, &sp210);
        temp_v0_6 = *temp_s2;
        var_s0 = temp_v0_6->unk_24(temp_s2 + temp_v0_6->unk_20, &sp220, &sp250);
        temp_s1 = **GetPlatform__9tPlatform();
        if ((var_s0 == NULL) && (temp_s1 != temp_s2)) {
            __13tUidUnalignedRC13tUidUnaligned(&sp250, &sp210);
            temp_v0_7 = *temp_s1;
            var_s0 = temp_v0_7->unk_24(temp_s1 + temp_v0_7->unk_20, &sp220, &sp250);
        }
    }
    _$_5tName(&sp210, 2);
#else
    {

    }
#endif

    var_s6 = 0;
    var_s3 = 0;

#if 0
    temp_v0_8 = *var_s0;
    temp_v0_8->unk_C(var_s0 + temp_v0_8->unk_8);
    temp_v0_9 = *var_s0;
    temp_v0_9->unk_7C(var_s0 + temp_v0_9->unk_78);
#endif

    p3d::AsciiToUnicode(arg2, sp10, 0x100);
    var_s0->SetMissingLetter(0x6A);

    do {
#if 0
        temp_v0_10 = _3p3d$pddi->unk_8;
        temp_v0_10->unk_1CC(_3p3d$pddi + temp_v0_10->unk_1C8, 1, 1, 1);
        temp_v0_11 = _3p3d$pddi->unk_8;
        temp_v0_11->unk_3C(_3p3d$pddi + temp_v0_11->unk_38, 0xFF000000);
        temp_v0_12 = _3p3d$pddi->unk_8;
        temp_v0_12->unk_2C(_3p3d$pddi + temp_v0_12->unk_28);
        temp_v0_13 = _3p3d$pddi->unk_8;
        temp_v0_13->unk_6C(_3p3d$pddi + temp_v0_13->unk_68, 1);
#endif
        var_a0 = 0xFF;
        if (var_s6 < temp_s4) {
            var_a0 = var_s3 / temp_s4;
        }

        if (arg2 != NULL) {
#if 0
            temp_v1 = *var_s0;
            temp_v1->unk_74(var_s0 + temp_v1->unk_70, (sp264 & 0xFFFFFF) | ((((var_a0 >= 0x100) ? 0xFF : var_a0) << 0x18) & 0xFF000000), sp264);
            temp_v0_14 = _3p3d$pddi->unk_8;
            temp_v0_14->unk_BC(_3p3d$pddi + temp_v0_14->unk_B8, 1);
            temp_v1_2 = *_3p3d$stack;
            temp_v0_15 = temp_v1_2->unk_8;
            temp_v0_15->unk_84(temp_v1_2 + temp_v0_15->unk_80, 0);
            temp_v1_3 = *_3p3d$stack;
            temp_v0_16 = temp_v1_3->unk_8;
            temp_v0_16->unk_74(temp_v1_3 + temp_v0_16->unk_70, 0);
            Translate__12tMatrixStackfff(arg1, 0x3FC00000, _3p3d$stack);
            Scale__12tMatrixStackfff(arg0 * 0.0020833334f, 0x3F800000, _3p3d$stack);
            temp_v0_17 = *var_s0;
            if ((arg1 != 0.0f) || (arg1 != 0.0f)) {
                temp_v0_17->unk_54(var_s0 + temp_v0_17->unk_50, &sp10, 0);
            } else {
                temp_v0_17->unk_54(var_s0 + temp_v0_17->unk_50, &sp10, 3);
            }
            temp_v1_4 = *_3p3d$stack;
            temp_v0_18 = temp_v1_4->unk_8;
            temp_v0_18->unk_8C(temp_v1_4 + temp_v0_18->unk_88, 0);
#endif
        }

        var_s6 += 1;
        var_s3 += 0xFF;
#if 0
        temp_v0_19 = _3p3d$pddi->unk_8;
        temp_v0_19->unk_34(_3p3d$pddi + temp_v0_19->unk_30);
#endif
        p3d::context->SwapBuffers();
    } while (temp_s4 >= var_s6);

#if 0
    temp_v0_20 = _3p3d$pddi->unk_8;
    temp_v0_20->unk_1BC(_3p3d$pddi + temp_v0_20->unk_1B8, temp_fp);
    temp_v0_21 = _3p3d$pddi->unk_8;
    temp_v0_21->unk_BC(_3p3d$pddi + temp_v0_21->unk_B8, sp260);
    temp_v0_22 = _3p3d$pddi->unk_8;
    temp_v0_22->unk_304(_3p3d$pddi + temp_v0_22->unk_300);
    temp_v0_23 = *var_s0;
    temp_v0_23->unk_14(var_s0 + temp_v0_23->unk_10);
    temp_s0 = _3p3d$inventory;
    MakeUID__5tNamePCc(&sp210, &STR_0045D6B8);
    RemoveSectionElements__10tInventoryG13tUidUnaligned(temp_s0, &sp210);
    temp_s0_2 = _3p3d$inventory;
    MakeUID__5tNamePCc(&sp210, &STR_0045D6B8);
    DeleteSection__10tInventoryG13tUidUnaligned(temp_s0_2, &sp210);
#endif

    p3d::inventory->PopSection();

    HeapMgr()->PopHeap(GameMemoryAllocator_1);
}
#else
INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", DisplaySplashScreen__11PS2PlatformPCcT1fffG10pddiColouri);
#endif

void PS2Platform::InitializeFoundationDrive() {
    if (CommandLineOptions::Get(CMDLINEOPTIONENUM_CDFILES)) {
        radDriveOpenAsync(&this->unk_0C, STR_0045D658, radFilePriority_1, 3);

        this->unk_0C->virtual_0C4(this, 0);
    } else {
        radDriveOpenAsync(&this->unk_0C, STR_0045D660, radFilePriority_1, 3);

        this->unk_0C->virtual_0C4(this, 0);
    }
}

void PS2Platform::ShutdownFoundation(void) {
    PS2Platform::s_MainCement->virtual_14();
    PS2Platform::s_MainCement = NULL;

    this->unk_0C->virtual_014();
    this->unk_0C = NULL;

    radDriveUnmount(NULL);
    radFileTerminate();

    CommandLineOptions::Get(CMDLINEOPTIONENUM_MEMMONITOR);

    radDbgComTargetTerminate();
    radTimeTerminate();
    radPlatformTerminate();
    radMemoryTerminate();
    radThreadTerminate();
    radMovieTerminate2();
}

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", InitializePure3D__11PS2Platform);

void PS2Platform::ShutdownPure3D(void) {
    p3d::inventory->RemoveAllElements();
    p3d::inventory->DeleteAllSections();

    if (this->unk_14 != 0) {
        this->unk_14 = 0;
    }
    if (this->unk_10 != 0) {
        this->unk_10 = 0;
    }
}

void PS2Platform::SetProgressiveMode(bool arg1) {
    pddiDisplayInit sp0(arg1, 0);

    p3d::display->virtual_34(&sp0);

    this->unk_18 = arg1;
}

enum scePadGetState_ret {
    /* 0x0 */ scePadGetState_ret_0,
    /* 0x2 */ scePadGetState_ret_2 = 0x2,
    /* 0x6 */ scePadGetState_ret_6 = 0x6,
    /* 0x7 */ scePadGetState_ret_7,
};

struct scePadRead_arg2 {
    /* 0x0 */ u8 unk_00;
    /* 0x1 */ UNK_PAD unk_01[2];
    /* 0x3 */ u8 unk_03;
}; // size = ?

extern "C" scePadGetState_ret scePadGetState(s32, s32);
extern "C" bool scePadRead(s32, s32, scePadRead_arg2 *);

#if 0
bool PS2Platform::CheckForStartupButtons(void) {
    scePadRead_arg2 sp0;
    bool var_s2;
    s32 var_s0;
    s32 var_s1;

    var_s2 = false;

    for (var_s1 = 0; (!var_s2) && (var_s1 < 2); var_s1++) {
        for (var_s0 = 0; var_s0 < 4; var_s0++) {
            scePadGetState_ret temp = scePadGetState(var_s1, var_s0);

            if (temp == 0 || temp == 2 || temp == 6 || temp == 0) {
                if (temp == 2) {
                    if ((scePadRead(var_s1, var_s0, &sp0) != 0) && (sp0.unk_00 == 0) && !(sp0.unk_03 & 0x50)) {
                        var_s2 = 1;
                        goto loop_2_end;
                    }
                } else if (temp == 6) {
                    if ((scePadRead(var_s1, var_s0, &sp0) != 0) && (sp0.unk_00 == 0) && !(sp0.unk_03 & 0x50)) {
                        var_s2 = 1;
                        goto loop_2_end;
                    }
                }
            } else if (temp == 7) {
                if ((scePadRead(var_s1, var_s0, &sp0) != 0) && (sp0.unk_00 == 0) && !(sp0.unk_03 & 0x50)) {
                    var_s2 = 1;
                    goto loop_2_end;
                }
            }
        }

loop_2_end:;
    }

    return var_s2;
}
#else
INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", CheckForStartupButtons__11PS2Platform);
#endif

void PS2Platform::OnControllerError(const char *arg1) {
    u8 temp_s2;

    temp_s2 = p3d::context->unk_FC;
    if (temp_s2 != 0) {
        p3d::context->EndFrame(true);
    }

    this->virtual_34(1, arg1, 0.7f, 0.0f, 0.0f, 0xFFFFFFFF, 0);

    if (temp_s2 != 0) {
        p3d::context->BeginFrame();
    }

    this->unk_04 = 2;
    this->unk_08 = 1;

    if (PresentationManager::GetInstance()->unk_54->unk_inline_func()) {
        PresentationManager::GetInstance()->unk_54->virtual_64();
        return;
    }

    SoundManager::GetInstance()->StopForMovie();
}

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", D_0045D6D0);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", D_0045D6E0);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", D_0045D6F0);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", D_0045D6F8);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allps2main", D_0045D700);

extern const char D_0045D700[];
extern const char *ERROR_STRINGS[];

bool PS2Platform::OnDriveError(radFileError arg1, UNUSED char const *arg2, void *arg3) {
    char sp0[0x20];
    char sp20[0x100];
    char *temp_s1;
    size_t var_s0_2;
    size_t var_s3;
    u8 temp_s4;

    temp_s4 = p3d::context->unk_FC;

    switch (arg1) {
        case RADFILEERROR_0:
            if (this->unk_04 != 0) {
                if (temp_s4 != 0) {
                    p3d::context->EndFrame(true);
                }

                this->virtual_34(2, NULL, 1.0f, 0.0f, 0.0f, 0xFFFFFFFF, 3);

                if (temp_s4 != 0) {
                    p3d::context->BeginFrame();
                }
                this->unk_04 = 0;
                this->unk_08 = 0;
            }

            if (PresentationManager::GetInstance()->unk_54->unk_inline_func()) {
                PresentationManager::GetInstance()->unk_54->virtual_6C();
                return 1;
            }
            SoundManager::GetInstance()->ResumeAfterMovie();
            return 1;

        case RADFILEERROR_1:
            if (CommandLineOptions::Get(CMDLINEOPTIONENUM_FILENOTFOUND)) {
                size_t temp;

                temp_s1 = static_cast<PS2Platform_OnDriveError_arg3 *>(arg3)->virtual_34();

                // Find index of last '\\'
                var_s3 = 0;
                for (var_s0_2 = 0; var_s0_2 < strlen(temp_s1); var_s0_2++) {
                    var_s3 = (temp_s1[var_s0_2] == '\\') ? var_s0_2 : var_s3;
                }

                temp = var_s3;
                temp += (var_s3 > 0);
                strncpy(sp0, &temp_s1[temp], strlen(temp_s1) - var_s3);

                sp0[strlen(temp_s1) - var_s3] = '\0';
                sprintf(sp20, D_0045D700, ERROR_STRINGS[arg1], sp0);

                if (temp_s4 != 0) {
                    p3d::context->EndFrame(true);
                }

                this->virtual_34(1, sp20, 1.0f, 0.0f, 0.0f, 0xFFFFFFFF, 0);

                if (temp_s4 != 0) {
                    p3d::context->BeginFrame();
                }

                this->unk_04 = 1;
                this->unk_08 = 1;

                if (PresentationManager::GetInstance()->unk_54->unk_inline_func()) {
                    PresentationManager::GetInstance()->unk_54->virtual_64();
                    return 1;
                }

                SoundManager::GetInstance()->StopForMovie();
                return 1;
            }

            arg1 = RADFILEERROR_3;

            FALLTHROUGH;
        case RADFILEERROR_2:
        case RADFILEERROR_3:
        case RADFILEERROR_4:
        case RADFILEERROR_8:
            if (temp_s4 != 0) {
                p3d::context->EndFrame(true);
            }

            this->virtual_34(1, ERROR_STRINGS[arg1], 1.0f, 0.0f, 0.0f, 0xFFFFFFFF, 0);

            if (temp_s4 != 0) {
                p3d::context->BeginFrame();
            }
            this->unk_04 = 1;
            this->unk_08 = 1;

            if (PresentationManager::GetInstance()->unk_54->unk_inline_func()) {
                PresentationManager::GetInstance()->unk_54->virtual_64();
                return 1;
            }

            SoundManager::GetInstance()->StopForMovie();
            return 1;

        default:
            break;
    }

    return 0;
}

PS2Platform::PS2Platform() {
    this->unk_08 = 0;
    this->unk_0C = 0;
    this->unk_10 = 0;
    this->unk_14 = 0;
}

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", _$_11PS2Platform);

void PS2Platform::EnableSnProfiler(void) {
}

void CreateSingletons(void) {
    GameDataManager::CreateInstance();
    EventManager::CreateInstance();
    LoadingManager::CreateInstance();
    InputManager::CreateInstance();
    SkidmarkManager::CreateInstance();
    ATCManager::CreateInstance();
    CardGallery::CreateInstance();
    CharacterSheetManager::CreateInstance();
    RewardsManager::CreateInstance();
    Console::CreateInstance();
    VehicleCentral::CreateInstance();

    sim::SimUnits::Initialize();

    WorldPhysicsManager::CreateInstance();
    PresentationManager::CreateInstance();
    CGuiSystem::CreateInstance();

    SoundManager::CreateInstance(CommandLineOptions::Get(CMDLINEOPTIONENUM_MUTE), CommandLineOptions::Get(CMDLINEOPTIONENUM_NOMUSIC), CommandLineOptions::Get(CMDLINEOPTIONENUM_NOEFFECTS), CommandLineOptions::Get(CMDLINEOPTIONENUM_NODIALOG));

    MissionManager::CreateInstance();
    MissionScriptLoader::CreateInstance();
    CharacterManager::CreateInstance();
    AvatarManager::CreateInstance();
    ActionButtonManager::CreateInstance();
    SuperCamManager::CreateInstance();
    TriggerVolumeTracker::CreateInstance();
    InteriorManager::CreateInstance();
    CheatInputSystem::CreateInstance();
    TutorialManager::CreateInstance();
    ActorManager::CreateInstance();
    PersistentWorldManager::CreateInstance();
    FootprintManager::CreateInstance();
    CoinManager::CreateInstance();
    Sparkle::CreateInstance(7, 0x96);
    HitnRunManager::CreateInstance();
    RenderFlow::CreateInstance();
}

void DestroySingletons(void) {
    InteriorManager::DestroyInstance();
    TriggerVolumeTracker::DestroyInstance();
    SuperCamManager::DestroyInstance();
    ActionButtonManager::DestroyInstance();
    AvatarManager::DestroyInstance();
    CharacterManager::DestroyInstance();
    MissionScriptLoader::DestroyInstance();
    MissionManager::DestroyInstance();
    SoundManager::DestroyInstance();
    CGuiSystem::DestroyInstance();
    PresentationManager::DestroyInstance();
    WorldPhysicsManager::DestroyInstance();
    VehicleCentral::DestroyInstance();
    Console::DestroyInstance();
    ATCManager::DestroyInstance();
    CharacterSheetManager::DestroyInstance();
    RewardsManager::DestroyInstance();
    CardGallery::DestroyInstance();
    TutorialManager::DestroyInstance();
    CoinManager::DestroyInstance();
    Sparkle::DestroyInstance();
    CheatInputSystem::DestroyInstance();
    HitnRunManager::DestroyInstance();
    InputManager::DestroyInstance();
    LoadingManager::DestroyInstance();
    SkidmarkManager::DestroyInstance();
    FootprintManager::DestroyInstance();
    ActorManager::DestroyInstance();
    PersistentWorldManager::DestroyInstance();
    RenderFlow::DestroyInstance();
    GameDataManager::DestroyInstance();
    EventManager::DestroyInstance();
}

// Private?
// Completely made up
class tUidUnaligned_aux {
    union {
        s32 si[2];
        u64 ul;
    } u;

public:
    tUidUnaligned_aux(s32 a1, s32 a2) {
        this->u.si[0] = a1;
        this->u.si[1] = a2;
    }

    tUidUnaligned_aux(u64 a1) {
        this->u.ul = a1;
    }

    s32 get_word0(void) const {
        return this->u.si[0];
    }

    s32 get_word1(void) const {
        return this->u.si[1];
    }

    bool operator<(tUidUnaligned_aux &other) const {
        return this->u.ul < other.u.ul;
    }

    tUidUnaligned_aux operator^(tUidUnaligned_aux &other) const {
        return tUidUnaligned_aux(this->u.ul ^ other.u.ul);
    }

    // wrong?
    tUidUnaligned_aux operator*(u64 other) {
        return tUidUnaligned_aux(this->u.ul * other);
    }
};


tUidUnaligned::tUidUnaligned(void) {
    this->unk_00 = 0;
    this->unk_04 = 1;
}

tUidUnaligned::tUidUnaligned(tUidUnaligned const &arg1) {
    this->unk_00 = arg1.unk_00;
    this->unk_04 = arg1.unk_04;
}

bool tUidUnaligned::operator!=(tUidUnaligned arg1) const {
    bool ret = !(*this == arg1);

    return ret;
}

bool tUidUnaligned::operator==(tUidUnaligned arg1) const {
    bool ret = (this->unk_00 == arg1.unk_00) && (this->unk_04 == arg1.unk_04);

    return ret;
}

bool tUidUnaligned::operator<(tUidUnaligned arg1) const {
    tUidUnaligned_aux a(this->unk_00, this->unk_04);
    tUidUnaligned_aux b(arg1.unk_00, arg1.unk_04);

    return a < b;
}

tUidUnaligned tUidUnaligned::operator^(tUidUnaligned arg1) const {
    tUidUnaligned_aux a(this->unk_00, this->unk_04);
    tUidUnaligned_aux b(arg1.unk_00, arg1.unk_04);
    tUidUnaligned_aux temp = a ^ b;

    return tUidUnaligned(temp.get_word0(), temp.get_word1());
}

# if 0
tUidUnaligned tUidUnaligned::operator*=(u64 arg2) {
    tUidUnaligned_aux sp10(this->unk_00, this->unk_04);
    tUidUnaligned_aux sp18 = sp10 * arg2;
    tUidUnaligned ret(sp18.get_word0(), sp18.get_word1());

/*
    s32 sp0;
    s32 sp4;
    s32 sp10;
    s32 sp14;
    s64 sp18;
    s64 temp_2;

    sp10 = arg1->unk_0;
    sp14 = arg1->unk_4;
    temp_2 = __muldi3((s64) sp10, arg2);
    sp18 = temp_2;
    sp10 = temp_2;
    arg1->unk_0 = (s32) sp18;
    arg1->unk_4 = unksp1C;
    sp0 = (s32) sp18;
    sp4 = unksp1C;
    __13tUidUnalignedRC13tUidUnaligned(arg0, arg1);
    return arg0;
*/
    return ret;
}
#else
INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", __aml__13tUidUnalignedUl);
#endif

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
