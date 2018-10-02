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
	int age = 17;
	double gpa = 4.3;
	string name = "Mike";
	
	cout << "Memory address of age: " << &age << endl;
	
	int *pAge = &age;
	double *pGpa = &gpa;
	string *pName = &name;
	
	cout << "Memory address in pAge: " << pAge << endl;
	cout << "Memory address in pGpa: " << pGpa << endl;
	cout << "Memory address in pName: " << pName << endl;
	
	cout << "Value in memory address pAge: " << *pAge << endl;
	cout << "Value in memory address pGpa: " << *pGpa << endl;
	cout << "Value in memory address pName: " << *pName << endl;
	
	return 0;
}
