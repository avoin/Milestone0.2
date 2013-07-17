#include "cfield.h"
#include "clabel.h"
#include "ccheckmark.h"
namespace cui{
    CCheckMark::CCheckMark(bool Checked,const char* Format, const char* Text,
        int Row, int Col, int Width, bool IsRadio):CField(Row, Col, Width, 1), _Label(Text, 0, 4, Width - 4) {}
    CCheckMark::CCheckMark(const CCheckMark& C): CField(C), _Label(C._Label){}
    void CCheckMark::draw(int fn){}
    int CCheckMark::edit(){return 0;}
    bool CCheckMark::editable()const{return true;}
    void CCheckMark::set(const void* flag){}
    bool CCheckMark::checked()const{return true;}
    void CCheckMark::checked(bool val){}
    bool CCheckMark::radio(){return true;}
    void CCheckMark::radio(bool isRadio){}
    CCheckMark::operator bool(){return _flag;}
    CCheckMark::operator char*(){ return (char*)_Label.data();} 
    bool CCheckMark::operator=(bool flag){return true;}
}

//test