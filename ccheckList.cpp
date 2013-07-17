#include "cchecklist.h"

namespace cui{
	CCheckList::CCheckList(const char* Format, int Row, int Col, int Width, bool radio, bool Bordered = true, const char* Border = C_BORDER_CHARS) {}
	CCheckList::~CCheckList(void) {}
	CCheckList&	CCheckList::add(const char* Text, bool selected = false) { return *this; }
	CCheckList&	CCheckList::operator<<(const char* Text)  { return *this; }
	void CCheckList::draw(int fn = C_FULL_FRAME) {}
	int	CCheckList::edit() { return 0; }
	void* CCheckList::data() {}
	void CCheckList::set(const void* data) {}
	CCheckMark& CCheckList::operator [](unsigned int index)  { return _checkmarks[index]; }	// blah
	bool CCheckList::editable()const { return true; }
	bool CCheckList::radio()const { return _radio; }
	void CCheckList::radio(bool val) {}
	unsigned int CCheckList::flags()const { return _flags; }
	void CCheckList::flags(unsigned int theFlags) {}
	int CCheckList::selectedIndex()const { return _cur ? _cur : -1; }
	void CCheckList::selectedIndex(int index) {}
	unsigned int CCheckList::length() { return _cnt; }
}