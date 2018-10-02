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
	double num1, num2;
	
	cout << "Enter first number\n";
	cin >> num1;
	
	cout << "Enter second number\n";
	cin >> num2;
	
	cout << "Total: " << num1+num2;
	
	return 0;
}
