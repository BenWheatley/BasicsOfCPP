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

int main(int argc, const char * argv[]) {
	cout << getMax(27.9, -5.0) << endl;
	cout << getMax(-27.9, 5.0) << endl;
	
	return 0;
}
