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

int exponent(int base, int power) {
	int result = 1;
	for (int i=0; i<power; i++) {
		result *= base;
	}
	return result;
}

int main(int argc, const char * argv[]) {
	cout << exponent(10, 3) << endl;
	cout << exponent(2, 10) << endl;
	cout << exponent(16, 2) << endl;
	cout << exponent(256, 3) << endl;
	cout << exponent(2, 24) << endl;
	
	return 0;
}
