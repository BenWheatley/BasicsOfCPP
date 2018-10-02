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

class Student {
public:
	string name;
	string major;
	double gpa;
	Student(string aName, string aMajor, double aGPA) {
		name = aName;
		major = aMajor;
		gpa = aGPA;
	}
	
	bool hasHonours() {
		return gpa>=3.5;
	}
};

int main(int argc, const char * argv[]) {
	
	Student student1("Dave", "Science", 2.3);
	Student student2("Jim", "Business", 3.8);
	Student student3("Anne", "Business", 4.8);
	Student student4("Claire", "Science", 3.1);
	
	cout << student1.hasHonours() << endl;
	cout << student2.hasHonours() << endl;
	cout << student3.hasHonours() << endl;
	cout << student4.hasHonours() << endl;
	
	return 0;
}
