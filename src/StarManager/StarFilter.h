/*
 * StarFilter.h
 *
 *  Created on: 8 Aug 2022
 *      Author: aedas
 */
#include <vector>
#include "Filter.h"
#include "Star.h"

#ifndef STARMANAGER_STARFILTER_H_
#define STARMANAGER_STARFILTER_H_

class StarFilter {
public:
	StarFilter();
	virtual ~StarFilter();
	std::vector<Star> filter(std::vector<Star> stars, double maxMag);
	static double getMaxMag();
private:
	static double sMaxMag;
	static bool magFilter(Star star);
};



#endif /* STARMANAGER_STARFILTER_H_ */
