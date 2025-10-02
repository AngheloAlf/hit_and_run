#ifndef T_NAME_HPP
#define T_NAME_HPP

// TODO: maybe move this file to include/radcontent?

#include "t_uid_unaligned.hpp"

class tName : public tUidUnaligned {
private:
    // void __5tName();

public:
    tName(char const *);

private:
    // void __5tNameG13tUidUnaligned();
    // void __5tNameRC5tName();

public:
    ~tName();

private:
    // void func_0031DDD8();
public:
    UNK_RET SetText(char const *); // void SetText__5tNamePCc();
private:
    // void SetTextOnly__5tNamePCc();
    // void SetUID__5tNameG13tUidUnaligned();
    // void GetText__C5tName();
    // void __eq__C5tNameRC5tName();
    // void __ne__C5tNameRC5tName();
    // void __as__5tNameRC5tName();
public:
    static tUidUnaligned MakeUID(char const *); // void MakeUID__5tNamePCc();
};

#endif
