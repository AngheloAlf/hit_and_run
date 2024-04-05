#ifndef LOADMANAGER_HPP
#define LOADMANAGER_HPP

#include "types.h"
#include "unk.h"

#include "file.hpp"
#include "inventory.hpp"

// text

class tFileHandler {
private:
    // void LoadFile__12tFileHandlerP14radLoadOptionsP23radLoadUpdatableRequest();
private:
    /* vt 0x0C */ virtual void virtual_0C(); /* placeholder */
};

// void LoadData__13tChunkHandlerP13radLoadStreamiP16radLoadInventoryP9IRefCount();

class tP3DFileHandler : tFileHandler {
    // void __15tP3DFileHandleri();
    // void _$_15tP3DFileHandler();
    // void CheckExtension__15tP3DFileHandlerPc();
    // void Load__15tP3DFileHandlerP5tFileP12tEntityStore();
    // void AddHandler__15tP3DFileHandlerP13tChunkHandler();
    // void AddHandler__15tP3DFileHandlerP13tChunkHandlerUi();
    // void GetHandler__15tP3DFileHandlerUi();
    // void RemoveAllHandlers__15tP3DFileHandler();

private:
    /* vt 0x14 */ virtual void virtual_14(); /* placeholder */
    /* vt 0x1C */ virtual void virtual_1C(); /* placeholder */
    /* vt 0x24 */ virtual void virtual_24(); /* placeholder */
public:
    /* vt 0x2C */ virtual void virtual_2C(tFileMem *, tInventory *);
};

// void func_00327198();
// void Load__19tSimpleChunkHandlerP10tChunkFileP12tEntityStore();
// void HandleCollision__19tSimpleChunkHandlerP7tEntity();
// void CheckChunkID__19tSimpleChunkHandlerUi();
// void __12tLoadRequestPCc();
// void __12tLoadRequestP5tFile();
// void _$_12tLoadRequest();
// void SetCallback__12tLoadRequestPQ212tLoadRequest8Callback();
// void SetAsync__12tLoadRequestb();
// void SetMemoryAllocator__12tLoadRequesti();
// void SetInventorySection__12tLoadRequestPCc();
// void func_00327728();
// void SetUserData__12tLoadRequestPv();
// void SetDummy__12tLoadRequestb();
// void IsDummy__12tLoadRequest();
// void func_00327748();
// void GetState__12tLoadRequest();
// void func_00327780();
// void Done__Q212tLoadRequest16InternalCallback();

class tLoadManager {
private:
// void __12tLoadManageri();
// void _$_12tLoadManager();

public:
    void SwitchTask(void);
    void CancelAll(void);

private:
// void Load__12tLoadManagerP12tLoadRequest();
// void TriggerCallbacks__12tLoadManager();
// void AddHandler__12tLoadManagerP12tFileHandlerPc();
// void GetHandler__12tLoadManagerPc();
// void RemoveAllHandlers__12tLoadManager();

public:
    tP3DFileHandler *GetP3DHandler(void);
};

// void func_00327BD8();
// void __tf12tFileHandler();
// void __tf13tChunkHandler();
// void __tf19tSimpleChunkHandler();
// void __tf15tP3DFileHandler();
// void _$_Q212tLoadRequest16InternalCallback();
// void __tfQ212tLoadRequest16InternalCallback();
// void __tf12tLoadRequest();
// void __tf12tLoadManager();
// void _$_10tTempStore();
// void __tf10tTempStore();
// void func_00327F38();
// void _$_15tRefCountedTemp();
// void __15tRefCountedTemp();
// void func_00327FC0();
// void _$_12tFileHandler();
// void func_00328030();
// void SetNameOverride__13tChunkHandlerPCc();
// void _$_13tChunkHandler();
// void GetChunkID__19tSimpleChunkHandler();
// void SetNameOverride__19tSimpleChunkHandlerPCc();
// void _$_19tSimpleChunkHandler();
// void Store__10tTempStoreP7tEntity();
// void StoreHandlingCollisions__10tTempStoreP7tEntity();
// void func_00328130();
// void __tf15tRefCountedTemp();
// void func_00328190();

// rodata

// extern UNK_TYPE D_0048E860;
// extern UNK_TYPE D_0048E868;
// extern UNK_TYPE D_0048E870;
// extern UNK_TYPE D_0048E890;
// extern UNK_TYPE _vt$10tTempStore;
// extern UNK_TYPE _vt$12tLoadManager;
// extern UNK_TYPE _vt$12tLoadRequest;
// extern UNK_TYPE _vt$Q212tLoadRequest16InternalCallback;
// extern UNK_TYPE _vt$15tP3DFileHandler;
// extern UNK_TYPE _vt$19tSimpleChunkHandler;
// extern UNK_TYPE _vt$13tChunkHandler;
// extern UNK_TYPE _vt$12tFileHandler;
// extern UNK_TYPE D_0048EB00;
// extern UNK_TYPE D_0048EB10;
// extern UNK_TYPE D_0048EB20;
// extern UNK_TYPE D_0048EB38;
// extern UNK_TYPE D_0048EB50;
// extern UNK_TYPE D_0048EB78;
// extern UNK_TYPE D_0048EB88;
// extern UNK_TYPE D_0048EB98;
// extern UNK_TYPE _vt$15tRefCountedTemp;
// extern UNK_TYPE D_0048EC68;

#endif
