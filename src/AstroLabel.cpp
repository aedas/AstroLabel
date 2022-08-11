//============================================================================
// Name        : AstroLabel.cpp
// Author      : Aedas Lai
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <Eigen/Eigen>
#include "ImageReader/ImageReader.h"
#include "StarManager/StarManager.h"
#include "Sort.h"
#include <vector>

int comparer(int x, int y);

int main() {
	StarManager manager = StarManager();
	manager.displayStars(1);
	//Sort<int> sort = Sort<int>();
	//std::vector<int> v = {5,8,3,6,1,1,5,8,9,2,7,1,6,4,3,2,6};
	//std::vector<int> s = sort.MergeSort(v, comparer);
	//for (int i = 0; i < s.size(); i++) {
	//	std::cout << s[i] << std::endl;
	//}
	//std::cout << s.size() << std::endl;
	return 0;
}

int comparer(int x, int y) {
	if (x > y) {
		return 1;
	}
	if (y > x) {
		return -1;
	}
	return 0;
}
