//============================================================================
// Name        : AstroLabel.cpp
// Author      : Aedas Lai
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <Eigen/Eigen>
#include "ImageReader/ImageReader.h"
#include "StarManager/StarManager.h"

int comparer(int x, int y);

int main() {
	StarManager manager = StarManager();
	manager.displayStars(1);
	return 0;
}
