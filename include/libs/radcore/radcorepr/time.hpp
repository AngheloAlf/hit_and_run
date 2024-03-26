#ifndef TIME_HPP
#define TIME_HPP

class radDate {
public:
    unsigned short unk_0;
    unsigned char unk_2;
    unsigned char unk_3;
    unsigned char unk_4;
    unsigned char unk_5;
    unsigned char unk_6;
};

class IRadTimerList {
private:
    virtual void virtual_0C(void);
public:
    virtual void virtual_14(void);
private:
    virtual void virtual_1C(void);
public:
    virtual void virtual_24(void);
};

// text

void radTimeInitialize(void);
void radTimeTerminate();
// void radTimeGetMicroseconds__Fv();
// void radTimeGetMicroseconds64__Fv();
int radTimeGetMilliseconds(void);
// void radTimeGetSeconds__Fv();
void radTimeGetDate(radDate *);
// void radTimeGetWeekday__FUsUcUc();
void radTimeCreateList(IRadTimerList **, unsigned int, int);
// void func_003C42B0();
// void func_003C4310();
// void func_003C43C0();
// void __12radTimerListUii();
// void _$_12radTimerList();
// void AddRef__12radTimerList();
// void Release__12radTimerList();
// void CreateTimer__12radTimerListPP9IRadTimerUiP17IRadTimerCallbackPvbQ29IRadTimer9ResetMode();
// void Service__12radTimerList();
// void Service__12radTimerListUi();
// void AllocateTimerMemory__12radTimerList();
// void FreeTimerMemory__12radTimerListPv();
// void __8radTimerP12radTimerListUiP17IRadTimerCallbackPvbQ29IRadTimer9ResetMode();
// void _$_8radTimer();
// void __nw__8radTimerUiP12radTimerList();
// void AddRef__8radTimer();
// void Release__8radTimer();
// void Start__8radTimer();
// void Stop__8radTimer();
// void RegisterCallback__8radTimerP17IRadTimerCallbackPv();
// void UnregisterCallback__8radTimerP17IRadTimerCallback();
// void GetTimeout__8radTimer();
// void SetTimeout__8radTimerUi();
// void GetResetMode__8radTimer();
// void SetResetMode__8radTimerQ29IRadTimer9ResetMode();
// void HasTimerExpired__8radTimer();
// void func_003C4B10();
// void __tf12radTimerList();
// void __tf8radTimer();
// void func_003C4BD8();
// void __9IRadTimer();
// void __13IRadTimerList();
// void __tf9IRadTimer();
// void __tf13IRadTimerList();
// void func_003C4D00();

// rodata

// extern UNK_TYPE D_004A4C20;
// extern UNK_TYPE _vt$8radTimer;
// extern UNK_TYPE _vt$12radTimerList$9radObject;
// extern UNK_TYPE _vt$12radTimerList;
// extern UNK_TYPE D_004A4D50;
// extern UNK_TYPE D_004A4D60;
// extern UNK_TYPE D_004A4D70;
// extern UNK_TYPE _vt$13IRadTimerList;
// extern UNK_TYPE _vt$9IRadTimer;
// extern UNK_TYPE D_004A4E20;
// extern UNK_TYPE D_004A4E30;

// data

// extern UNK_TYPE D_0043D570;
// extern UNK_TYPE D_0043D578;

// bss

// extern UNK_TYPE D_004F7D28;
// extern UNK_TYPE D_004F7D30;
// extern UNK_TYPE D_004F7D38;
// extern UNK_TYPE D_004F7D40;
// extern UNK_TYPE D_004F7D44;

#endif
