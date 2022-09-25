/*
 * StarReader.h
 *
 *  Created on: 8 Aug 2022
 *      Author: aedas
 */

#include "CSVReader.h"
#include <vector>

#include "Star.h"

#ifndef STARREADER_STARREADER_H_
#define STARREADER_STARREADER_H_

class StarReader {
public:
	StarReader();
	virtual ~StarReader();
	std::vector<Star> getStars();
	int read();
private:
	std::vector<std::string> mHeader;
	std::vector<Star> mStars;
	std::string getProjPath();
};

#endif /* STARREADER_STARREADER_H_ */
