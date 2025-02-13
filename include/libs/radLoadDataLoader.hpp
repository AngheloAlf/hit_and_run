#ifndef RADLOADDATALOADER_HPP
#define RADLOADDATALOADER_HPP

#include "libs/radcontent/radcontentpr/object.hpp"

// TODO: declare these classes somewhere
class radLoadStream;
class radLoadInventory;

// inherits from:
// constructor: radLoadObject
class radLoadDataLoader: public radLoadObject {
public:
    virtual ~radLoadDataLoader(void); // void _$_17radLoadDataLoader();
    radLoadDataLoader(void); // void __17radLoadDataLoader();
    // void __tf17radLoadDataLoader();
    // extern UNK_TYPE _vt$17radLoadDataLoader;

protected:
    virtual UNK_RET LoadData(radLoadStream *, int, radLoadInventory *, IRefCount *) = 0;
};

#endif
