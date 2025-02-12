#include "code/allcheats.hpp"

#include "include_asm.h"
#include "garbage_helper.h"

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
    int unk_04;
};
extern struct_00458A30 D_00458A30[];

// TODO: add to symbol_addrs
extern Cheat D_00458B60[];

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
    this->unk_00 = 0;
    this->unk_04 = 0;
    this->unk_08 = NULL;
    this->unk_0C = NULL;
    this->unk_90 = 0;

    for (size_t var_v1 = 0; var_v1 < CHEATINPUTSYSTEM_UNK_10_LEN; var_v1++) {
        this->unk_10[var_v1] = NULL;
    }
}

#if 0
CheatInputSystem::~CheatInputSystem(void) {
    s32 var_v0;
    void **temp_v1_2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1;

    temp_v1 = this->unk_08;
    if (temp_v1 != NULL) {
        temp_v0 = temp_v1->unk_4;
        temp_v0->unk_C(temp_v1 + temp_v0->unk_08, 3);
        this->unk_08 = NULL;
    }
    temp_v1_2 = this->unk_0C;
    #if 0
    var_v0 = arg1 & 1;
    if (temp_v1_2 != NULL) {
        temp_v0_2 = *temp_v1_2;
        temp_v0_2->unk_14(temp_v1_2 + temp_v0_2->unk_10);
        this->unk_C = NULL;
        var_v0 = arg1 & 1;
    }
    if (var_v0 != 0) {
        __builtin_delete(this);
    }
    #endif
}
#else
INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allcheats", _$_16CheatInputSystem);
#endif

#if 0
void CheatInputSystem::Init(void) {
    this->unk_08 = new (GameMemoryAllocator_3) CheatsDB;
    this->unk_0C = new (GameMemoryAllocator_3) CheatInputHandler;
#if 0
    temp_v1 = *this->unk_0C;
    temp_v1->unk_C(this->unk_0C + temp_v1->unk_8);
#endif
}
#else
INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allcheats", Init__16CheatInputSystem);
#endif

#if 0
void CheatInputSystem::SetEnabled(bool arg1) {
    CheatInputHandler *temp_v0;
    unsigned int var_s1;

    var_s1 = 0;
    this->unk_00 = arg1;
    do {
        if (arg1 != 0) {
            InputManager::GetInstance()->RegisterMappable(var_s1, this->unk_0C);
        } else {
            InputManager::GetInstance()->UnregisterMappable(var_s1, this->unk_0C);
        }
        var_s1 += 1;
    } while (var_s1 < 0xA);
    this->unk_0C->ResetInputSequence();
    #if 0
    temp_v0 = this->unk_0C;
    temp_v0->unk_29C = 0;
    temp_v0->unk_298 = 0;
    #endif
}
#else
INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allcheats", SetEnabled__16CheatInputSystemb);
#endif

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
    if (((arg1 < ECHEATID_3 && arg1 > ECHEATID_0) || (arg1 == ECHEATID_5))) {
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

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allcheats", D_00458778);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allcheats", D_004587B0);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allcheats", D_004587C0);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allcheats", D_004587D0);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allcheats", D_004587E0);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allcheats", D_004587F0);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allcheats", D_00458800);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allcheats", D_00458810);

#ifdef NON_MATCHING
extern const char D_00458828[] = "*** This cheat cannot be enabled until all story missions have been completed!\n";
extern const char D_00458878[] = "*** Cheat code successfully entered: %s (%s)\n";
extern const char D_004588A8[] = "enabled";
extern const char D_004588B0[] = "disabled";
extern const char D_004588C0[] = "*** Invalid cheat code entered!\n";

