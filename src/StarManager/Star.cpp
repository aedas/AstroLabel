/*
 * Star.cpp
 *
 *  Created on: 8 Aug 2022
 *      Author: aedas
 */

#include "Star.h"

Star::Star(std::vector<std::string> data) {
	// TODO Auto-generated constructor stub
	id = stois(data, 0);
	hip = stois(data, 1);
	hd = stois(data, 2);
	hr = stois(data, 3);
	gl = stoss(data, 4);
	bf = stoss(data, 5);
	proper = stoss(data, 6);
	ra = stods(data, 7);
	dec = stods(data, 8);
	dist = stods(data, 9);
	pmra = stods(data, 10);
	pmdec = stods(data, 11);
	rv = stods(data, 12);
	mag = stods(data, 13);
	absmag = stods(data, 14);
	spect = stoss(data, 15);
	ci = stods(data, 16);
	x = stods(data, 17);
	y = stods(data, 18);
	z = stods(data, 19);
	vx = stods(data, 20);
	vy = stods(data, 21);
	vz = stods(data, 22);
	rarad = stods(data, 23);
	decrad = stods(data, 24);
	pmrarad = stods(data, 25);
	pmdecrad = stods(data, 26);
	bayer = stoss(data, 27);
	flam = stois(data, 28);
	con = stoss(data, 29);
	comp = stois(data, 30);
	comp_primary = stois(data, 31);
	base = stoss(data, 32);
	lum = stois(data, 33);
	var = stoss(data, 34);
	var_min = stods(data, 35);
	var_max = stods(data, 36);
}


Star::~Star() {
	// TODO Auto-generated destructor stub
}

std::string Star::repr() {
	return std::to_string(id) + ", " + proper + ", " + bayer + " " + std::to_string(flam) + ", " + con + ", " + std::to_string(mag);
}

double Star::getMag() {
	return mag;
}

int Star::stois(std::vector<std::string> data, int pos) {
	if (data.size() <= pos) {
		return 0;
	}
	if (data[pos].length() == 0) {
		return 0;
	}
	return stoi(data[pos]);
}

double Star::stods(std::vector<std::string> data, int pos) {
	if (data.size() <= pos) {
			return 0;
		}
		if (data[pos].length() == 0) {
			return 0;
		}
		return stod(data[pos]);
}

std::string Star::stoss(std::vector<std::string> data, int pos) {
	if (data.size() <= pos) {
			return "";
		}
		if (data[pos].length() == 0) {
			return "";
		}
		return data[pos];
}

