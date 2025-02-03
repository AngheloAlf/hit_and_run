#ifndef XMLTREE_HPP
#define XMLTREE_HPP

#include "types.h"
#include "unk.h"

#include "libs/scrooby/scroobypr/pcstring.hpp"

class XMLNode;

class XMLTree {
private:
    XMLNode *unk_0;
    XMLNode *unk_4;
    XMLNode *unk_8;
    PascalCString unk_C;
    UNK_PAD unk_1C[0x4];

    // void func_00306C80();
public:
    XMLTree(void); // void __7XMLTree();
    XMLTree(XMLNode *);// void __7XMLTreeP7XMLNode();
    virtual ~XMLTree(void); // void _$_7XMLTree();
private:
    UNK_RET LoadTreeFromBuffer(char *, unsigned int, char const *); // void LoadTreeFromBuffer__7XMLTreePcUiPCc(); // maybe return bool?
    UNK_RET LoadTreeWorker(char const *); // void LoadTreeWorker__7XMLTreePCc(); // maybe return bool?
    UNK_RET SetCurrentElementByName(char const *); // void SetCurrentElementByName__7XMLTreePCc(); // maybe return bool?
    UNK_RET SetCurrentElementByIndex(int); // void SetCurrentElementByIndex__7XMLTreei(); // maybe return bool?
    UNK_RET GetFilename(PascalCString &); // void GetFilename__7XMLTreeR13PascalCString(); // maybe return bool?
    void SetFilename(char const *); // void SetFilename__7XMLTreePCc();
    int GetName(PascalCString &); // void GetName__7XMLTreeR13PascalCString(); // change to size_t if PascalCString::Length is changed
    int GetAttribute(char const *, PascalCString &); // void GetAttribute__7XMLTreePCcR13PascalCString();  // change to size_t if PascalCString::Length is changed
    UNK_RET GetAttribute(char const *, int *); // void GetAttribute__7XMLTreePCcPi();
    // void func_00307340();
    UNK_RET GetAttribute(char const *, bool *); // void GetAttribute__7XMLTreePCcPb();
    UNK_PTR GetSubTreeByName(char const *); // void GetSubTreeByName__7XMLTreePCc();
    XMLTree *GetSubTreeByIndex(int); // void GetSubTreeByIndex__7XMLTreei();
};

#endif
