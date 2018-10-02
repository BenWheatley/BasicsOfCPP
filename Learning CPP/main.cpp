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
private:
	string name;
	string major;
	double gpa;
public:
	Student(string aName, string aMajor, double aGPA) {
		name = aName;
		major = aMajor;
		gpa = aGPA;
	}
	
	bool hasHonours() {
		return gpa>=3.5;
	}
	
	void setGPA(double aGPA) {
		if (aGPA>0 && aGPA<5.0)	{
			gpa = aGPA;
		} else {
			gpa = 2.5;
		}
	}
	double getGPA() {
		return gpa;
	}
	
};

int main(int argc, const char * argv[]) {
	
	Student student1("Dave", "Science", 2.3);
	Student student2("Jim", "Business", 3.8);
	Student student3("Anne", "Business", 4.8);
	Student student4("Claire", "Science", 3.1);
	
	cout << "student2 GPA: " << student2.getGPA() << endl;
	student2.setGPA(-1.0);
	cout << "student2 GPA: " << student2.getGPA() << endl;
	
	cout << student1.hasHonours() << endl;
	cout << student2.hasHonours() << endl;
	cout << student3.hasHonours() << endl;
	cout << student4.hasHonours() << endl;
	
	return 0;
}
