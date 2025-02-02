#ifndef UNICODESTRING_HPP
#define UNICODESTRING_HPP

#include "libc/stddef.h"

#include "types.h"

typedef u16 UnicodeChar;

class UnicodeString {
private:
    UnicodeChar *buffer;
    int capacity;

public:
    UnicodeString(void);
    UnicodeString(UnicodeString const &);
    UnicodeString(char const *);
    ~UnicodeString(void);
private:
    UnicodeString &operator=(UnicodeString const &);
    void operator+=(UnicodeString const &);
    void operator+=(UnicodeChar const &);
    const u16 &operator[](int index) const;
    u16 &operator[](int index);
    void Append(UnicodeChar const &);
    void Clear(void);
    int FindFirstSubstring(UnicodeString const &) const;
    const u16 *GetBuffer(void);
    int Length(void) const;
    void MakeAscii(char *, int size) const;
    void ReadAscii(char const *, int);
    void ReadUnicode(UnicodeChar const *, int);
public:
    void Replace(UnicodeString const &, UnicodeString const &);
private:
    void Resize(size_t);
    UnicodeString Substring(size_t, size_t) const;
};

// data

// extern UNK_TYPE D_0043653C;

#endif
