//
//  main.cpp
//  Learning CPP
//
//  Created by Ben Wheatley on 2018/10/01.
//  Copyright © 2018 Ben Wheatley. All rights reserved.
//

#include <iostream>

// Following https://www.youtube.com/watch?v=vLnPwxZdW4Y tutorial
// Then https://www.youtube.com/watch?v=Rub-JsjMhWY tutorial

#include <cmath>
#include <vector>

using namespace std;



int main(int argc, const char * argv[]) {
	// Vector
	
	vector <int> lotteryNumbersVector(10);
	
	int lotteryNumbersArray[5] = {1,3,7,13,37};
	
	lotteryNumbersVector.insert(lotteryNumbersVector.begin(),
								lotteryNumbersArray,
								lotteryNumbersArray+3);
	
	lotteryNumbersVector.insert(lotteryNumbersVector.begin(), -1);
	
	lotteryNumbersVector.at(8) = -8;
	
	for (int i=0; i<lotteryNumbersVector.size(); ++i) {
		cout << lotteryNumbersVector.at(i) << endl;
	}
	
	cout << "Front: " << lotteryNumbersVector.front() << endl;
	cout << "Back: " << lotteryNumbersVector.back() << endl;
	lotteryNumbersVector.push_back(64);
	cout << "Back again: " << lotteryNumbersVector.back() << endl;
	lotteryNumbersVector.pop_back();
	cout << "Third back: " << lotteryNumbersVector.back() << endl;
	
	if (lotteryNumbersVector.empty()) {
		cout << "Is empty" << endl;
	}
	
	return 0;
}
