#ifndef UNICODESTRING_HPP
#define UNICODESTRING_HPP

#include "types.h"

// text

// TODO
// typedef u16 UnicodeChar;

class UnicodeString {
private:
    u16 *buffer;
    int unk_4;

public:
    UnicodeString(void);
    UnicodeString(UnicodeString const &);
    UnicodeString(char const *);
    ~UnicodeString(void);
private:
    UnicodeString &operator=(UnicodeString const &);
    void operator+=(UnicodeString const &);
    void operator+=(unsigned short const &);
    // func_003063A0
    const u16 &operator[](int) const;
    u16 &operator[](int);
    void Append(unsigned short const &);
    void Clear(void);
    int FindFirstSubstring(UnicodeString const &) const;
    const u16 *GetBuffer(void);
    int Length(void) const;
    void MakeAscii(char *, int) const;
    // func_00306748
    void ReadAscii(char const *, int);
    void ReadUnicode(unsigned short const *, int);
    // func_003068A8;
public:
    void Replace(UnicodeString const &, UnicodeString const &);
private:
    void Resize(unsigned int);
    UnicodeString Substring(unsigned int, unsigned int) const;
};

// rodata

// extern UNK_TYPE D_0048A370;
// extern UNK_TYPE D_0048A378;
// extern UNK_TYPE D_0048A380;
// extern UNK_TYPE D_0048A388;
// extern UNK_TYPE D_0048A3B0;
// extern UNK_TYPE D_0048A3C8;

// data

// extern UNK_TYPE D_0043653C;

#endif
