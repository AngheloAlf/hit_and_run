#ifndef DEBUG_HPP
#define DEBUG_HPP

// text

// void rDebugVsnPrintf__FPcUiPCcT0();
// void rDebugSnPrintf__FPcUiPCce();
// void func_003C3D28();
int rDebugAssertFail_Implementation(char const *, char const *, unsigned int);
// void rDebugWarningFail_Implementation__FPCcT0Ui();
// void func_003C3DC0();
// void rDebugString_Implementation__FPCc();
// void rDebuggerString_Implementation__FPCc();
void rReleasePrintf(char const *,...);
// void func_003C3EA0();
// void func_003C3EB0();
// void func_003C3F00();
// void _GLOBAL_$I$rDebugVsnPrintf__FPcUiPCcT0();
// void _GLOBAL_$D$rDebugVsnPrintf__FPcUiPCcT0();

// bss

// extern UNK_TYPE D_004F7D20;

// rodata

// extern UNK_TYPE D_004A49F8;
// extern UNK_TYPE D_004A4A20;
// extern UNK_TYPE D_004A4A58;
// extern UNK_TYPE D_004A4AC8;
// extern UNK_TYPE D_004A4AD0;

// data

// extern UNK_TYPE g_rDebugHaltOnAsserts;
// extern UNK_TYPE D_0043D555;
// extern UNK_TYPE g_pDebugHandler;
extern char g_AllowDebugOutput;
// extern UNK_TYPE D_0043D55D;

#endif
