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
	bool isStereotype = true;
	bool isTall = false;
	
	if (isStereotype) {
		cout << "Stereotype detected!" << endl;
	} else {
		cout << "Stereotype _NOT_ detected!" << endl;
	}
	
	if (isStereotype && isTall) {
		cout << "Tall stereotype!" << endl;
	} else if (isStereotype && !isTall) {
		cout << "Short stereotype!" << endl;
	} else {
		cout << "Is not a stereotype!" << endl;
	}
	
	return 0;
}
