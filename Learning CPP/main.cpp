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
	cout << "literals" << endl;
	
	cout << 40 << endl;
	cout << 3.1 << endl;
	cout << 3+7 << endl;
	cout << 6*4 << endl;
	cout << 10/3 << endl; // integer arithmetic
	cout << 10.0/3 << endl; // float arithmetic
	cout << 10%3 << endl;
	
	cout << "variables" << endl;
	
	int i = 0;
	cout << i << endl;
	i++;
	cout << i << endl;
	i+=10;
	cout << i << endl;
	
	cout << "cmath" << endl;
	
	cout << pow(2, 5) << endl;
	cout << sqrt(572.3) << endl;
	cout << round(4.6) << endl;
	cout << floor(4.6) << endl;
	cout << ceil(4.6) << endl;
	cout << ceil(4.1) << endl;
	
	float a = 1.234;
	float b = 6.432;
	cout << fmax(a, b) << endl;
	cout << fmin(a, b) << endl;
	
	return 0;
}
