#ifndef XMLPARSER_HPP
#define XMLPARSER_HPP

#include "types.h"
#include "unk.h"

#include "libs/radcore/radcorepr/memorymanager.hpp"
#include "libs/scrooby/scroobypr/pcstring.hpp"

class XMLNode;

template <class T>
class rVector {
    /* 0x00 */ T *buffer; // buffer?
    /* 0x08 */ s64 length; // length
    /* 0x10 */ s64 capacity; // capacity
    /* 0x18 */ s64 threshold;
    /* 0x20 */ int rad_allocator;

public:
    rVector() : buffer(NULL), length(0), capacity(0), threshold(10), rad_allocator(0) {}
    virtual ~rVector() {
        if (this->buffer != NULL) {
            delete [] this->buffer;
            this->buffer = NULL;
        }
        this->length = 0;
        this->capacity = 0;
    };

    s64 GetLength(void) {
        return this->length;
    }

    void Insert(s64 index, T item) {
        T *temp = &item;

        if (this->capacity < index + 1) {
            s64 new_capacity = index + this->threshold;

            if (this->capacity == 0) {
                this->rad_allocator = radMemoryGetCurrentAllocator();
            }

            int allocator = radMemorySetCurrentAllocator(this->rad_allocator);
            T *new_buffer = new T[new_capacity];
            radMemorySetCurrentAllocator(allocator);

            if (new_capacity < this->length) {
                this->length = new_capacity;
            }

            for (int i = 0; i < this->length; i++) {
                new_buffer[i] = this->buffer[i];
            }

            delete [] this->buffer;

            this->buffer = new_buffer;
            this->capacity = new_capacity;
        }

        for (int i = this->length; i > index; i--) {
            this->buffer[i+1] = this->buffer[i];
        }

        this->buffer[index] = *temp;
        this->length++;
    }
    void AddItem(T item) {
        this->Insert(this->length, item);
    }

    T &GetItem(UNK_TYPE8 index) {
        return this->buffer[index];
    }
};


class XMLAttribute {
private:
    /* 0x00 */ PascalCString name;
    /* 0x10 */ PascalCString value;

    friend class XMLParser;

public:
    PascalCString GetName(void); // void GetName__12XMLAttribute();
    PascalCString GetValue(void); // void GetValue__12XMLAttribute();

    ~XMLAttribute(void);
    XMLAttribute(void);
};

class XMLAttributeList {
    /* 0x00 */ rVector<XMLAttribute *> vec;

    friend class XMLParser;

public:
    int GetLength(void); // void GetLength__16XMLAttributeList();
private:
    void AddItem(XMLAttribute *); // void AddItem__16XMLAttributeListP12XMLAttribute();
public:
    XMLAttribute *GetItem(int); // void GetItem__16XMLAttributeListi();

    ~XMLAttributeList();
    XMLAttributeList();
};

class XMLNodeList {
    /* 0x00 */ rVector<XMLNode *> vec;

    friend class XMLParser;

public:
    int GetLength(void);// void GetLength__11XMLNodeList();
private:
    void AddItem(XMLNode *);
public:
    XMLNode *GetItem(int);// void GetItem__11XMLNodeListi();

    ~XMLNodeList();
    XMLNodeList(void);
};

class XMLNode {
public:
    enum Kind {
        /* 0 */ NODE_KIND_0,
        /* 1 */ NODE_KIND_1,
        /* 2 */ NODE_KIND_2,
        /* 3 */ NODE_KIND_3,
    };
private:
    /* 0x00 */ Kind unk_00; // kind
    /* 0x04 */ PascalCString unk_04; // name
    /* 0x14 */ UNK_PAD unk_14[0x4]; // alignment padding?
    /* 0x18 */ XMLAttributeList unk_18;
    /* 0x40 */ XMLNodeList unk_40;
    /* 0x68 */ /* vtable */
    /*      */ // size = 0x70

    friend class XMLParser;

    XMLNode(void);
public:
    virtual ~XMLNode();

    PascalCString GetName(void); // void GetName__7XMLNode();
    XMLAttributeList *GetAttributes(void); // void GetAttributes__7XMLNode();
    XMLNodeList &GetChildNodes(void); // void GetChildNodes__7XMLNode();
};

class XMLParser {
private:
    /* 0x00 */ PascalCString unk_00;
    /* 0x10 */ XMLNode unk_10;
    /* 0x80 */ /* vtable */
    /*      */ // size = 0x88

public:
    XMLParser(); // void __9XMLParser();
    virtual ~XMLParser(); // void _$_9XMLParser();

    XMLNode *ParseFromBuffer(char *, unsigned int); // void ParseFromBuffer__9XMLParserPcUi();
private:
    // void func_00311838();
    XMLNode *Parse(char *&); // void Parse__9XMLParserRPc();
    PascalCString ReadNextTag(char *&); // void ReadNextTag__9XMLParserRPc();
    // void func_00311A38();
    XMLNode *DecodeTag(PascalCString &); // void DecodeTag__9XMLParserR13PascalCString();
};

// void __tf7XMLNode();
// void __tf9XMLParser();
// void __tft7rVector1ZP12XMLAttribute();
// void __tft7rVector1ZP7XMLNode();
// void _$_t7rVector1ZP12XMLAttribute();
// void _$_t7rVector1ZP7XMLNode();

// rodata

// extern UNK_TYPE D_0048C8E0;
// extern UNK_TYPE D_0048C8E8;
// extern UNK_TYPE _vt$9XMLParser;
// extern UNK_TYPE _vt$7XMLNode;
// extern UNK_TYPE D_0048C930;
// extern UNK_TYPE D_0048C940;
// extern UNK_TYPE _vt$t7rVector1ZP7XMLNode;
// extern UNK_TYPE _vt$t7rVector1ZP12XMLAttribute;
// extern UNK_TYPE D_0048C980;
// extern UNK_TYPE D_0048C9A0;

#endif
