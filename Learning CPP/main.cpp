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
#include <fstream>

using namespace std;

int main(int argc, const char * argv[]) {
	// Exceptions
	
	int n = 0;
	
	try {
		if (n!=0) {
			cout << 2/n << endl;
		} else {
			throw n;
		}
	} catch (int badNumber) {
		cout << "Bad number is " << badNumber << endl;
	}
	
	// Types
	const string div_zero = "divide by zero";
	exception e = runtime_error(div_zero);
	
	for (n=0; n<=1; ++n) {
		try {
			if (n!=0) {
				cout << 2/n << endl;
			} else {
				throw runtime_error(div_zero);
			}
			throw exception();
		} catch (runtime_error e) {
			cout << "Exception.what: " << e.what() << endl;
		} catch (exception e) {
			cout << "Exception.what: " << e.what() << endl;
		}
	}
	
	return 0;
}
