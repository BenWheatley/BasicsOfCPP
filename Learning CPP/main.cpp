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

int add(int a, int b=0) {
	return a+b;
}

int add(int a, int b, int c) {
	return a+b+c;
}

int fibonaci(int a) {
	if (a<=2) {
		return 1;
	}
	return fibonaci(a-1)+fibonaci(a-2);
}

int main(int argc, const char * argv[]) {
	// Functions
	
	cout << add(1) << endl;
	
	cout << add(1, 2) << endl;
	
	cout << add(1, 2, 3) << endl;
	
	for (int i=1; i<20; ++i) {
		cout << fibonaci(i) << ", ";
	}
	cout << "..." << endl;
	
	return 0;
}
