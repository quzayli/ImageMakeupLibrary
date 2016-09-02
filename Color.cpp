#include "Color.h"

namespace iml {

	 Color::Color() { Color(0.0f, 1.0f); }

	 Color::Color(ctype rgba) : r(rgba), g(rgba), b(rgba), a(rgba) { }

	 Color::Color(ctype rgb, ctype a) : r(rgb), g(rgb), b(rgb), a(a) { }

	 Color::Color(ctype _r, ctype _g, ctype _b, ctype _a) : r(_r), g(_g), b(_b), a(_a) { }

	 Color::Color(const Color &c) : r(c.r), g(c.g), b(c.b), a(c.a) { }

	 Color& Color::operator =(const Color &c)
	{
		r = c.r, g = c.g, b = c.b, a = c.a;
		return *this;
	}

	 Color Color::operator +(const Color &c) const
	{
		return Color(r + c.r, g + c.g, b + c.b, a + c.a);
	}

	 Color Color::operator -(const Color &c) const
	{
		return Color(r - c.r, g - c.g, b - c.b, a - c.a);
	}

	 Color Color::operator *(const Color &c) const
	{
		return Color(r * c.r, g * c.g, b * c.b, a * c.a);
	}

	 Color Color::operator *(ctype v) const
	{
		return Color(r * v, g * v, b * v, a * v);
	}

	 Color Color::operator /(ctype v) const
	{
		Color c;

		v = 1.0f / v;
		c.a = a * v;
		c.r = r * v;
		c.g = g * v;
		c.b = b * v;

		return c;
	}

	 Color& Color::operator +=(const Color & c)
	{
		r += c.r;
		g += c.g;
		b += c.b;
		a += c.a;

		return *this;
	}

	 Color& Color::operator -=(const Color & c)
	{
		r -= c.r;
		g -= c.g;
		b -= c.b;
		a -= c.a;

		return *this;
	}

	 Color& Color::operator *=(const Color & c)
	{
		r *= c.r;
		g *= c.g;
		b *= c.b;
		a *= c.a;

		return *this;
	}

	 Color& Color::operator *=(ctype v)
	{
		r *= v;
		g *= v;
		b *= v;
		a *= v;

		return *this;
	}

	 Color& Color::operator /=(ctype v)
	{
		v = 1.0f / v;

		r *= v;
		g *= v;
		b *= v;
		a *= v;

		return *this;
	}

	 bool Color::operator ==(const Color &c) const
	{
		return a == c.a && r == c.r && g == c.g && b == c.b;
	}

	 bool Color::operator !=(const Color &c) const
	{
		return a != c.a || r != c.r || g != c.g || b != c.b;
	}

	 std::ostream & operator <<(std::ostream &os, const Color &c)
	{
		os << "rgba(" << c.r << ", " << c.g << ", " << c.b << ", " << c.a << ")";
		return os;
	}

}