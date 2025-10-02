#ifndef ENTITY_HPP
#define ENTITY_HPP

#include "libs/tRefCounted.hpp"

#include "t_name.hpp"

class tEntity : public tRefCounted {
public:
    /* 0x08 */ tName unk_08;
    /*      */ // size >= 0x10

private:
    tEntity(void); // void __7tEntity();
public:
    ~tEntity(void); // void _$_7tEntity();
private:
    void CopyName(tEntity *); // void CopyName__7tEntityP7tEntity();
    const char *GetNameDangerous(void); // void GetNameDangerous__7tEntity();
    // void __tf7tEntity();
};

#endif
