/*
 * StarReader.cpp
 *
 *  Created on: 8 Aug 2022
 *      Author: aedas
 */
#include "StarReader.h"
#include <iostream>
#include <unistd.h>
#include <cstring>

//#define PROJ_NAME "AstroLabel"
#define CSV_PATH_FROM_EXE "/stars/hygdata_v3.csv"

StarReader::StarReader() {
	// TODO Auto-generated constructor stub
	mStars = {};
	mHeader = {};
}

int StarReader::read() {
	CSVReader reader = CSVReader();
	std::string path = StarReader::getProjPath();
	if (reader.read(path + CSV_PATH_FROM_EXE) == 1) {
		std::cout << "failed" << std::endl;
		return 1;
	}
	for (int i = 0; i < reader.data[0].size(); i++) {
		std::string temp = reader.data[0][i];
		mHeader.push_back(temp);
	}
	for (int i = 1; i < reader.data.size(); i++) {
		mStars.push_back(Star(reader.data[i]));
	}
	return 0;
}

StarReader::~StarReader() {
	// TODO Auto-generated destructor stub
}

std::vector<Star> StarReader::getStars() {
	std::vector<Star> ans = {};
	for (int i = 0; i < mStars.size(); i++) {
		ans.push_back(mStars[i]);
	}
	return ans;
}

std::string StarReader::getProjPath() {
	char temp[PATH_MAX] = {0};
	char *pTemp = getcwd(temp, PATH_MAX);
	//std::cout << pTemp << std::endl;
	std::string path(temp, temp + strlen(temp));
	return path;
	//std::cout << path << std::endl;
	//std::string::size_type n = path.rfind(PROJ_NAME);
	//std::string ans = path.substr(0, n + sizeof(PROJ_NAME));
	//std::cout << ans << std::endl;
	//return ans;
}

