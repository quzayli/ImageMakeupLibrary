#pragma once
#include <ostream>

namespace iml {
	typedef float ctype;

	class Color
	{
	public:
		Color();
		Color(ctype rgba);
		Color(ctype rgb, ctype a);
		Color(ctype r, ctype g, ctype b, ctype a = 1.0f);
		Color(const Color &c);

		Color& operator =(const Color &c);
		Color operator +(const Color &c) const;
		Color operator -(const Color &c) const;
		Color operator *(const Color &c) const;
		Color operator *(ctype v) const;
		Color operator /(ctype v) const;

		Color& operator +=(const Color &c);
		Color& operator -=(const Color &c);
		Color& operator *=(const Color &c);
		Color& operator *=(ctype v);
		Color& operator /=(ctype v);

		bool operator ==(const Color &c) const;
		bool operator !=(const Color &c) const;

		friend  std::ostream & operator <<(std::ostream &os, const Color &c);

	private:
		struct
		{
			ctype r;
			ctype g;
			ctype b;
			ctype a;
		};

	};

}