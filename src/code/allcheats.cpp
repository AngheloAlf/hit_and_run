#include "code/allcheats.hpp"

#include "include_asm.h"
#include "garbage_helper.h"

#include "attributes.h"

#include "sce_libs/gcc/ee/libg/sprintf.h"
#include "sce_libs/gcc/ee/libg/strcat.h"
#include "sce_libs/gcc/ee/libg/strncpy.h"

#include "libs/radcore/radcorepr/debug.hpp"

#include "code/allcharactersheet.hpp"
#include "code/allevents.hpp"
#include "code/allgui.hpp"
#include "code/allmemory.hpp"

struct struct_00458A30 {
    const char *unk_00;
    eCheatInput unk_04;
};

extern const struct_00458A30 D_00458A30[7];

extern const Cheat D_00458B60[13];

#if 0
// migrating data has alignment issues
extern const char D_004587B0[];
extern const char D_004587C0[];
extern const char D_004587D0[];
extern const char D_004587E0[];
extern const char D_004587F0[];
extern const char D_00458800[];
extern const char D_00458810[];

extern const char *D_004269BC[];
const char *D_004269BC[] = {
    D_004587B0,
    D_004587C0,
    D_004587D0,
    D_004587E0,
    D_004587F0,
    D_00458800,
    D_00458810,
};

CheatInputSystem *CheatInputSystem::spInstance = NULL;
u32 CheatInputSystem::s_cheatsEnabled = 0;

int CheatsDB::s_maxNumPossibleCheats = 1;

#if 0
extern UNK_TYPE4 D_004269E4;
UNK_TYPE4 D_004269E4 = 0;

/* Automatically generated and unreferenced pad */
dlabel D_004269E4
    /* 3269E4 004269E4 00000000 */ .word 0x00000000
.size D_004269E4, . - D_004269E4
#endif
#endif

void CheatInputSystem::CreateInstance(void) {
    CheatInputSystem::spInstance = new (GameMemoryAllocator_3) CheatInputSystem;
}

void CheatInputSystem::DestroyInstance(void) {
    delete CheatInputSystem::spInstance;
    CheatInputSystem::spInstance = NULL;
}

CheatInputSystem *CheatInputSystem::GetInstance(void) {
    return CheatInputSystem::spInstance;
}

CheatInputSystem::CheatInputSystem(void) {
    this->unk_00 = false;
    this->unk_04 = 0;
    this->unk_08 = NULL;
    this->unk_0C = NULL;
    this->unk_90 = 0;

    for (size_t i = 0; i < CHEATINPUTSYSTEM_UNK_10_LEN; i++) {
        this->unk_10[i] = NULL;
    }
}

#if 0
// vt
CheatInputSystem::~CheatInputSystem(void) {
    if (this->unk_08 != NULL) {
        delete this->unk_08;
        this->unk_08 = NULL;
    }

    if (this->unk_0C != NULL) {
        this->unk_0C->Release();
        this->unk_0C = NULL;
    }
}
#else
INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allcheats", _$_16CheatInputSystem);
#endif

void CheatInputSystem::Init(void) {
    this->unk_08 = new (GameMemoryAllocator_3) CheatsDB;
    this->unk_0C = new (GameMemoryAllocator_3) CheatInputHandler;

    this->unk_0C->AddRef();
}

void CheatInputSystem::SetEnabled(bool arg1) {
    this->unk_00 = arg1;
    for (int i = 0; i < 10; i++) {
        if (arg1 != 0) {
            InputManager::GetInstance()->RegisterMappable(i, this->unk_0C);
        } else {
            InputManager::GetInstance()->UnregisterMappable(i, this->unk_0C);
        }
    }

    this->unk_0C->ResetInputSequence();
    this->unk_0C->unk_29C = this->unk_0C->unk_298 = 0;
}

void CheatInputSystem::SetActivated(int arg1, bool arg2) {
    if (arg2) {
        this->unk_04 |= (1 << arg1);
    } else {
        this->unk_04 &= ~(1 << arg1);
    }
    this->unk_0C->ResetInputSequence();
}

bool CheatInputSystem::IsActivated(int arg1) const {
    return this->unk_04 & (1 << arg1);
}

