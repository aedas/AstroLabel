/*
 * StarSorter.h
 *
 *  Created on: 8 Aug 2022
 *      Author: aedas
 */
#include "Star.h"
#include <vector>

#ifndef STARMANAGER_STARSORTER_H_
#define STARMANAGER_STARSORTER_H_


class StarSorter {
public:
	StarSorter();
	virtual ~StarSorter();
	std::vector<Star> sortByMag(std::vector<Star> stars);
private:
	static int compareByMag(Star star1, Star star2);
};

#endif /* STARMANAGER_STARSORTER_H_ */
