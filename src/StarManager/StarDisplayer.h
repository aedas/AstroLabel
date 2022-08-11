/*
 * StarDisplayer.h
 *
 *  Created on: 8 Aug 2022
 *      Author: aedas
 */
#include "Star.h"
#include <vector>

#ifndef STARMANAGER_STARDISPLAYER_H_
#define STARMANAGER_STARDISPLAYER_H_

class StarDisplayer {
public:
	StarDisplayer();
	virtual ~StarDisplayer();
	int displayStars(std::vector<Star> stars);
};

#endif /* STARMANAGER_STARDISPLAYER_H_ */