void CheatInputSystem::SetCheatEnabled(eCheatID arg1, bool arg2) {
    if (arg1 == ECHEATID_2 || arg1 == ECHEATID_1 || arg1 == ECHEATID_UNLOCK_ALL_VEHICLES) {
        if (!CharacterSheetManager::GetInstance()->IsAllStoryMissionsCompleted()) {
            return;
        }
    }

    if (arg2) {
        CheatInputSystem::s_cheatsEnabled |= 1 << arg1;
    } else {
        CheatInputSystem::s_cheatsEnabled &= ~(1 << arg1);
    }

    for (int i = 0; i < this->unk_90; i++) {
        this->unk_10[i]->virtual_0C(arg1, arg2);
    }
}

bool CheatInputSystem::IsCheatEnabled(eCheatID arg1) const {
    return s_cheatsEnabled & (1 << arg1);
}

#if 0
extern const char D_00458778[] = "bad_alloc";
extern const char D_00458788[] = "Game Controller System";
extern const char D_004587A0[] = "SineCos Shaker";
extern const char D_004587B0[] = "ScroobyLanguage";
extern const char D_004587C0[] = "ScroobyBootup";
extern const char D_004587D0[] = "ScroobyBackend";
extern const char D_004587E0[] = "ScroobyFrontend";
extern const char D_004587F0[] = "ScroobyMiniGame";
extern const char D_00458800[] = "ScroobyIngame";
#else
INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allcheats", D_00458778);
INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allcheats", D_004587B0);
INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allcheats", D_004587C0);
INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allcheats", D_004587D0);
INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allcheats", D_004587E0);
INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allcheats", D_004587F0);
INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allcheats", D_00458800);
INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allcheats", D_00458810);
#endif

void CheatInputSystem::ReceiveInputs(eCheatInput *arg1, int arg2) {
    eCheatID temp_v0 = this->unk_08->GetCheatID(CheatsDB::ConvertSequenceToIndex(arg1, arg2));

    if (~temp_v0 != 0) {
        bool var_s2 = true;
        this->SetCheatEnabled(temp_v0, true);

        if (this->IsCheatEnabled(temp_v0)) {
            EventManager::GetInstance()->TriggerEvent(EVENTENUM_173, NULL);
        } else {
            var_s2 = false;
            EventManager::GetInstance()->TriggerEvent(EVENTENUM_174, NULL);
            rReleasePrintf("*** This cheat cannot be enabled until all story missions have been completed!\n");
        }

        rReleasePrintf("*** Cheat code successfully entered: %s (%s)\n", this->unk_08->GetCheat(temp_v0)->unk_14, var_s2 ? "enabled" : "disabled");

        if (temp_v0 == ECHEATID_6) {
            for (int var_s0 = ECHEATID_1; var_s0 < ECHEATID_6; var_s0++) {
                this->SetCheatEnabled(static_cast<eCheatID>(var_s0), var_s2);
            }
        } else if (temp_v0 == ECHEATID_17) {
            CGuiSystem::GetInstance()->GotoScreen(0xC, 0, 0, 1);
        }
    } else {
        EventManager::GetInstance()->TriggerEvent(EVENTENUM_174, NULL);
        rReleasePrintf("*** Invalid cheat code entered!\n");
    }
}

void CheatInputSystem::RegisterCallback(ICheatEnteredCallback *arg1) {
    for (int i = 0; i < this->unk_90; i++) {
        if (this->unk_10[i] == arg1) {
            return;
        }
    }

    this->unk_10[this->unk_90] = arg1;
    this->unk_90++;
}

void CheatInputSystem::UnregisterCallback(ICheatEnteredCallback *arg1) {
    for (int i = 0; i < this->unk_90; i++) {
        if (this->unk_10[i] == arg1) {
            this->unk_10[i] = NULL;
            this->unk_90--;
            if (i < this->unk_90) {
                this->unk_10[i] = this->unk_10[this->unk_90];
                this->unk_10[this->unk_90] = NULL;
            }
            return;
        }
    }
}

CheatInputHandler::CheatInputHandler(): Mappable(0xFFFFFFEF), unk_298(0), unk_29C(0), unk_2B0(0) {
    this->ResetInputSequence();
}

#if 0
// vt issue
CheatInputHandler::~CheatInputHandler() {
}
#else
INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allcheats", _$_17CheatInputHandler);
#endif

void CheatInputHandler::ResetInputSequence(void) {
    this->unk_2B0 = 0;
    for (size_t i = 0; i < CHEATINPUTHANDLER_UNK_2A0_LEN; i++) {
        this->unk_2A0[i] = ECHEATINPUT_NONE;
    }
}

const char *CheatInputHandler::GetInputName(eCheatInput arg0) {
    return D_00458A30[arg0].unk_00;
}

void CheatInputHandler::OnButton(UNUSED int arg1, UNUSED int arg2, UNUSED Button const *arg3) {
}

