/*
 * StarManager.cpp
 *
 *  Created on: 8 Aug 2022
 *      Author: aedas
 */

#include "StarManager.h"
#include <iostream>

StarManager::StarManager() {
	// TODO Auto-generated constructor stub
}

StarManager::~StarManager() {
	// TODO Auto-generated destructor stub
}

int StarManager::init() {


	reader = StarReader();
	filter = StarFilter();
	sorter = StarSorter();
	displayer = StarDisplayer();
	if (reader.read()) {
		return 1;
	}
	std::cout << "CSV Read Success" << std::endl;
	return 0;
}

int StarManager::displayStars(double maxMag) {
	displayer.displayStars(sorter.sortByMag(filter.filter(reader.getStars(), maxMag)));
	return 0;
}

