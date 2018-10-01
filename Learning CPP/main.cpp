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
	int age;
	cout << "Enter your age: ";
	cin >> age;
	
	cin.clear();
	cin.ignore(INT_MAX,'\n');
	
	string name;
	cout << "Enter your name: ";
	getline(cin, name);
	
	cout << "Hello " << name << "; You are " << age << " years old!" << endl;
	
	return 0;
}
