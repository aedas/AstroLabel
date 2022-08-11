/*
 * StarManager.cpp
 *
 *  Created on: 8 Aug 2022
 *      Author: aedas
 */

#include "StarManager.h"

StarManager::StarManager() {
	// TODO Auto-generated constructor stub
	reader = StarReader();
	filter = StarFilter();
	sorter = StarSorter();
	displayer = StarDisplayer();
	reader.read();
}

StarManager::~StarManager() {
	// TODO Auto-generated destructor stub
}

int StarManager::displayStars(double maxMag) {
	displayer.displayStars(sorter.sortByMag(filter.filter(reader.getStars(), maxMag)));
}

