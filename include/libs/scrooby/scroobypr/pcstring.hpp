#ifndef PCSTRING_HPP
#define PCSTRING_HPP

#include "types.h"
#include "unk.h"

class PascalCString {
private:
    /* 0x0 */ char *unk_0;
    /* 0x4 */ UNK_TYPE unk_4; // length
    /* 0x8 */ UNK_TYPE unk_8; // TODO: maybe size_t
    /* 0xC */ UNK_TYPE unk_C;

public:
    PascalCString();
    ~PascalCString();
private:
    // void func_003052A8();
    PascalCString(char const *);
    PascalCString(char);
    PascalCString(PascalCString const &); // void __13PascalCStringRC13PascalCString();
    PascalCString &operator=(PascalCString const &); // void __as__13PascalCStringRC13PascalCString();
    PascalCString &operator=(char const *); // void __as__13PascalCStringPCc();
    // void func_00305580();
    void Grow(unsigned int); // void Grow__13PascalCStringUi();
    PascalCString &operator+=(PascalCString const &); // void __apl__13PascalCStringRC13PascalCString();
    PascalCString &operator+=(char const *); // void __apl__13PascalCStringPCc();
    PascalCString &operator+=(char); // void __apl__13PascalCStringc();
    // void func_00305790();
    bool operator==(char const *) const; // void __eq__C13PascalCStringPCc();
    // void func_003057C8();
    bool operator!=(char const *) const; // void __ne__C13PascalCStringPCc();
    // void func_003057F8();
    int Length() const; // void Length__C13PascalCString(); // TODO: maybe return size_t
    void Reserve(int); // void Reserve__13PascalCStringi();
    operator char *(void); // void __opPc__13PascalCString();
    void AdjustMaxArraySize(unsigned int);// void AdjustMaxArraySize__13PascalCStringUi();
    // void func_00305898();
    PascalCString SubString(int, int); // void SubString__13PascalCStringii();
    // void func_003059B0();
    PascalCString StreamFirstWord(char arg2); // void StreamFirstWord__13PascalCStringc();
    bool Find(char);// void Find__13PascalCStringc();
    bool EqualsInsensitive(char const *arg1);// void EqualsInsensitive__13PascalCStringPCc();
    void Replace(PascalCString const &, PascalCString const &); // void Replace__13PascalCStringRC13PascalCStringT1();
    void ToUpper(void); // void ToUpper__13PascalCString();
    // void func_00305CE0();
    PascalCString FullFilename(void); // void FullFilename__13PascalCString();
    PascalCString JustFilename(void); // void JustFilename__13PascalCString();
    PascalCString JustExtension(void); // void JustExtension__13PascalCString();
    PascalCString JustPath(void); // void JustPath__13PascalCString();
};

#endif
