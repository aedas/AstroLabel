/*
 * StarFilter.cpp
 *
 *  Created on: 8 Aug 2022
 *      Author: aedas
 */


#include "StarFilter.h"

double StarFilter::sMaxMag = 0;


StarFilter::StarFilter() {
	// TODO Auto-generated constructor stub
}

StarFilter::~StarFilter() {
	// TODO Auto-generated destructor stub
}

std::vector<Star> StarFilter::filter(std::vector<Star> stars, double maxMag) {
	sMaxMag = maxMag;
	Filter<Star> filter = Filter<Star>();
	return filter.filter(stars, magFilter);
}

double StarFilter::getMaxMag() {
	return sMaxMag;
}

bool StarFilter::magFilter(Star star) {
	return (star.getMag() < StarFilter::getMaxMag());
}