void CheatInputHandler::OnButtonDown(int arg1, int arg2, UNUSED Button const *arg3) {
    eCheatInput temp = static_cast<eCheatInput>(arg2);

    switch (temp) {
        case ECHEATINPUT_L1:
            {
                this->unk_298 |= (1 << arg1);
                bool var_s0 = this->unk_29C & (1 << arg1);
                CheatInputSystem::GetInstance()->SetActivated(arg1, var_s0);
            }
            break;

        case ECHEATINPUT_R1:
            {
                this->unk_29C |= (1 << arg1);
                bool var_s0_2 = this->unk_298 & (1 << arg1);
                CheatInputSystem::GetInstance()->SetActivated(arg1, var_s0_2);
            }
            break;

        default:
            if (CheatInputSystem::GetInstance()->IsActivated(arg1)) {
                rReleasePrintf("Received Cheat Input [%d] = [%d]\n", this->unk_2B0, arg2);

                this->unk_2A0[this->unk_2B0++] = temp;
                this->unk_2B0 %= CHEATINPUTHANDLER_UNK_2A0_LEN;
                if (this->unk_2B0 == 0) {
                    CheatInputSystem::GetInstance()->ReceiveInputs(this->unk_2A0, CHEATINPUTHANDLER_UNK_2A0_LEN);
                }
            }
            break;
    }
}

void CheatInputHandler::OnButtonUp(int arg1, int arg2, UNUSED Button const *arg3) {
    switch (static_cast<eCheatInput>(arg2)) {
        case ECHEATINPUT_L1:
            this->unk_298 &= ~(1 << arg1);
            CheatInputSystem::GetInstance()->SetActivated(arg1, false);
            break;

        case ECHEATINPUT_R1:
            this->unk_29C &= ~(1 << arg1);
            CheatInputSystem::GetInstance()->SetActivated(arg1, false);
            break;

        default:
            break;
    }
}

void CheatInputHandler::LoadControllerMappings(unsigned int arg1) {
    for (size_t i = 0; i < ARR_LEN(D_00458A30); i++) {
        this->Map(D_00458A30[i].unk_00, D_00458A30[i].unk_04, 0, arg1);
    }
}

CheatsDB::CheatsDB(void): unk_0(NULL) {
    size_t i;

    for (i = 0; i < 4; i++) {
        CheatsDB::s_maxNumPossibleCheats *= 4;
    }

    this->unk_0 = new (GameMemoryAllocator_3) eCheatID[CheatsDB::s_maxNumPossibleCheats];

    for (i = 0; i < CheatsDB::s_maxNumPossibleCheats; i++) {
        this->unk_0[i] = ECHEATID_MINUS1;
    }

    for (i = 0; i < ARR_LEN(D_00458B60)-1; i++) {
        this->unk_0[CheatsDB::ConvertSequenceToIndex(D_00458B60[i].unk_04, CHEAT_UNK_04_LEN)] = D_00458B60[i].unk_00;
    }
}

#if 0
// vt issue
CheatsDB::~CheatsDB(void) {
    if (this->unk_0 != NULL) {
        delete [] this->unk_0;
        this->unk_0 = NULL;
    }
}
#else
INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allcheats", _$_8CheatsDB);
#endif

eCheatID CheatsDB::GetCheatID(unsigned int arg1) const {
    return this->unk_0[arg1];
}

const Cheat *CheatsDB::GetCheat(eCheatID arg1) const {
    for (size_t i = 0; i < ARR_LEN(D_00458B60)-1; i++) {
        const Cheat *temp_v1 = &D_00458B60[i];
        if (temp_v1->unk_00 == arg1) {
            return temp_v1;
        }
    }
    return NULL;
}

unsigned int CheatsDB::ConvertSequenceToIndex(eCheatInput const *arg0, int arg1) {
    unsigned int ret = 0;

    for (int i = 0; i < arg1; i++) {
        ret |= arg0[i] << (i * 2);
    }
    return ret;
}

void CheatsDB::PrintCheatInfo(Cheat const *arg0, char *arg1) {
    #define BUFFER_LEN 4
    char sp[CHEAT_UNK_04_LEN][BUFFER_LEN];

    sprintf(arg1, "%s: { ", arg0->unk_14);

    for (size_t i = 0; i < CHEAT_UNK_04_LEN; i++) {
        strncpy(sp[i], CheatInputHandler::GetInputName(arg0->unk_04[i]), BUFFER_LEN-1);
        sp[i][BUFFER_LEN-1] = '\0';

        if (i != 0) {
            strcat(arg1, ", ");
        }
        strcat(arg1, sp[i]);
    }

    strcat(arg1, " }");
    #undef BUFFER_LEN
}

