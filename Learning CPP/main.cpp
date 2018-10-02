//
//  main.cpp
//  Learning CPP
//
//  Created by Ben Wheatley on 2018/10/01.
//  Copyright © 2018 Ben Wheatley. All rights reserved.
//

#include <iostream>

// Following https://www.youtube.com/watch?v=vLnPwxZdW4Y tutorial

#include <cmath>

using namespace std;

int main(int argc, const char * argv[]) {
	int luckyNums[] = {4, 8, 16, 32};
	
	cout << luckyNums[0] << endl;
	luckyNums[0] = 19;
	cout << luckyNums[0] << endl;
	
	int luckyNums2[20] = {0,1}; // Don't need to initialize all elements!
	for (int i=0; i<20; ++i) {
		cout << luckyNums2[i] << endl;
	}
	
	return 0;
}
