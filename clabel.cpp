#include "cfield.h"
#include "clabel.h"
namespace cui{
CLabel::    CLabel(const CLabel& L){}
CLabel:: CLabel(const char *Str, int Row, int Col,
    int Len){}
CLabel::CLabel(int Row, int Col, int Len){}
CLabel::~CLabel(){}
void CLabel::draw(int fn){}
int CLabel::edit(){ return 0;}
bool CLabel::editable()const{return true;}
void CLabel::set(const void* str){}
}