#if 1
__asm__(".section .rodata; .align 3;");
INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allcheats", _vt$17CheatInputHandler);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allcheats", _vt$16CheatInputSystem);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allcheats", _vt$8CheatsDB);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allcheats", __tf8CheatsDB);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allcheats", __tf16CheatInputSystem);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allcheats", __tf17CheatInputHandler);
#endif

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allcheats", func_00146458);

#if 0
const struct_00458A30 D_00458A30[] = {
    { "X", ECHEATINPUT_X },
    { "Circle", ECHEATINPUT_O },
    { "Square", ECHEATINPUT_S },
    { "Triangle", ECHEATINPUT_T },
    { "L1", ECHEATINPUT_L1 },
    { "R1", ECHEATINPUT_R1 },
    { "", ECHEATINPUT_NONE },
};
#else
INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allcheats", D_004589F0);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allcheats", D_004589F8);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allcheats", D_00458A00);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allcheats", D_00458A08);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allcheats", D_00458A18);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allcheats", D_00458A20);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allcheats", D_00458A28);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allcheats", D_00458A30);
#endif

#if 0
const Cheat D_00458B60[] = {
    { ECHEATID_UNLOCK_ALL_VEHICLES,  { ECHEATINPUT_X, ECHEATINPUT_O, ECHEATINPUT_X, ECHEATINPUT_O }, "Unlock All Reward Vehicles" },
    { ECHEATID_NO_TOP_SPEED,  { ECHEATINPUT_S, ECHEATINPUT_S, ECHEATINPUT_S, ECHEATINPUT_S }, "No Top Speed" },
    { ECHEATID_HIGH_ACCELERATION,  { ECHEATINPUT_T, ECHEATINPUT_T, ECHEATINPUT_T, ECHEATINPUT_T }, "High Acceleration" },
    { ECHEATID_CAR_JUMP_ON_HORN,  { ECHEATINPUT_S, ECHEATINPUT_S, ECHEATINPUT_S, ECHEATINPUT_T }, "Car Jump on Horn" },
    { ECHEATID_ONE_TAP_TRAFFIC_DEATH, { ECHEATINPUT_T, ECHEATINPUT_T, ECHEATINPUT_S, ECHEATINPUT_S }, "One Tap Traffic Death" },
    { ECHEATID_UNLOCK_ALL_CAMERAS, { ECHEATINPUT_O, ECHEATINPUT_O, ECHEATINPUT_O, ECHEATINPUT_X }, "Unlock All Cameras" },
    { ECHEATID_PLAY_CREDITS_DIALOG, { ECHEATINPUT_X, ECHEATINPUT_S, ECHEATINPUT_S, ECHEATINPUT_T }, "Play Credits Dialog" },
    { ECHEATID_SHOW_SPEEDOMETER, { ECHEATINPUT_T, ECHEATINPUT_T, ECHEATINPUT_O, ECHEATINPUT_S }, "Show Speedometer" },
    { ECHEATID_RED_BRICK, { ECHEATINPUT_O, ECHEATINPUT_O, ECHEATINPUT_T, ECHEATINPUT_S }, "Red Brick" },
    { ECHEATID_INVINCIBLE_CAR, { ECHEATINPUT_T, ECHEATINPUT_X, ECHEATINPUT_T, ECHEATINPUT_X }, "Invincible Car" },
    { ECHEATID_SHOW_TREE, { ECHEATINPUT_O, ECHEATINPUT_X, ECHEATINPUT_O, ECHEATINPUT_T }, "Show Tree" },
    { ECHEATID_TRIPPY, { ECHEATINPUT_T, ECHEATINPUT_O, ECHEATINPUT_T, ECHEATINPUT_O }, "Trippy" },
    { ECHEATID_MINUS1, { ECHEATINPUT_NONE, ECHEATINPUT_NONE, ECHEATINPUT_NONE, ECHEATINPUT_NONE }, "" },
};
#else
INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allcheats", D_00458A68);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allcheats", D_00458A88);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allcheats", D_00458A98);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allcheats", D_00458AB0);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allcheats", D_00458AC8);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allcheats", D_00458AE0);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allcheats", D_00458AF8);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allcheats", D_00458B10);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allcheats", D_00458B28);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allcheats", D_00458B38);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allcheats", D_00458B48);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allcheats", D_00458B58);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allcheats", D_00458B60);
#endif
