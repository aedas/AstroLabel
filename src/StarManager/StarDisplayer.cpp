/*
 * StarDisplayer.cpp
 *
 *  Created on: 8 Aug 2022
 *      Author: aedas
 */

#include "StarDisplayer.h"
#include <iostream>

StarDisplayer::StarDisplayer() {
	// TODO Auto-generated constructor stub

}

StarDisplayer::~StarDisplayer() {
	// TODO Auto-generated destructor stub
}

int StarDisplayer::displayStars(std::vector<Star> stars) {
	for (int i = 0; i < stars.size(); i++) {
		std::cout << stars[i].repr() << std::endl;
	}
	return 0;
}

