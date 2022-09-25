/*
 * StarManager.h
 *
 *  Created on: 8 Aug 2022
 *      Author: aedas
 */
#include "StarReader.h"
#include "StarDisplayer.h"
#include "StarFilter.h"
#include "StarSorter.h"
#include <vector>
#include <string>

#ifndef STARMANAGER_STARMANAGER_H_
#define STARMANAGER_STARMANAGER_H_

class StarManager {
public:
	StarManager();
	virtual ~StarManager();
	int init();
	int displayStars(double maxMag);
private:
	StarReader reader;
	StarDisplayer displayer;
	StarFilter filter;
	StarSorter sorter;

};

#endif /* STARMANAGER_STARMANAGER_H_ */
