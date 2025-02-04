#include "libs/scrooby/scroobypr/XMLParser.hpp"

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
    return this->unk_08;
}

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/scrooby/scroobypr/XMLParser", AddItem__16XMLAttributeListP12XMLAttribute);

#ifdef NON_MATCHING
XMLAttribute *XMLAttributeList::GetItem(int index) {
    s64 i = index;

    return this->unk_00[i];
}
#else
INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/scrooby/scroobypr/XMLParser", GetItem__16XMLAttributeListi);
#endif

int XMLNodeList::GetLength(void) {
    return this->unk_08;
}

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/scrooby/scroobypr/XMLParser", AddItem__11XMLNodeListP7XMLNode);

#ifdef NON_MATCHING
XMLNode *XMLNodeList::GetItem(int index) {
    s64 i = index;

    return this->unk_00[i];
}
#else
INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/scrooby/scroobypr/XMLParser", GetItem__11XMLNodeListi);
#endif

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

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/scrooby/scroobypr/XMLParser", GetName__7XMLNode);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/scrooby/scroobypr/XMLParser", GetAttributes__7XMLNode);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/scrooby/scroobypr/XMLParser", GetChildNodes__7XMLNode);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/scrooby/scroobypr/XMLParser", __9XMLParser);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/scrooby/scroobypr/XMLParser", _$_9XMLParser);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/scrooby/scroobypr/XMLParser", func_00311748);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/libs/scrooby/scroobypr/XMLParser", D_0048C8E0);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/scrooby/scroobypr/XMLParser", ParseFromBuffer__9XMLParserPcUi);

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
    if (this->unk_00 != NULL) {
        delete [] this->unk_00;
        this->unk_00 = NULL;
    }
    this->unk_08 = 0;
    this->unk_10 = 0;
}
#else
INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/scrooby/scroobypr/XMLParser", _$_16XMLAttributeList);
#endif

#if 0
XMLAttributeList::XMLAttributeList(): unk_00(NULL), unk_08(0), unk_10(0), unk_18(10), unk_20(0) {
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