void CheatInputSystem::ReceiveInputs(eCheatInput *arg1, int arg2) {
    const char *var_a2;
    Cheat *temp_v1;
    eCheatID temp_v0;
    bool var_s2;

    temp_v0 = this->unk_08->GetCheatID(CheatsDB::ConvertSequenceToIndex(arg1, arg2));
    if (~temp_v0 != 0) {
        var_s2 = true;
        this->SetCheatEnabled(temp_v0, true);

        if (this->IsCheatEnabled(temp_v0)) {
            EventManager::GetInstance()->TriggerEvent(EVENTENUM_173, NULL);
        } else {
            var_s2 = false;
            EventManager::GetInstance()->TriggerEvent(EVENTENUM_174, NULL);
            rReleasePrintf(D_00458828);
        }

        temp_v1 = this->unk_08->GetCheat(temp_v0);
        if (var_s2) {
            var_a2 = D_004588A8;
        } else {
            var_a2 = D_004588B0;
        }
        rReleasePrintf(D_00458878, temp_v1->unk_14, var_a2);

        if (temp_v0 == ECHEATID_6) {
            for (int var_s0 = ECHEATID_1; var_s0 < ECHEATID_6; var_s0++) {
                this->SetCheatEnabled(static_cast<eCheatID>(var_s0), var_s2);
            }
        } else if (temp_v0 == ECHEATID_17) {
            CGuiSystem::GetInstance()->GotoScreen(0xC, 0, 0, 1);
        }
    } else {
        EventManager::GetInstance()->TriggerEvent(EVENTENUM_174, NULL);
        rReleasePrintf(D_004588C0);
    }
}
#else
INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allcheats", ReceiveInputs__16CheatInputSystemP11eCheatInputi);
#endif

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

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allcheats", __17CheatInputHandler);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allcheats", _$_17CheatInputHandler);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allcheats", ResetInputSequence__17CheatInputHandler);

const char *CheatInputHandler::GetInputName(eCheatInput arg0) {
    return D_00458A30[arg0].unk_00;
}

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allcheats", OnButton__17CheatInputHandleriiPC6Button);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allcheats", OnButtonDown__17CheatInputHandleriiPC6Button);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allcheats", OnButtonUp__17CheatInputHandleriiPC6Button);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allcheats", LoadControllerMappings__17CheatInputHandlerUi);

CheatsDB::CheatsDB(void) : unk_0(NULL) {
    size_t i;

    for (i = 0; i < 4; i++) {
        CheatsDB::s_maxNumPossibleCheats *= 4;
    }

    this->unk_0 = new (GameMemoryAllocator_3) eCheatID[CheatsDB::s_maxNumPossibleCheats];

    for (i = 0; i < CheatsDB::s_maxNumPossibleCheats; i++) {
        this->unk_0[i] = ECHEATID_MINUS1;
    }

    for (i = 0; i < 0xC; i++) {
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

Cheat *CheatsDB::GetCheat(eCheatID arg1) const {
    for (size_t var_a0 = 0; var_a0 < 0xCU; var_a0++) {
        Cheat *temp_v1 = &D_00458B60[var_a0];
        if (temp_v1->unk_00 == arg1) {
            return temp_v1;
        }
    }
    return NULL;
}

unsigned int CheatsDB::ConvertSequenceToIndex(eCheatInput const *arg0, int arg1) {
    int var_a2 = 0;

    for (int var_a3 = 0; var_a3 < arg1; var_a3++) {
        var_a2 |= arg0[var_a3] << (var_a3 * 2);
    }
    return var_a2;
}

#if 0
// rodata issues
extern const char D_00458910[] = "%s: { ";
extern const char D_00458918[] = ", ";
extern const char D_00458920[] =" }";

void CheatsDB::PrintCheatInfo(Cheat const *arg0, char *arg1) {
    #define BUFFER_LEN 4
    char sp[CHEAT_UNK_04_LEN][BUFFER_LEN];

    sprintf(arg1, D_00458910, arg0->unk_14);

    for (size_t i = 0; i < CHEAT_UNK_04_LEN; i++) {
        strncpy(sp[i], CheatInputHandler::GetInputName(arg0->unk_04[i]), BUFFER_LEN-1);
        sp[i][BUFFER_LEN-1] = '\0';

        if (i != 0) {
            strcat(arg1, D_00458918);
        }
        strcat(arg1, sp[i]);
    }

    strcat(arg1, D_00458920);
    #undef BUFFER_LEN
}
#else
INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allcheats", PrintCheatInfo__8CheatsDBPC5CheatPc);
#endif

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allcheats", _vt$17CheatInputHandler);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allcheats", _vt$16CheatInputSystem);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allcheats", _vt$8CheatsDB);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allcheats", __tf8CheatsDB);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allcheats", __tf16CheatInputSystem);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allcheats", __tf17CheatInputHandler);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allcheats", func_00146458);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allcheats", D_004589F0);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allcheats", D_004589F8);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allcheats", D_00458A00);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allcheats", D_00458A08);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allcheats", D_00458A18);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allcheats", D_00458A20);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allcheats", D_00458A28);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allcheats", D_00458A30);

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

// INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allcheats", D_00458B64);
