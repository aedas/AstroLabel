/*
 * Star.cpp
 *
 *  Created on: 8 Aug 2022
 *      Author: aedas
 */

#include "Star.h"

Star::Star(std::vector<std::string> data) {
	// TODO Auto-generated constructor stub
	mId = stois(data, 0);
	mHip = stois(data, 1);
	mHd = stois(data, 2);
	mHr = stois(data, 3);
	mGl = stoss(data, 4);
	mBf = stoss(data, 5);
	mProper = stoss(data, 6);
	mRa = stods(data, 7);
	mDec = stods(data, 8);
	mDist = stods(data, 9);
	mPmra = stods(data, 10);
	mPmdec = stods(data, 11);
	mRv = stods(data, 12);
	mMag = stods(data, 13);
	mAbsmag = stods(data, 14);
	mSpect = stoss(data, 15);
	mCi = stods(data, 16);
	mX = stods(data, 17);
	mY = stods(data, 18);
	mZ = stods(data, 19);
	mVx = stods(data, 20);
	mVy = stods(data, 21);
	mVz = stods(data, 22);
	mRarad = stods(data, 23);
	mDecrad = stods(data, 24);
	mPmrarad = stods(data, 25);
	mPmdecrad = stods(data, 26);
	mBayer = stoss(data, 27);
	mFlam = stois(data, 28);
	mCon = stoss(data, 29);
	mComp = stois(data, 30);
	mComp_primary = stois(data, 31);
	mBase = stoss(data, 32);
	mLum = stois(data, 33);
	mVar = stoss(data, 34);
	mVar_min = stods(data, 35);
	mVar_max = stods(data, 36);
}


Star::~Star() {
	// TODO Auto-generated destructor stub
}

std::string Star::repr() {
	return std::to_string(mId) + ", " + mProper + ", " + mBayer + " " + std::to_string(mFlam) + ", " + mCon + ", " + std::to_string(mMag);
}

double Star::getMag() {
	return mMag;
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

