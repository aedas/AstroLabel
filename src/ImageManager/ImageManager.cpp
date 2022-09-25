/*
 * ImageManager.cpp
 *
 *  Created on: 11 Aug 2022
 *      Author: aedas
 */

#include "ImageManager.h"
#include <iostream>
#include <cmath>


ImageManager::ImageManager() {
	// TODO Auto-generated constructor stub
}

ImageManager::~ImageManager() {
	// TODO Auto-generated destructor stub
	
}

int ImageManager::init() {
	reader = PNGReader();
	writer = PNGWriter();
	std::cout << "hi" << std::endl;
	images = {};
	return 0;
}

int ImageManager::freeImage(int index) {
	if (index >= images.size()) {
		return 1;
	}
	writer.close(&(images[index]));
	images.erase(images.begin() + index);
	return 0;
}

int ImageManager::freeAll() {
	int index = images.size() - 1;
	while (index >= 0) {
		if (freeImage(index)) {
			return 1;
		}
		index--;
	}
	return 0;
}

int ImageManager::read(std::string path) {
	images.push_back(PNGPNG());
	if (reader.open(path, &(images.back()))) {
		images.erase(images.begin() + images.size() - 1);
		return 1;
	}
	std::cout << images.size() << std::endl;
	std::cout << "Read Image success" << std::endl;
	return 0;
}

int ImageManager::readAll(std::vector<std::string> paths) {
	for (int i = 0; i < paths.size(); i++) {
		if (read(paths[i])) {
			return 1;
		}
	}
	return 0;
}

int ImageManager::write(std::string path, int index) {
	return writer.write(path, &(images[index]));
}

int ImageManager::darken(int index) {
	std::cout << images.size() << std::endl;
	std::cout << images[index].height << std::endl;
	std::cout << images[index].color_type << std::endl;
	std::cout << images[index].bit_depth << std::endl;
	int mul = images[index].get_bytes_per_pixel();
	std::cout << images[index].color_type << std::endl;
	for (int i = 0; i < images[index].height; i++) {
		for (int j = 0; j < images[index].width; j++) {
			for (int k = 0; k < mul; k++) {
				int temp = images[index].data[i][j * mul + k];
				temp = (pow(temp/255.0, 0.6) * 255 + 255)/2;
				images[index].data[i][j * mul + k] = pow(temp/255.0, 6) * 255 ;
			}
		}
	}
	return 0;
}

int ImageManager::copy(int index) {
	PNGPNG res = images[index].copy();
	images.push_back(res);
	return 0;
}
