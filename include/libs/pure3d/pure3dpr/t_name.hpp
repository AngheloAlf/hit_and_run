#ifndef T_NAME_HPP
#define T_NAME_HPP

// TODO: maybe move this file to include/radcontent?

#include "t_uid_unaligned.hpp"

class tName : public tUidUnaligned {
public:
    tName(void); // void __5tName();
    tName(char const *); // __5tNamePCc

private:
    tName(tUidUnaligned); // void __5tNameG13tUidUnaligned();
    tName(tName const &); // void __5tNameRC5tName();

public:
    ~tName();

private:
    // void func_0031DDD8();
public:
    void SetText(char const *); // void SetText__5tNamePCc();
private:
    void SetTextOnly(char const *); // void SetTextOnly__5tNamePCc();
    void SetUID(tUidUnaligned); // void SetUID__5tNameG13tUidUnaligned();
public:
    const char *GetText(void) const; // void GetText__C5tName();
private:
    bool operator==(tName const &) const; // void __eq__C5tNameRC5tName();
    bool operator!=(tName const &) const; // void __ne__C5tNameRC5tName();
public:
    tName &operator=(tName const &); // void __as__5tNameRC5tName();
    static tUidUnaligned MakeUID(char const *); // void MakeUID__5tNamePCc();

    inline bool operator==(tUidUnaligned const &arg1) const {
        // This is kinda fake, but whatever
        return *static_cast<tUidUnaligned const *>(this) == arg1;
    }

private:
    static UNK_TYPE4 s_allocator;
};

#endif
