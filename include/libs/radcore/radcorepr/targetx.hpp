#ifndef TARGETX_HPP
#define TARGETX_HPP

enum radDbgComType {
    /* 0x0 */ radDbgComType_0,
    /* 0x3 */ radDbgComType_3 = 0x3,
};

// text

void radDbgComTargetInitialize(radDbgComType, unsigned short, void *, int);
// void radDbgComTargetTerminate__Fv();
void radDbgComService(void);
// void radDbgComTargetCreateChannel__FUsPP17IRadDbgComChanneli();
// void func_003CDA78();

// data

// extern UNK_TYPE D_0043D7F4;

#endif
