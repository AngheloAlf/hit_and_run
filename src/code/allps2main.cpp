#include "include_asm.h"
#include "types.h"

// TODO: migrate funcs from https://decomp.me/scratch/c0cMu

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", InitDefaults__18CommandLineOptions);

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

class Platform {

};

class PS2Platform : public Platform {
private:
    char padding[0x1B];

    PS2Platform();

    static PS2Platform* spInstance;

public:
    static PS2Platform *CreateInstance(void);
    static void DestroyInstance(void);
    static void InitializeFoundation(void);
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


class CommandLineOptions {
public:
    static void InitDefaults(void);
};
//void InitDefaults__18CommandLineOptions(); // CommandLineOptions::InitDefaults(void)


enum GameMemoryAllocator {
    GameMemoryAllocator_3 = 3,
};

class HeapManager {
public:
    void PopHeap(GameMemoryAllocator);
    void PushHeap(GameMemoryAllocator);
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

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", func_00163468__FiPPc);

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

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", GetInstance__11PS2Platform);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", DestroyInstance__11PS2Platform);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", InitializeFoundation__11PS2Platform);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", InitializeMemory__11PS2Platform);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", InitializePlatform__11PS2Platform);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", ShutdownPlatform__11PS2Platform);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", ResetMachine__11PS2Platform);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", LaunchDashboard__11PS2Platform);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", DisplaySplashScreen__11PS2PlatformQ28Platform12SplashScreenPCcfffG10pddiColouri);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", DisplaySplashScreen__11PS2PlatformPCcT1fffG10pddiColouri);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", InitializeFoundationDrive__11PS2Platform);

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

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allps2main", __11PS2Platform);

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
