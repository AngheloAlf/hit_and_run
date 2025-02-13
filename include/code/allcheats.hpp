#ifndef ALLCHEATS_HPP
#define ALLCHEATS_HPP

#include "types.h"
#include "unk.h"

#include "code/allinput.hpp"

// extern UNK_TYPE D_004269BC;

// text

class CheatsDB;
class CheatInputHandler;

typedef enum eCheatID {
    /* -1 */ ECHEATID_MINUS1 = -1,
    /*  0 */ ECHEATID_0,
    /*  1 */ ECHEATID_1,
    /*  2 */ ECHEATID_2,
    /*  3 */ ECHEATID_3,
    /*  5 */ ECHEATID_5 = 5,
    /*  6 */ ECHEATID_6,
    /* 17 */ ECHEATID_17 = 17,
} eCheatID;

#define CHEAT_UNK_04_LEN 4

typedef enum eCheatInput {
    /* -1 */ ECHEATINPUT_MINUS1 = -1,
    /*  0 */ ECHEATINPUT_0,
    /*  4 */ ECHEATINPUT_4 = 4,
    /*  5 */ ECHEATINPUT_5,
} eCheatInput;

typedef struct Cheat {
    /* 0x00 */ eCheatID unk_00;
    /* 0x04 */ eCheatInput unk_04[CHEAT_UNK_04_LEN];
    /* 0x14 */ const char *unk_14;
} Cheat; // size = 0x18

class ICheatEnteredCallback {
public:
    virtual void virtual_0C(eCheatID arg1, bool arg2);
};

#define CHEATINPUTSYSTEM_UNK_10_LEN 0x20U

class CheatInputSystem {
    /* 0x00 */ bool unk_00;
    /* 0x04 */ u32 unk_04;
    /* 0x08 */ CheatsDB *unk_08;
    /* 0x0C */ CheatInputHandler *unk_0C;
    /* 0x10 */ ICheatEnteredCallback *unk_10[CHEATINPUTSYSTEM_UNK_10_LEN];
    /* 0x90 */ int unk_90;
    /* 0x94 */ // vtable
    /*      */ // size = 0x98

public:
    static void CreateInstance(void);
    static void DestroyInstance(void);
    static CheatInputSystem *GetInstance(void); // void GetInstance__16CheatInputSystem();

private:
    CheatInputSystem(void); // void __16CheatInputSystem();
    virtual ~CheatInputSystem(void); // void _$_16CheatInputSystem();
    void Init(void); // void Init__16CheatInputSystem();
    void SetEnabled(bool); // void SetEnabled__16CheatInputSystemb();
public:
    void SetActivated(int, bool); // void SetActivated__16CheatInputSystemib();
    bool IsActivated(int) const; // void IsActivated__C16CheatInputSystemi();
private:
    void SetCheatEnabled(eCheatID, bool); // void SetCheatEnabled__16CheatInputSystem8eCheatIDb();
    bool IsCheatEnabled(eCheatID) const; // void IsCheatEnabled__C16CheatInputSystem8eCheatID();
public:
    void ReceiveInputs(eCheatInput *, int);// void ReceiveInputs__16CheatInputSystemP11eCheatInputi();
private:
    void RegisterCallback(ICheatEnteredCallback *); // void RegisterCallback__16CheatInputSystemP21ICheatEnteredCallback();
    void UnregisterCallback(ICheatEnteredCallback *); // void UnregisterCallback__16CheatInputSystemP21ICheatEnteredCallback();

    static CheatInputSystem *spInstance; // extern UNK_TYPE _16CheatInputSystem$spInstance;
    static u32 s_cheatsEnabled;// extern UNK_TYPE _16CheatInputSystem$s_cheatsEnabled;
};

#define CHEATINPUTHANDLER_UNK_2A0_LEN 4U

class CheatInputHandler: public Mappable {
private:
    /* 0x004 */ UNK_PAD unk_004[0x294];
public:
    /* 0x298 */ u32 unk_298;
    /* 0x29C */ u32 unk_29C;
private:
    /* 0x2A0 */ eCheatInput unk_2A0[CHEATINPUTHANDLER_UNK_2A0_LEN];
    /* 0x2B0 */ UNK_TYPE4 unk_2B0;
    /*       */ // size = 0x2B4

public:
    CheatInputHandler(void); // void __17CheatInputHandler();
    virtual ~CheatInputHandler(void); // void _$_17CheatInputHandler();
public:
    void ResetInputSequence(void); // void ResetInputSequence__17CheatInputHandler();
    static const char *GetInputName(eCheatInput); // void GetInputName__17CheatInputHandler11eCheatInput();
private:
    void OnButton(int, int, Button const *); // void OnButton__17CheatInputHandleriiPC6Button();
    void OnButtonDown(int, int, Button const *); // void OnButtonDown__17CheatInputHandleriiPC6Button();
    void OnButtonUp(int, int, Button const *); // void OnButtonUp__17CheatInputHandleriiPC6Button();
    void LoadControllerMappings(unsigned int); // void LoadControllerMappings__17CheatInputHandlerUi();
};

class CheatsDB {
private:
    /* 0x0 */ eCheatID *unk_0; // cheat_id?
    /* 0x4 */ // vtable
    /*     */ // size = 0x8

public:
    CheatsDB(void); // void __8CheatsDB();
    virtual ~CheatsDB(void); // void _$_8CheatsDB();
    eCheatID GetCheatID(unsigned int) const; // void GetCheatID__C8CheatsDBUi();
    const Cheat *GetCheat(eCheatID) const;// void GetCheat__C8CheatsDB8eCheatID();
    static unsigned int ConvertSequenceToIndex(eCheatInput const *, int); // void ConvertSequenceToIndex__8CheatsDBPC11eCheatInputi();
private:
    static void PrintCheatInfo(Cheat const *, char *); // void PrintCheatInfo__8CheatsDBPC5CheatPc();
    // void __tf8CheatsDB();

    static int s_maxNumPossibleCheats; // _8CheatsDB$s_maxNumPossibleCheats
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
