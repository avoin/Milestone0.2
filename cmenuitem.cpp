#include "clabel.h"
#include "cfield.h"
#include "cmenuitem.h"
namespace cui{
  
   CMenuItem::CMenuItem(bool Selected,const char* Format, const char* Text,
              int Row, int Col, int Width):CField(Row,Col,Width,1),
                         Label(Text,0,1,Width-2){}
    CMenuItem::CMenuItem(const CMenuItem &CM):
                           CField(CM.row(),CM.col(),CM.width(),1),Label((const char*)CM.Label.data(),0,1,CM.width()-2){}
    void CMenuItem::draw(int fn) {}
    int CMenuItem::edit(){return 0;}
    bool CMenuItem::editable()const{return true;}
    void CMenuItem::set(const void* Selected){}
    bool CMenuItem::selected()const{return true;}
    void CMenuItem::selected(bool val){}
    const char* CMenuItem::Text(){ return((const char*)Label.data());}
  
}