//
//  main.cpp
//  Learning CPP
//
//  Created by Ben Wheatley on 2018/10/01.
//  Copyright © 2018 Ben Wheatley. All rights reserved.
//

#include <iostream>

// Following https://www.youtube.com/watch?v=vLnPwxZdW4Y tutorial

using namespace std;

int main(int argc, const char * argv[]) {
	char grade = 'A';
	string phrase = "Giraffe Academy";
	
	int age = 50;
	float floatingPi = 3.14159265359;
	double doublePi = 2.71828182846;
	
	bool isStereotype = true;
	
	cout << phrase.length() << endl;
	cout << phrase[0] << endl;
	cout << phrase.find("Academy") << endl;
	cout << phrase.find("Academy", 10) << endl; // Not found == -1, went to console as 18446744073709551615
	phrase[0] = 'B';
	cout << phrase << endl;
	string substring = phrase.substr(8, 3);
	cout << substring << endl;
	
	return 0;
}
