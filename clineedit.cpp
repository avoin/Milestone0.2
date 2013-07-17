#include "cfield.h"
#include "clineedit.h"
#include "console.h"
namespace cui{
    CLineEdit:: CLineEdit(char* Str, int Row, int Col, int Width,
        int Maxdatalen, bool* Insertmode, 
        bool Bordered,
        const char* Border){}
    CLineEdit::CLineEdit(int Row, int Col, int Width,
        int Maxdatalen, bool* Insertmode, 
        bool Bordered,
        const char* Border){}
    CLineEdit::~CLineEdit(){}
    void CLineEdit::draw(int Refresh){}
    int CLineEdit::edit(){ return 0;}
    bool CLineEdit::editable()const{return true; }
    void  CLineEdit::set(const void* Str){}
}