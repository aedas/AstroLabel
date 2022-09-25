/*
 * ImageManager.h
 *
 *  Created on: 11 Aug 2022
 *      Author: aedas
 */

#include <PNGReader.h>
#include <PNGWriter.h>
#include <vector>
#include <PNGPNG.h>

#ifndef IMAGEMANAGER_IMAGEMANAGER_H_
#define IMAGEMANAGER_IMAGEMANAGER_H_

class ImageManager {
public:
	ImageManager();
	virtual ~ImageManager();
	int init();
	int freeImage(int index);
	int freeAll();
	int read(std::string path);
	int readAll(std::vector<std::string> paths);
	int write(std::string path, int index);
	int darken(int index);
	std::vector<PNGPNG> images;
	int copy(int index);
private:
	PNGReader reader;
	PNGWriter writer;

};

#endif /* IMAGEMANAGER_IMAGEMANAGER_H_ */
