#include "code/allcheats.hpp"

#include "include_asm.h"
#include "garbage_helper.h"

#include "sce_libs/gcc/ee/libg/sprintf.h"
#include "sce_libs/gcc/ee/libg/strcat.h"
#include "sce_libs/gcc/ee/libg/strncpy.h"

#include "code/allmemory.hpp"

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allcheats", CreateInstance__16CheatInputSystem);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allcheats", DestroyInstance__16CheatInputSystem);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allcheats", GetInstance__16CheatInputSystem);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allcheats", __16CheatInputSystem);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allcheats", _$_16CheatInputSystem);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allcheats", Init__16CheatInputSystem);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allcheats", SetEnabled__16CheatInputSystemb);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allcheats", SetActivated__16CheatInputSystemib);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allcheats", IsActivated__C16CheatInputSystemi);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allcheats", SetCheatEnabled__16CheatInputSystem8eCheatIDb);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allcheats", IsCheatEnabled__C16CheatInputSystem8eCheatID);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allcheats", D_00458778);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allcheats", D_004587B0);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allcheats", D_004587C0);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allcheats", D_004587D0);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allcheats", D_004587E0);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allcheats", D_004587F0);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allcheats", D_00458800);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allcheats", D_00458810);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allcheats", ReceiveInputs__16CheatInputSystemP11eCheatInputi);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allcheats", RegisterCallback__16CheatInputSystemP21ICheatEnteredCallback);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allcheats", UnregisterCallback__16CheatInputSystemP21ICheatEnteredCallback);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allcheats", __17CheatInputHandler);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allcheats", _$_17CheatInputHandler);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allcheats", ResetInputSequence__17CheatInputHandler);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allcheats", GetInputName__17CheatInputHandler11eCheatInput);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allcheats", OnButton__17CheatInputHandleriiPC6Button);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allcheats", OnButtonDown__17CheatInputHandleriiPC6Button);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allcheats", OnButtonUp__17CheatInputHandleriiPC6Button);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/code/allcheats", LoadControllerMappings__17CheatInputHandlerUi);

// TODO: add to symbol_addrs
extern Cheat D_00458B60[];

CheatsDB::CheatsDB(void) : unk_0(NULL) {
    size_t i;

    for (i = 0; i < 4; i++) {
        CheatsDB::s_maxNumPossibleCheats *= 4;
    }

    this->unk_0 = new (GameMemoryAllocator_3) int[CheatsDB::s_maxNumPossibleCheats];

    for (i = 0; i < CheatsDB::s_maxNumPossibleCheats; i++) {
        this->unk_0[i] = -1;
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

int CheatsDB::GetCheatID(unsigned int arg1) const {
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

int CheatsDB::ConvertSequenceToIndex(eCheatInput const *arg0, int arg1) {
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

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/code/allcheats", D_00458B64);
