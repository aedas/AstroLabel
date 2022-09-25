//============================================================================
// Name        : AstroLabel.cpp
// Author      : Aedas Lai
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <Eigen/Eigen>
#include "ImageManager/ImageManager.h"
#include "StarManager/StarManager.h"
#include <PNGReader.h>
#include <PNGWriter.h>
#include <PNGPNG.h>

int main() {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	//StarManager star = StarManager();
	//star.init();
	ImageManager img = ImageManager();
	img.init();
	img.read("./src/ImageManager/Dippers.png");
	img.copy(0);
	img.darken(0);
	img.write("./test.png", 0);
	img.write("./testcopy.png", 1);
	img.freeAll();
	return 0;
}
