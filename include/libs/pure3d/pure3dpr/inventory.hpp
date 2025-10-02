#ifndef INVENTORY_HPP
#define INVENTORY_HPP

#include "libs/radLoadInventory.hpp"
#include "libs/pure3d/pure3dpr/t_name.hpp"

// text

class tFrameController;

class tEntityStore {
private:
    // void Store__12tEntityStoreP7tEntity();
    // void Store__12tEntityStoreG13tUidUnalignedP9IRefCount();
    // void StoreHandlingCollisions__12tEntityStoreP7tEntity();
    // void StoreHandlingCollisions__12tEntityStoreG13tUidUnalignedP9IRefCount();

private:
    /* vt 0x0C */ virtual UNK_RET virtual_0C(UNK_ARGS);
    /* vt 0x14 */ virtual UNK_RET virtual_14(UNK_ARGS);
    /* vt 0x1C */ virtual UNK_RET virtual_1C(UNK_ARGS);
public:
    // return type is not guaranteed.
    /* vt 0x24 */ virtual tFrameController *virtual_24(radLoadInventory::SafeCastBase &, tUidUnaligned); // radLoadHashedStore::Find(radLoadInventory::SafeCastBase &, tUidUnaligned)
private:
    /* vt 0x2C */ virtual UNK_RET virtual_2C(UNK_ARGS);
    /* vt 0x34 */ virtual UNK_RET virtual_34(UNK_ARGS);
    /* vt 0x3C */ virtual UNK_RET virtual_3C(UNK_ARGS);
    /* vt 0x44 */ virtual UNK_RET virtual_44(UNK_ARGS);
    /* vt 0x4C */ virtual UNK_RET virtual_4C(UNK_ARGS);
    /* vt 0x54 */ virtual UNK_RET virtual_54(UNK_ARGS);
    /* vt 0x5C */ virtual UNK_RET virtual_5C(UNK_ARGS);
    /* vt 0x64 */ virtual UNK_RET virtual_64(UNK_ARGS);
    /* vt 0x6C */ virtual UNK_RET virtual_6C(UNK_ARGS);
    /* vt 0x74 */ virtual UNK_RET virtual_74(UNK_ARGS);
    /* vt 0x7C */ virtual UNK_RET virtual_7C(UNK_ARGS);
    /* vt 0x84 */ virtual UNK_RET virtual_84(UNK_ARGS);
    /* vt 0x8C */ virtual UNK_RET virtual_8C(UNK_ARGS);
    /* vt 0x94 */ virtual UNK_RET virtual_94(UNK_ARGS);
    /* vt 0x9C */ virtual UNK_RET virtual_9C(UNK_ARGS);
    /* vt 0xA4 */ virtual UNK_RET virtual_A4(UNK_ARGS);
    /* vt 0xAC */ virtual UNK_RET virtual_AC(UNK_ARGS);
    /* vt 0xB4 */ virtual UNK_RET virtual_B4(UNK_ARGS);
    /* vt 0xBC */ virtual UNK_RET virtual_BC(UNK_ARGS);
    /* vt 0xC4 */ virtual UNK_RET virtual_C4(UNK_ARGS);
    /* vt 0xCC */ virtual UNK_RET virtual_CC(UNK_ARGS);
    /* vt 0xD4 */ virtual UNK_RET virtual_D4(UNK_ARGS);
    /* vt 0xDC */ virtual UNK_RET virtual_DC(UNK_ARGS);
    /* vt 0xE4 */ virtual UNK_RET virtual_E4(UNK_ARGS);
    /* vt 0xEC */ virtual UNK_RET virtual_EC(UNK_ARGS);
    /* vt 0xF4 */ virtual UNK_RET virtual_F4(UNK_ARGS);
};

class tInventory : public tEntityStore {
private:
    // void __10tInventory();
    // void _$_10tInventory();
    // void Find__10tInventoryRQ216radLoadInventory12SafeCastBaseG13tUidUnaligned();
    // void Store__10tInventoryP7tEntity();
    // void Store__10tInventoryG13tUidUnalignedP9IRefCount();
    // void StoreHandlingCollisions__10tInventoryP7tEntity();
    // void StoreHandlingCollisions__10tInventoryG13tUidUnalignedP9IRefCount();
    // void Remove__10tInventoryP9IRefCount();
    // void TestCollision__10tInventoryP7tEntity();
    // void func_003242E8();

public:
    void AddSection(char const *);

private:
    // void DeleteSection__10tInventoryG13tUidUnaligned();
    // void GetSection__10tInventoryG13tUidUnaligned();
    // void RemoveSectionElements__10tInventoryG13tUidUnaligned();

public:
    void SelectSection(tName const &);
    void PushSection(void);
    void PopSection(void);

private:
    // void FindSection__10tInventoryRC5tName();
    // void SearchSection__10tInventoryUiRQ216radLoadInventory12SafeCastBaseRC5tName();
    void RePack(void);
    // void SetAutoRepack__10tInventoryb();
    void GetAutoRepack(void);
public:
    void RemoveAllElements(void);
    void DeleteAllSections(void);
};

// void func_00324D40();
// void __tf12tEntityStore();
// void __tf10tInventory();
// void __tf14tSafeCasterObj();
// void func_00324E50();
// void _$_12tEntityStore();
// void __12tEntityStore();
// void func_00324EE0();
// void safe_cast__14tSafeCasterObjP9IRefCount();
// void func_00324F70();

// rodata

// extern UNK_TYPE D_0048E0E8;
// extern UNK_TYPE D_0048E0F0;
// extern UNK_TYPE D_0048E0F8;
// extern UNK_TYPE D_0048E128;
// extern UNK_TYPE D_0048E158;
// extern UNK_TYPE D_0048E1A0;
// extern UNK_TYPE D_0048E1F0;
// extern UNK_TYPE _vt$14tSafeCasterObj;
// extern UNK_TYPE _vt$10tInventory;
// extern UNK_TYPE _vt$12tEntityStore;
// extern UNK_TYPE D_0048E3E0;
// extern UNK_TYPE D_0048E3F0;
// extern UNK_TYPE D_0048E400;

#endif
