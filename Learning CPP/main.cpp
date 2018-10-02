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

double cube(double);

int main(int argc, const char * argv[]) {
	cout << cube(3) << endl;
	cout << cube(10) << endl;
	cout << cube(2) << endl;
	cout << cube(3.5) << endl;
	
	return 0;
}

double cube(double in) {
	return in*in*in;
}
