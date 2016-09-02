#pragma once
#include "Color.h"

#include <vector>

namespace iml {

	class Image
	{
	public:
		Image();
		Image(unsigned int w, unsigned int h);
		~Image();

		enum ColorModel {
			RGB,
			HSL,
			HSV
		};

		unsigned int getWidth() const { return width; }
		unsigned int getHeight() const { return height; }
		std::vector<Color> *getColors() { return colors; }


		inline Color& getColorAt(unsigned int x, unsigned int y) {
			return colors->at((width * y) + x);
		}

		inline const Color& getColorAt(unsigned int x, unsigned int y) const {
			return colors->at((width * y) + x);
		}

		inline Color& operator [] (unsigned int i) {
			return colors->at(i);
		}
		inline const Color& operator [] (unsigned int i) const {
			return colors->at(i);
		}


	protected:
		unsigned int width;
		unsigned int height;
		ColorModel colorModel;
		std::vector<Color> *colors;
	};

}

