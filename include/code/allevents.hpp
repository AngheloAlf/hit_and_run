#ifndef ALLEVENTS_HPP
#define ALLEVENTS_HPP

#include "types.h"
#include "unk.h"

// text

// void __13EventListener();
// void _$_13EventListener();

typedef enum EventEnum {
    /* 173 */ EVENTENUM_173 = 173,
    /* 174 */ EVENTENUM_174,
} EventEnum;

class EventManager {
public:
    static void CreateInstance(void);
    static EventManager *GetInstance(void); // void GetInstance__12EventManager();
    static void DestroyInstance(void);

private:
    // void AddListener__12EventManagerP13EventListener9EventEnum();
    // void RemoveListener__12EventManagerP13EventListener9EventEnum();
    // void RemoveAll__12EventManagerP13EventListener();
public:
    UNK_RET TriggerEvent(EventEnum, void *) const; // void TriggerEvent__C12EventManager9EventEnumPv();
private:
    // void __12EventManager();
    // void _$_12EventManager();
};

// void find__H2ZPP13EventListenerZP13EventListener_X01X01RCX11G26random_access_iterator_tag_X01();
// void _M_insert_aux__t6vector2ZP13EventListenerZt7s2alloc1ZP13EventListenerPP13EventListenerRCP13EventListener();
// void __tf13EventListener();
// void _$_t18_Vector_alloc_base3ZP13EventListenerZt7s2alloc1ZP13EventListenerb0();

// rodata

// extern UNK_TYPE D_0045AE80;
// extern UNK_TYPE D_0045AE90;
// extern UNK_TYPE _vt$13EventListener;
// extern UNK_TYPE D_0045AED0;

// data

// extern UNK_TYPE _12EventManager$spInstance;

#endif
