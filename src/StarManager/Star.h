/*
 * Star.h
 *
 *  Created on: 8 Aug 2022
 *      Author: aedas
 */
#include <string>
#include <vector>

#ifndef STARREADER_STAR_H_
#define STARREADER_STAR_H_

class Star {
public:
	Star(std::vector<std::string> data);
	virtual ~Star();
	std::string repr();
	double getMag();
private:
	int id, hip, hd, hr, flam, comp, comp_primary;
	std::string gl, bf, proper, spect, bayer, con, base, var;
	double ra, dec, dist, pmra, pmdec, rv, mag, absmag, ci, x, y, z, vx, vy, vz, rarad, decrad, pmrarad, pmdecrad, lum, var_min, var_max;
	int stois(std::vector<std::string> data, int pos);
	double stods(std::vector<std::string> data, int pos);
	std::string stoss(std::vector<std::string> data, int pos);
};

#endif /* STARREADER_STAR_H_ */
