#include "cvaledit.h"
#include "console.h"
 namespace cui{
    CValEdit::CValEdit(char* Str, int Row, int Col, int Width,
          int Maxdatalen, bool* Insertmode,
          bool (*Validate)(const char* , CDialog&), 
          void (*Help)(MessageStatus, CDialog&),
          bool Bordered,
          const char* Border):CLineEdit(Row, Col, Width, Maxdatalen, Insertmode, Bordered,Border){}
    CValEdit::CValEdit(int Row, int Col, int Width,
          int Maxdatalen, bool* Insertmode,
          bool (*Validate)(const char* , CDialog&), 
          void (*Help)(MessageStatus, CDialog&),
          bool Bordered,
          const char* Border):CLineEdit(Row, Col, Width, Maxdatalen, Insertmode, Bordered,Border){}
    int CValEdit::edit(){return 0;}
  }