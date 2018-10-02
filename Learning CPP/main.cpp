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

double getMax(double a, double b) {
	if (a>b) {
		return a;
	}
	return b;
}

double getMax(double a, double b, double c) {
	if (a>b && a>c) {
		return a;
	}
	if (b>a && b>c) {
		return b;
	}
	return c;
}

int main(int argc, const char * argv[]) {
	cout << getMax(27.9, -5.0) << endl;
	cout << getMax(-27.9, 5.0) << endl;
	
	cout << getMax(2, 5, 10) << endl;
	cout << getMax(100, 7, 11) << endl;
	cout << getMax(1, 4, 3) << endl;
	
	return 0;
}
