#include "libs/scrooby/scroobypr/XMLTree.hpp"

#include "attributes.h"
#include "garbage_helper.h"
#include "include_asm.h"

#include "sce_libs/gcc/ee/libg/atoi.h"
#include "sce_libs/gcc/ee/libg/strcmp.h"

#include "libs/pure3d/pure3dpr/memory.hpp"

#include "libs/scrooby/scroobypr/XMLParser.hpp"

GARBAGE_INSTR("addiu       $sp, $sp, 0x10");

XMLTree::XMLTree() : filename() {
    this->unk_0 = NULL;
    this->unk_4 = NULL;
    this->unk_8 = NULL;
}

XMLTree::XMLTree(XMLNode * arg1) : filename() {
    this->unk_4 = arg1;
    this->unk_8 = arg1;
    this->unk_0 = NULL;
}

XMLTree::~XMLTree(void) {
    p3d::AllocType alloc_type = p3d::GetCurrentAlloc();

    p3d::SetCurrentAlloc(p3d::ENUM_P3D_ALLOCTYPE_2);

    this->unk_4 = NULL;
    this->unk_8 = NULL;

    if (this->unk_0 != NULL) {
        delete this->unk_0;
    }
    this->unk_0 = NULL;

    p3d::SetCurrentAlloc(alloc_type);
}

UNK_RET XMLTree::LoadTreeFromBuffer(char *arg1, unsigned int arg2, char const *arg3) {
    p3d::AllocType temp_s3 = p3d::GetCurrentAlloc();

    p3d::SetCurrentAlloc(p3d::ENUM_P3D_ALLOCTYPE_2);

    if (this->unk_0 != NULL) {
        delete this->unk_0;
    }

    XMLParser sp;
    this->unk_0 = sp.ParseFromBuffer(arg1, arg2);

    this->filename = "";
    p3d::SetCurrentAlloc(temp_s3);

    return this->LoadTreeWorker(arg3);
}

UNK_RET XMLTree::LoadTreeWorker(char const *arg1) {
    this->unk_4 = NULL;

    if (this->unk_0 != NULL) {
        XMLNodeList *temp_v0 = this->unk_0->GetChildNodes();
        int temp_v0_2 = temp_v0->GetLength();
        for (int var_s1 = 0; var_s1 < temp_v0_2; var_s1++) {
            if (temp_v0->GetItem(var_s1)->GetName().EqualsInsensitive(arg1)) {
                this->unk_8 = this->unk_4 = temp_v0->GetItem(var_s1);
                return 1;
            }
        }
    }

    this->unk_8 = this->unk_4 = NULL;
    return 0;
}

UNK_RET XMLTree::SetCurrentElementByName(char const *arg1) {
    if (this->unk_4 == NULL) {
        this->unk_8 = NULL;
        return 0;
    }

    XMLNodeList *temp_v0 = this->unk_4->GetChildNodes();
    int temp_v0_2 = temp_v0->GetLength();
    for (int var_s1 = 0; var_s1 < temp_v0_2; var_s1++) {
        if (temp_v0->GetItem(var_s1)->GetName().EqualsInsensitive(arg1)) {
            this->unk_8 = temp_v0->GetItem(var_s1);
            return 1;
        }
    }

    this->unk_8 = NULL;
    return 0;
}

UNK_RET XMLTree::SetCurrentElementByIndex(int arg1) {
    if (this->unk_4 == NULL) {
        this->unk_8 = NULL;
        return 0;
    }

    XMLNodeList *temp_v0 = this->unk_4->GetChildNodes();
    if ((arg1 < temp_v0->GetLength())) {
        this->unk_8 = temp_v0->GetItem(arg1);
        return 1;
    }

    this->unk_8 = NULL;
    return 0;
}

UNK_RET XMLTree::GetFilename(PascalCString &out) {
    out = this->filename;
    return 1;
}

void XMLTree::SetFilename(char const *in) {
    this->filename = in;
}

int XMLTree::GetName(PascalCString &arg1) {
    arg1 = this->unk_8->GetName();
    return arg1.Length();
}

int XMLTree::GetAttribute(char const *arg1, PascalCString &arg2) {
    if (this->unk_8 == NULL) {
        arg2 = "";
        return 0;
    }

    XMLAttributeList *temp_v0 = this->unk_8->GetAttributes();
    if (temp_v0 == NULL) {
        arg2 = "";
        return 0;
    }

    int temp_v0_2 = temp_v0->GetLength();
    for (int var_s1 = 0; var_s1 < temp_v0_2; var_s1++) {
        XMLAttribute *temp_v0_3 = temp_v0->GetItem(var_s1);
        if (temp_v0_3->GetName().EqualsInsensitive(arg1)) {
            arg2 = temp_v0_3->GetValue();
            return arg2.Length();
        }
    }

    arg2 = "";
    return 0;
}

UNK_RET XMLTree::GetAttribute(char const *arg1, int *arg2) {
    PascalCString sp;

    if (this->GetAttribute(arg1, sp) == 0) {
        *arg2 = 0;
        return 0;
    }

    *arg2 = atoi(sp);
    return 1;
}

GARBAGE_INSTR("addiu       $sp, $sp, 0x50");

UNK_RET XMLTree::GetAttribute(char const *arg1, bool *arg2) {
    PascalCString sp;

    if (this->GetAttribute(arg1, sp) == 0) {
        return 0;
    }

    sp.ToUpper();
    if (strcmp(sp, "TRUE") == 0) {
        *arg2 = true;
    } else {
        *arg2 = false;
    }

    return 1;
}

extern const char D_0048A490[] = "(";
extern const char D_0048A498[] = ")";
extern const char D_0048A4A0[] = ",";
extern const char D_0048A4A8[] = ")\n";
extern const char D_0048A4B0[] = "  ";
extern const char D_0048A4B8[] = "(/";
extern const char D_0048A4C0[] = "====================";

XMLTree *XMLTree::GetSubTreeByName(char const *arg1) {
    if (this->unk_4 == NULL) {
        return NULL;
    }

    XMLNodeList *temp_v0 = this->unk_4->GetChildNodes();
    s32 temp_v0_2 = temp_v0->GetLength();

    for (int var_s1 = 0; var_s1 < temp_v0_2; var_s1++) {
        if (temp_v0->GetItem(var_s1)->GetName().EqualsInsensitive(arg1)) {
            UNUSED p3d::AllocType prev_alloc_type = p3d::GetCurrentAlloc();
            p3d::SetCurrentAlloc(p3d::ENUM_P3D_ALLOCTYPE_2);

            XMLTree *ret = new XMLTree(temp_v0->GetItem(var_s1));
            //! @bug (?) missing p3d::SetCurrentAlloc(prev_alloc_type);
            return ret;
        }
    }

    return NULL;
}

XMLTree *XMLTree::GetSubTreeByIndex(int arg1) {
    if (this->unk_4 == NULL) {
        return NULL;
    }

    XMLNodeList *temp_v0 = this->unk_4->GetChildNodes();
    if (arg1 < temp_v0->GetLength()) {
        UNUSED p3d::AllocType prev_alloc_type = p3d::GetCurrentAlloc();
        p3d::SetCurrentAlloc(p3d::ENUM_P3D_ALLOCTYPE_2);

        XMLTree *ret = new XMLTree(temp_v0->GetItem(arg1));
        //! @bug (?) missing p3d::SetCurrentAlloc(prev_alloc_type);
        return ret;
    }
    return NULL;
}
