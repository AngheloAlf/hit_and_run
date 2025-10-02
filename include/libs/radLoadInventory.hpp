#ifndef RAD_LOAD_INVENTORY_HPP
#define RAD_LOAD_INVENTORY_HPP

#include "types.h"
#include "unk.h"

class radLoadInventory {
public:
    class SafeCastBase {
    };

    template <typename T>
    class SafeCast : public SafeCastBase {
    public:
        SafeCast(void);
    };
};

#endif
