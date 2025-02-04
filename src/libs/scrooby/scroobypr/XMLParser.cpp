#include "libs/scrooby/scroobypr/XMLParser.hpp"

#include "attributes.h"
#include "garbage_helper.h"
#include "include_asm.h"

#include "libs/pure3d/pure3dpr/memory.hpp"

PascalCString XMLAttribute::GetName() {
    return this->name;
}

PascalCString XMLAttribute::GetValue() {
    return this->value;
}

int XMLAttributeList::GetLength(void) {
    return this->vec.GetLength();
}

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/scrooby/scroobypr/XMLParser", AddItem__16XMLAttributeListP12XMLAttribute);

XMLAttribute *XMLAttributeList::GetItem(int index) {
    return this->vec.GetItem(index);
}

int XMLNodeList::GetLength(void) {
    return this->vec.GetLength();
}

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/scrooby/scroobypr/XMLParser", AddItem__11XMLNodeListP7XMLNode);

XMLNode *XMLNodeList::GetItem(int index) {
    return this->vec.GetItem(index);
}

extern const char D_0048C8E0[];

XMLNode::XMLNode() : unk_04(), unk_18(), unk_40() {
    this->unk_00 = 0;
    this->unk_04 = D_0048C8E0;
}

#if 0
XMLNode::~XMLNode(void) {
    p3d::AllocType temp_s4;
    int temp_v0;
    int var_s0;

    // this->unk_68 = &_vt$a3XMLNode;
    temp_s4 = p3d::GetCurrentAlloc();
    p3d::SetCurrentAlloc(p3d::ENUM_P3D_ALLOCTYPE_2);
    temp_v0 = this->unk_18.GetLength();
    for (var_s0 = 0; var_s0 < temp_v0; var_s0++) {
        delete this->unk_18.GetItem(var_s0);
    }

    temp_v0 = this->unk_40.GetLength();
    for (var_s0 = 0; var_s0 < temp_v0; var_s0++) {
        delete this->unk_40.GetItem(var_s0);
    }
    p3d::SetCurrentAlloc(temp_s4);
}
#else
INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/scrooby/scroobypr/XMLParser", _$_7XMLNode);
#endif

PascalCString XMLNode::GetName(void) {
    return this->unk_04;
}
XMLAttributeList *XMLNode::GetAttributes(void) {
    return &this->unk_18;
}
XMLNodeList *XMLNode::GetChildNodes(void) {
    return &this->unk_40;
}

XMLParser::XMLParser(void) : unk_00(), unk_10() {
}

#if 0
// vtable
XMLParser::~XMLParser() {
}
#else
INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/scrooby/scroobypr/XMLParser", _$_9XMLParser);
#endif

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/scrooby/scroobypr/XMLParser", func_00311748);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/libs/scrooby/scroobypr/XMLParser", D_0048C8E0);

#ifdef NON_MATCHING
extern const char D_0048C8E8[] = "Root";
extern const char D_0048C8F0[] = " ";
extern const char D_0048C8F8[] = "/";

XMLNode *XMLParser::ParseFromBuffer(char *arg1, UNUSED unsigned int arg2) {
    p3d::AllocType temp_s2;
    XMLNode* temp_v0;

    temp_s2 = p3d::GetCurrentAlloc();
    p3d::SetCurrentAlloc(p3d::ENUM_P3D_ALLOCTYPE_2);

    this->unk_00 = D_0048C8E0;

    temp_v0 = new XMLNode();

    temp_v0->unk_04 = D_0048C8E8;
    temp_v0->unk_00 = 0;

    for (XMLNode* temp_v0_2 = this->Parse(arg1); temp_v0_2 != NULL; temp_v0_2 = this->Parse(arg1)) {
        switch (temp_v0_2->unk_00) {
            case 0:
            case 2:
                temp_v0->unk_40.AddItem(temp_v0_2);
                break;
            default:
                delete temp_v0_2;
                break;
        }
    }

    p3d::SetCurrentAlloc(temp_s2);

    return temp_v0;
}
#else
INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/scrooby/scroobypr/XMLParser", ParseFromBuffer__9XMLParserPcUi);
#endif

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/scrooby/scroobypr/XMLParser", func_00311838);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/scrooby/scroobypr/XMLParser", Parse__9XMLParserRPc);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/scrooby/scroobypr/XMLParser", ReadNextTag__9XMLParserRPc);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/scrooby/scroobypr/XMLParser", func_00311A38);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/scrooby/scroobypr/XMLParser", DecodeTag__9XMLParserR13PascalCString);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/libs/scrooby/scroobypr/XMLParser", _vt$9XMLParser);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/libs/scrooby/scroobypr/XMLParser", _vt$7XMLNode);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/scrooby/scroobypr/XMLParser", __tf7XMLNode);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/scrooby/scroobypr/XMLParser", __tf9XMLParser);

XMLAttribute::~XMLAttribute(void) {
}
XMLAttribute::XMLAttribute(void): name(), value() {
}

#if 0
// vt and such
XMLAttributeList::~XMLAttributeList() {

}
#else
INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/scrooby/scroobypr/XMLParser", _$_16XMLAttributeList);
#endif

#if 0
XMLAttributeList::XMLAttributeList(): vec() {
}
#else
INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/scrooby/scroobypr/XMLParser", __16XMLAttributeList);
#endif

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/scrooby/scroobypr/XMLParser", _$_11XMLNodeList);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/scrooby/scroobypr/XMLParser", __11XMLNodeList);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/libs/scrooby/scroobypr/XMLParser", _vt$t7rVector1ZP7XMLNode);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/libs/scrooby/scroobypr/XMLParser", _vt$t7rVector1ZP12XMLAttribute);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/scrooby/scroobypr/XMLParser", __tft7rVector1ZP12XMLAttribute);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/scrooby/scroobypr/XMLParser", __tft7rVector1ZP7XMLNode);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/scrooby/scroobypr/XMLParser", _$_t7rVector1ZP12XMLAttribute);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/scrooby/scroobypr/XMLParser", _$_t7rVector1ZP7XMLNode);
