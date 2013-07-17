#include "cuigh.h"
#include "cframe.h"
#include "cdailog.h"
namespace cui{
    CDialog::CDialog(CFrame *Container,
        int Row, int Col, 
        int Width, int Height, 
        bool Bordered,
        const char* Border){}
    CDialog::~CDialog(){}
    void CDialog::draw(int fn){}
    int CDialog::edit(int fn){return 0;}

    int CDialog::add(CField* field, bool dynamic){ return true;}
    int CDialog::add(CField& field, bool dynamic){return false;}
    CDialog& CDialog::operator<<(CField* field){
        add(field); 
        return *this;}
    CDialog& CDialog::operator<<(CField& field){
        add(field); 
        return *this;}

    bool CDialog::editable(){ 
        return _editable;
    }
    int CDialog::fieldNum()const{	
        return _fnum;
    }
    int CDialog::curIndex()const{
        return _curidx;
    }

    CField& CDialog::operator[](unsigned int index){
        return *_fld[index];
    }
    CField& CDialog::curField(){return *_fld[_curidx];}
};