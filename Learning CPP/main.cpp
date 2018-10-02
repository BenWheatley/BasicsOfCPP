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
	double n1, n2;
	char op;
	
	while (true) {
		cout << "Enter n1: " << endl;
		cin >> n1;
		cout << "Enter op: " << endl;
		cin >> op;
		cout << "Enter n2: " << endl;
		cin >> n2;
		
		double result;
		if (op=='+') {
			result = n1+n2;
		} else if (op=='-') {
			result = n1-n2;
		} else if (op=='*') {
			result = n1*n2;
		} else if (op=='/') {
			result = n1/n2;
		} else {
			cout << "Invalid op" << endl;
			return 1;
		}
		
		cout << result << endl;
	}
	
	return 0;
}
