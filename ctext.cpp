#include "ctext.h"
namespace cui {

	CText::CText(int Row, int Col, int Width, int Height, bool* Insertmode,
		bool displayOnly = false, const char* Border = C_BORDER_CHARS) {}
	CText::CText(const char* Str, int Row, int Col, int Width, int Height,
		bool* Insertmode, bool displayOnly = false,
		const char* Border = C_BORDER_CHARS) {}
	void CText::draw(int fn = C_FULL_FRAME){}

	void CText::set(const void *Str){}
	void* CText::data() const {}

	int CText::edit() { return 0; };
	bool  CText::editable()const { return true; }
	bool CText::displayOnly() { return _displayOnly; }
	void CText::displayOnly(bool val) {}

}