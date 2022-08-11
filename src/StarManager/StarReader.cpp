/*
 * StarReader.cpp
 *
 *  Created on: 8 Aug 2022
 *      Author: aedas
 */
#include "StarReader.h"

StarReader::StarReader() {
	// TODO Auto-generated constructor stub
	stars = {};
	header = {};
}

int StarReader::read() {
	CSVReader reader = CSVReader();
	reader.read("stars/hygdata_v3.csv");
	int j = 0;
	for (int i = 0; i < reader.data[0].size(); i++) {
		std::string temp = reader.data[0][i];
		header.push_back(temp);
	}
	for (int i = 1; i < reader.data.size(); i++) {
		stars.push_back(Star(reader.data[i]));
	}
	return 0;
}

StarReader::~StarReader() {
	// TODO Auto-generated destructor stub
}

std::vector<Star> StarReader::getStars() {
	std::vector<Star> ans = {};
	for (int i = 0; i < stars.size(); i++) {
		ans.push_back(stars[i]);
	}
	return ans;
}

