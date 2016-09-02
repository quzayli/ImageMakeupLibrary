#include "Image.h"

namespace iml {

	Image::Image() : width(0), height(0), colorModel(ColorModel::RGB)
	{

	}

	Image::Image(unsigned int w, unsigned int h) : width(w), height(h)
	{
		colors = new std::vector<Color>(width * height);
	}

	Image::~Image()
	{

	}

	
}