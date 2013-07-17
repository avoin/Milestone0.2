#pragma once
#include "cfield.h"
#include "cbutton.h"
namespace cui{

    CButton::CButton(const char *Str, int Row, int Col, 
        bool Bordered,
        const char* Border){}
    CButton::~CButton(){}
    void CButton::draw(int rn){}
    int CButton::edit(){return 0;}
    bool CButton::editable()const{return true;}
    void CButton::set(const void* str){}
}