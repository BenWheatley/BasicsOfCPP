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
	string colour, pluralNoun, celebrity;
	
	cout << "Enter colour: " << endl;
	getline(cin, colour);
	cout << "Enter plural noun: " << endl;
	getline(cin, pluralNoun);
	cout << "Enter celebrity: " << endl;
	getline(cin, celebrity);
	
	cout << "Roses are " << colour << endl;
	cout << pluralNoun << " are blue" << endl;
	cout << "I love " << celebrity << endl;
	
	return 0;
}
