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

void sayHi(string name, int age) {
	cout << "Hello " << name << ", my records show your age is " << age << endl;
}

int main(int argc, const char * argv[]) {
	sayHi("Bob", 45);
	sayHi("Steve", 19);
	
	return 0;
}
