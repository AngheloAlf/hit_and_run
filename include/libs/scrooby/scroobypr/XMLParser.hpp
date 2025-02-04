#ifndef XMLPARSER_HPP
#define XMLPARSER_HPP

#include "types.h"
#include "unk.h"

#include "libs/scrooby/scroobypr/pcstring.hpp"

class XMLNode;

class XMLAttribute {
private:
    /* 0x00 */ PascalCString name;
    /* 0x10 */ PascalCString value;

public:
    PascalCString GetName(void); // void GetName__12XMLAttribute();
    PascalCString GetValue(void); // void GetValue__12XMLAttribute();

    ~XMLAttribute(void);
    XMLAttribute(void);
};

class XMLAttributeList {
    /* 0x00 */ XMLAttribute **unk_00; // buffer?
    /* 0x04 */ UNK_PAD unk_04[0x4]; // probably just alignment padding
    /* 0x08 */ UNK_TYPE8 unk_08; // length
    /* 0x10 */ UNK_TYPE8 unk_10;
    /* 0x18 */ UNK_TYPE8 unk_18;
    /* 0x20 */ UNK_TYPE4 unk_20;

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
    /* 0x00 */ XMLNode **unk_00; // buffer?
    /* 0x04 */ UNK_PAD unk_04[0x4]; // probably just alignment padding
    /* 0x08 */ UNK_TYPE8 unk_08; // length

public:
    int GetLength(void);// void GetLength__11XMLNodeList();
private:
    // void AddItem__11XMLNodeListP7XMLNode();
public:
    XMLNode *GetItem(int);// void GetItem__11XMLNodeListi();

    ~XMLNodeList();
    XMLNodeList();
};

class XMLNode {
private:
    /* 0x00 */ UNK_TYPE unk_00;
    /* 0x04 */ PascalCString unk_04;
    /* 0x14 */ UNK_PAD unk_14[0x4]; // alignment padding?
    /* 0x18 */ XMLAttributeList unk_18;
    /* 0x40 */ XMLNodeList unk_40;
    /* 0x50 */ UNK_PAD unk_50[0x18];
    /*      */ // size: 0x68

    XMLNode(void);
public:
    virtual ~XMLNode(void);

    PascalCString GetName(); // void GetName__7XMLNode();
    XMLAttributeList *GetAttributes(); // void GetAttributes__7XMLNode();
    XMLNodeList *GetChildNodes(); // void GetChildNodes__7XMLNode();
};

class XMLParser {
private:
    UNK_PAD unk_00[0x90]; // TODO: Maybe larger/smaller?
public:
    XMLParser(); // void __9XMLParser();
    ~XMLParser(); // void _$_9XMLParser();

    // Returned pointer must be deleted by caller.
    // TODO: corroborate that claim
    XMLNode *ParseFromBuffer(char *, unsigned int); // void ParseFromBuffer__9XMLParserPcUi();
private:
    // void func_00311838();
    // void Parse__9XMLParserRPc();
    // void ReadNextTag__9XMLParserRPc();
    // void func_00311A38();
    // void DecodeTag__9XMLParserR13PascalCString();
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
