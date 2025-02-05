#include "libs/scrooby/scroobypr/XMLParser.hpp"

#include "attributes.h"
#include "garbage_helper.h"
#include "include_asm.h"

#include "libs/pure3d/pure3dpr/memory.hpp"
#include "libs/radcore/radcorepr/memorymanager.hpp"

PascalCString XMLAttribute::GetName() {
    return this->name;
}

PascalCString XMLAttribute::GetValue() {
    return this->value;
}

int XMLAttributeList::GetLength(void) {
    return this->vec.GetLength();
}

#if 0
void XMLAttributeList::AddItem(XMLAttribute *arg1) {
    UNK_TYPE8 temp_s3 = this->vec.unk_08;

    if (this->vec.unk_10 < (temp_s3 + 1)) {
        UNK_TYPE8 temp_s2 = temp_s3 + this->vec.unk_18;
        if (this->vec.unk_10 == 0) {
            this->vec.unk_20 = radMemoryGetCurrentAllocator();
        }

        int temp_s0 = radMemorySetCurrentAllocator(this->vec.unk_20);
        XMLAttribute **temp_s4 = new XMLAttribute *[temp_s2];
        radMemorySetCurrentAllocator(temp_s0);

        if (temp_s2 < this->vec.unk_08) {
            this->vec.unk_08 = temp_s2;
        }

        for (int var_a1 = 0; var_a1 < this->vec.unk_08; var_a1++) {
            temp_s4[var_a1] = this->vec.unk_00[var_a1];
        }

        delete [] this->vec.unk_00;

        this->vec.unk_00 = temp_s4;
        this->vec.unk_10 = temp_s2;
    }

    for (int var_a1 = this->vec.unk_08; var_a1 > temp_s3; var_a1--) {
        this->vec.unk_00[var_a1+1] = this->vec.unk_00[var_a1];
    }

    this->vec.unk_00[temp_s3] = arg1;
    this->vec.unk_08++;
}
#else
INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/scrooby/scroobypr/XMLParser", AddItem__16XMLAttributeListP12XMLAttribute);
#endif

XMLAttribute *XMLAttributeList::GetItem(int index) {
    return this->vec.GetItem(index);
}

int XMLNodeList::GetLength(void) {
    return this->vec.GetLength();
}

#if 0
void XMLNodeList::AddItem(XMLNode *arg1) {
    XMLNode * sp0;
    s32 var_a1;
    XMLNode **temp_s4;
    s64 temp_s2;
    UNK_TYPE8 temp_s3;
    int var_a1_2;

    sp0 = arg1;
    temp_s3 = this->vec.unk_08;
    if (this->vec.unk_10 < (temp_s3 + 1)) {
        temp_s2 = temp_s3 + this->vec.unk_18;
        if (this->vec.unk_10 == 0) {
            this->vec.unk_20 = radMemoryGetCurrentAllocator();
        }

        int temp_s0;
        temp_s0 = radMemorySetCurrentAllocator(this->vec.unk_20);
        temp_s4 = new XMLNode *[temp_s2];
        radMemorySetCurrentAllocator(temp_s0);

        if (temp_s2 < this->vec.unk_08) {
            this->vec.unk_08 = temp_s2;
        }

        for (var_a1 = 0; var_a1 < this->vec.unk_08; var_a1++) {
            temp_s4[var_a1] = this->vec.unk_00[var_a1];
        }
        delete [] this->vec.unk_00;

        this->vec.unk_00 = temp_s4;
        this->vec.unk_10 = temp_s2;
    }

    var_a1_2 = this->vec.unk_08;
    while (temp_s3 < var_a1_2) {
        this->vec.unk_00[var_a1_2+1] = this->vec.unk_00[var_a1_2];
        var_a1_2 -= 1;
    }

    this->vec.unk_00[temp_s3] = sp0;
    this->vec.unk_08++;
}
#else
INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/scrooby/scroobypr/XMLParser", AddItem__11XMLNodeListP7XMLNode);
#endif

XMLNode *XMLNodeList::GetItem(int index) {
    return this->vec.GetItem(index);
}

extern const char D_0048C8E0[];

