/*
 * StarSorter.cpp
 *
 *  Created on: 8 Aug 2022
 *      Author: aedas
 */

#include "StarSorter.h"
#include "Sort.h"

StarSorter::StarSorter() {
	// TODO Auto-generated constructor stub

}

StarSorter::~StarSorter() {
	// TODO Auto-generated destructor stub
}

std::vector<Star> StarSorter::sortByMag(std::vector<Star> stars) {
	Sort<Star> sort = Sort<Star>();
	return sort.MergeSort(stars, StarSorter::compareByMag);

}

int StarSorter::compareByMag(Star star1, Star star2) {
	if (star1.getMag() < star2.getMag()) {
		return 1;
	}
	if (star1.getMag() > star2.getMag()) {
		return -1;
	}
	return 0;
}
