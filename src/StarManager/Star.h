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
	int mId, mHip, mHd, mHr, mFlam, mComp, mComp_primary;
	std::string mGl, mBf, mProper, mSpect, mBayer, mCon, mBase, mVar;
	double mRa, mDec, mDist, mPmra, mPmdec, mRv, mMag, mAbsmag, mCi, mX, mY, mZ, mVx, mVy, mVz, mRarad, mDecrad, mPmrarad, mPmdecrad, mLum, mVar_min, mVar_max;
	int stois(std::vector<std::string> data, int pos);
	double stods(std::vector<std::string> data, int pos);
	std::string stoss(std::vector<std::string> data, int pos);
};

#endif /* STARREADER_STAR_H_ */