XMLNode::XMLNode() : unk_04(), unk_18(), unk_40() {
    this->unk_00 = XMLNode::NODE_KIND_0;
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
XMLNodeList &XMLNode::GetChildNodes(void) {
    return this->unk_40;
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

// extern const char D_0048C8E8[] = "Root";
XMLNode *XMLParser::ParseFromBuffer(char *arg1, UNUSED unsigned int arg2) {
    p3d::AllocType temp_s2 = p3d::GetCurrentAlloc();
    p3d::SetCurrentAlloc(p3d::ENUM_P3D_ALLOCTYPE_2);

    this->unk_00 = D_0048C8E0;

    XMLNode* temp_v0 = new XMLNode();
    temp_v0->unk_04 = "Root";
    temp_v0->unk_00 = XMLNode::NODE_KIND_0;

    for (XMLNode* temp_v0_2 = this->Parse(arg1); temp_v0_2 != NULL; temp_v0_2 = this->Parse(arg1)) {
        if (temp_v0_2->unk_00 == XMLNode::NODE_KIND_0) {
            temp_v0->unk_40.AddItem(temp_v0_2);
        } else if (temp_v0_2->unk_00 == XMLNode::NODE_KIND_2) {
            temp_v0->unk_40.AddItem(temp_v0_2);
        } else {
            delete temp_v0_2;
        }
    }

    p3d::SetCurrentAlloc(temp_s2);

    return temp_v0;
}

extern const char D_0048C8F0[] = " ";
extern const char D_0048C8F8[] = "/";

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/scrooby/scroobypr/XMLParser", func_00311838);

XMLNode *XMLParser::Parse(char *&arg1) {
    PascalCString sp = this->ReadNextTag(arg1);

    if (sp.Length() > 0) {
        XMLNode *temp_v0 = this->DecodeTag(sp);

        if (temp_v0 != NULL) {
            if (temp_v0->unk_00 == XMLNode::NODE_KIND_0) {
                for (XMLNode* temp_v0_2 = this->Parse(arg1); temp_v0_2 != NULL; temp_v0_2 = this->Parse(arg1)) {
                    if (temp_v0_2->unk_00 == XMLNode::NODE_KIND_0 || temp_v0_2->unk_00 == XMLNode::NODE_KIND_2) {
                        temp_v0->unk_40.AddItem(temp_v0_2);
                    } else {
                        delete temp_v0_2;
                    }
                }

                return temp_v0;
            }
            if (temp_v0->unk_00 == XMLNode::NODE_KIND_2) {
                return temp_v0;
            }
            if (temp_v0->unk_00 == XMLNode::NODE_KIND_1) {
                return temp_v0;
            }
            if (temp_v0->unk_00 == XMLNode::NODE_KIND_3) {
                return temp_v0;
            }
        }
    }

    return NULL;
}

PascalCString XMLParser::ReadNextTag(char *&arg2) {
    char c;
    PascalCString ret;

    ret.Reserve(0x80);

    c = *arg2;
    while ((c != '<') && (c != '\0')) {
        c = *++arg2;
    }

    c = *++arg2;

    while ((c != '>') && (c != '\0')) {
        ret += c;
        c = *++arg2;
    }

    return ret;
}

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/scrooby/scroobypr/XMLParser", func_00311A38);

XMLNode *XMLParser::DecodeTag(PascalCString &arg1) {
    XMLNode *temp_v0 = new XMLNode();
    temp_v0->unk_00 = XMLNode::NODE_KIND_0;

    temp_v0->unk_04 = arg1.StreamFirstWord(' ');
    if (temp_v0->unk_04.Find('/')) {
        delete temp_v0;
        return NULL;
    }

    if (temp_v0->unk_04.Find('?') || temp_v0->unk_04.Find('!')) {
        temp_v0->unk_00 = XMLNode::NODE_KIND_3;
        return temp_v0;
    }

    bool var_s5 = true;
    while (var_s5) {
        PascalCString sp = arg1.StreamFirstWord(' ');
        if ((sp != D_0048C8E0)) {
            XMLAttribute *temp_s4 = new XMLAttribute();
            temp_s4->name = sp.StreamFirstWord('=');

            if (sp.Find('"')) {
                sp.StreamFirstWord('"');

                if (!sp.Find('"')) {
                    sp += ' ';
                    sp += arg1.StreamFirstWord('"');
                    sp += '"';

                    if (arg1.Find(' ')) {
                        PascalCString sp10 = arg1.StreamFirstWord(' ');
                    } else if (arg1.Find('/')) {
                        sp += arg1.StreamFirstWord('/');
                        sp += '/';
                    }
                }

                temp_s4->value = sp.StreamFirstWord('"');
            } else {
                // Shouldn't this be a ' ' instead?
                temp_s4->value = sp.StreamFirstWord('"');
            }

            temp_v0->unk_18.AddItem(temp_s4);
            if (sp.Find('/')) {
                temp_v0->unk_00 = XMLNode::NODE_KIND_2;
            }
        } else {
            var_s5 = false;
        }
    }

    return temp_v0;
}

__asm__(".section .rodata");
__asm__(".align 3");
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
