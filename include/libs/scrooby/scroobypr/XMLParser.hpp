#ifndef XMLPARSER_HPP
#define XMLPARSER_HPP

#include "libs/scrooby/scroobypr/pcstring.hpp"

class XMLNode;

class XMLAttribute {
public:
    PascalCString GetName(); // void GetName__12XMLAttribute();
    PascalCString GetValue(); // void GetValue__12XMLAttribute();
};

class XMLAttributeList {
public:
    int GetLength();// void GetLength__16XMLAttributeList();
private:
    // void AddItem__16XMLAttributeListP12XMLAttribute();
public:
    XMLAttribute *GetItem(int);// void GetItem__16XMLAttributeListi();
};

class XMLNodeList {
public:
    int GetLength(void);// void GetLength__11XMLNodeList();
private:
    // void AddItem__11XMLNodeListP7XMLNode();
public:
    XMLNode *GetItem(int);// void GetItem__11XMLNodeListi();
};

class XMLNode {
private:
    UNK_PAD unk_00[0x68];

    // void __7XMLNode();
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
// void _$_12XMLAttribute();
// void __12XMLAttribute();
// void _$_16XMLAttributeList();
// void __16XMLAttributeList();
// void _$_11XMLNodeList();
// void __11XMLNodeList();
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
