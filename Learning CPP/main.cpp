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

using namespace std;



int main(int argc, const char * argv[]) {
	// Strings
	char happy[] = {'H', 'a', 'p', 'p', 'y', '\0'};
	
	string birthday = "Birthday";
	
	cout << happy + birthday << endl;
	
	cout << "What's your name?" << endl;
	string yourName;
	getline(cin, yourName);
	
	cout << "hello " << yourName << endl;
	
	double constant = 0.57721;
	string guess;
	double guessDouble;
	
	cout << "Guess a number: " << endl;
	getline(cin, guess);
	
	guessDouble = stod(guess);
	
	if (guessDouble == constant) {
		cout << "Right" << endl;
	} else {
		cout << "Wrong" << endl;
	}
	
	cout << "String len: " << guess.length() << endl;
	cout << "String size: " << guess.size() << endl;
	cout << "String empty: " << guess.empty() << endl;
	string s = "one";
	s.append(", two");
	cout << s << endl;
	
	string s1 = "dog", s2 = "cat";
	
	cout << "comparison:\n";
	cout << s1.compare(s2) << endl;
	cout << s1.compare(s1) << endl;
	cout << s2.compare(s1) << endl;
	
	cout << "assign:\n";
	string s3 = s1.assign(s1);
	cout << "s1: " << s1 << endl;
	cout << "s3: " << s3 << endl;
	s3[0] = 'f';
	cout << "s1: " << s1 << endl;
	cout << "s3: " << s3 << endl;
	string s4 = s1.assign(s1, 0, 3);
	cout << "s4: " << s4 << endl;
	string longString = "hello this is a long string zed";
	cout << "find: " << longString.find("o") << endl;
	cout << "find: " << longString.find("z") << endl;
	
	longString.insert(6, yourName+" ");
	cout << longString << endl;
	
	longString.erase(6, yourName.length()+1);
	cout << longString << endl;
	
	longString.replace(0, 5, "HALLO");
	cout << longString << endl;
	
	// Vector
	
	return 0;
}
