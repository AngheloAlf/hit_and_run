#ifndef PCSTRING_HPP
#define PCSTRING_HPP

#include "types.h"
#include "unk.h"

#include "libc/stddef.h"

class PascalCString {
private:
    /* 0x0 */ char *buffer;
    /* 0x4 */ int m_ichMac; // length
    /* 0x8 */ size_t capacity; // TODO: maybe size_t
    /* 0xC */ UNK_TYPE unk_C;

public:
    PascalCString();
    ~PascalCString();
private:
    // void func_003052A8();
    PascalCString(char const *);
    PascalCString(char);
public:
    PascalCString(PascalCString const &); // void __13PascalCStringRC13PascalCString();
    PascalCString &operator=(PascalCString const &); // void __as__13PascalCStringRC13PascalCString();
    PascalCString &operator=(char const *); // void __as__13PascalCStringPCc();
private:
    // void func_00305580();
    void Grow(size_t); // void Grow__13PascalCStringUi();
public:
    PascalCString &operator+=(PascalCString const &); // void __apl__13PascalCStringRC13PascalCString();
private:
    PascalCString &operator+=(char const *); // void __apl__13PascalCStringPCc();
public:
    PascalCString &operator+=(char); // void __apl__13PascalCStringc();
private:
    bool operator==(char const *) const; // void __eq__C13PascalCStringPCc();
public:
    bool operator!=(char const *) const; // void __ne__C13PascalCStringPCc();
    int Length() const; // void Length__C13PascalCString();
    void Reserve(int); // void Reserve__13PascalCStringi();
    operator char *(void); // void __opPc__13PascalCString();
private:
    void AdjustMaxArraySize(size_t);// void AdjustMaxArraySize__13PascalCStringUi();
    // void func_00305898();
    PascalCString SubString(int, int); // void SubString__13PascalCStringii();
    // void func_003059B0();
public:
    PascalCString StreamFirstWord(char arg2); // void StreamFirstWord__13PascalCStringc();
    bool Find(char);// void Find__13PascalCStringc();
    bool EqualsInsensitive(char const *arg1);// void EqualsInsensitive__13PascalCStringPCc();
private:
    void Replace(PascalCString const &, PascalCString const &); // void Replace__13PascalCStringRC13PascalCStringT1();
public:
    void ToUpper(void); // void ToUpper__13PascalCString();
private:
    // void func_00305CE0();
    PascalCString FullFilename(void); // void FullFilename__13PascalCString();
    PascalCString JustFilename(void); // void JustFilename__13PascalCString();
    PascalCString JustExtension(void); // void JustExtension__13PascalCString();
    PascalCString JustPath(void); // void JustPath__13PascalCString();
};

#endif
