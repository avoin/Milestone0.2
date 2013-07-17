#pragma once
#include "cfield.h"
#include "text.h"

namespace cui {


	class CText : public CField{
		Text _T;
		bool _displayOnly;
		int _curpos;
		bool* _insertmode;
		int _offset;
		int _lcurpos;
		int _loffset;
	public:
		CText(int Row, int Col, int Width, int Height, bool* Insertmode,
			bool displayOnly, const char* Border);
		CText(const char* Str, int Row, int Col, int Width, int Height,
			bool* Insertmode, bool displayOnly,
			const char* Border);
		void draw(int fn);

		void set(const void *Str);
		void *data()const;

		int edit();
		bool  editable()const;
		bool displayOnly();
		void displayOnly(bool val);
	};
}