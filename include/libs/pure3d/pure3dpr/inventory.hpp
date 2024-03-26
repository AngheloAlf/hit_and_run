#ifndef INVENTORY_HPP
#define INVENTORY_HPP

#include "entity.hpp"

// text

class tEntityStore {
    // void Store__12tEntityStoreP7tEntity();
    // void Store__12tEntityStoreG13tUidUnalignedP9IRefCount();
    // void StoreHandlingCollisions__12tEntityStoreP7tEntity();
    // void StoreHandlingCollisions__12tEntityStoreG13tUidUnalignedP9IRefCount();
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
