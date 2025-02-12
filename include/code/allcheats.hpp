#ifndef ALLCHEATS_HPP
#define ALLCHEATS_HPP

#include "types.h"
#include "unk.h"

// extern UNK_TYPE D_004269BC;

// text

typedef enum eCheatID {
    /* 0 */ ECHEATID_0,
} eCheatID;

#define CHEAT_UNK_04_LEN 4

typedef enum eCheatInput {
    /* 0 */ ECHEATINPUT_0,
} eCheatInput;

typedef struct Cheat {
    /* 0x00 */ eCheatID unk_00;
    /* 0x04 */ eCheatInput unk_04[CHEAT_UNK_04_LEN];
    /* 0x14 */ const char *unk_14;
} Cheat; // size = 0x18

class CheatInputSystem {
public:
    static void CreateInstance(void);
    static void DestroyInstance(void);

private:
    // void GetInstance__16CheatInputSystem();
    // void __16CheatInputSystem();
    // void _$_16CheatInputSystem();
    // void Init__16CheatInputSystem();
    // void SetEnabled__16CheatInputSystemb();
    // void SetActivated__16CheatInputSystemib();
    // void IsActivated__C16CheatInputSystemi();
    // void SetCheatEnabled__16CheatInputSystem8eCheatIDb();
    // void IsCheatEnabled__C16CheatInputSystem8eCheatID();
    // void ReceiveInputs__16CheatInputSystemP11eCheatInputi();
    // void RegisterCallback__16CheatInputSystemP21ICheatEnteredCallback();
    // void UnregisterCallback__16CheatInputSystemP21ICheatEnteredCallback();

    // extern UNK_TYPE _16CheatInputSystem$spInstance;
    // extern UNK_TYPE _16CheatInputSystem$s_cheatsEnabled;
};

class CheatInputHandler {
    // void __17CheatInputHandler();
    // void _$_17CheatInputHandler();
    // void ResetInputSequence__17CheatInputHandler();
public:
    static const char *GetInputName(eCheatInput); // void GetInputName__17CheatInputHandler11eCheatInput();
private:
    // void OnButton__17CheatInputHandleriiPC6Button();
    // void OnButtonDown__17CheatInputHandleriiPC6Button();
    // void OnButtonUp__17CheatInputHandleriiPC6Button();
    // void LoadControllerMappings__17CheatInputHandlerUi();
};

class CheatsDB {
    /* 0x0 */ int *unk_0; // cheat_id?
    /* 0x4 */ // vtable
    /*     */ // size = 0x8

private:
    CheatsDB(void); // void __8CheatsDB();
    virtual ~CheatsDB(void); // void _$_8CheatsDB();
    int GetCheatID(unsigned int) const; // void GetCheatID__C8CheatsDBUi();
    Cheat *GetCheat(eCheatID) const;// void GetCheat__C8CheatsDB8eCheatID();
    static int ConvertSequenceToIndex(eCheatInput const *, int); // void ConvertSequenceToIndex__8CheatsDBPC11eCheatInputi();
    static void PrintCheatInfo(Cheat const *, char *); // void PrintCheatInfo__8CheatsDBPC5CheatPc();
    // void __tf8CheatsDB();

    static int s_maxNumPossibleCheats;
};

// void __tf16CheatInputSystem();
// void __tf17CheatInputHandler();
// void func_00146458();

// data

// extern UNK_TYPE D_004269E4;

// rodata

// extern UNK_TYPE D_00458778;
// extern UNK_TYPE D_004587B0;
// extern UNK_TYPE D_004587C0;
// extern UNK_TYPE D_004587D0;
// extern UNK_TYPE D_004587E0;
// extern UNK_TYPE D_004587F0;
// extern UNK_TYPE D_00458800;
// extern UNK_TYPE D_00458810;
// extern UNK_TYPE D_00458828;
// extern UNK_TYPE D_00458878;
// extern UNK_TYPE D_004588A8;
// extern UNK_TYPE D_004588B0;
// extern UNK_TYPE D_004588C0;
// extern UNK_TYPE D_004588E8;
// extern UNK_TYPE D_00458910;
// extern UNK_TYPE D_00458918;
// extern UNK_TYPE D_00458920;
// extern UNK_TYPE _vt$17CheatInputHandler;
// extern UNK_TYPE _vt$16CheatInputSystem;
// extern UNK_TYPE _vt$8CheatsDB;
// extern UNK_TYPE D_004589B0;
// extern UNK_TYPE D_004589C0;
// extern UNK_TYPE D_004589D8;
// extern UNK_TYPE D_00458A30;
// extern UNK_TYPE D_00458B60;
// extern UNK_TYPE D_00458B64;

#endif
