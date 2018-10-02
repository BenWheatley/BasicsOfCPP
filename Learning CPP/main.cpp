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
	int target = rand() % 6;
	int guess = -1;
	int guessCount = 0, guessLimit = 3;
	
	do {
		cout << "Enter guess: " << endl;
		cin >> guess;
		guessCount++;
	} while (target != guess && guessCount<=guessLimit);
	
	if (target == guess) {
		cout << "Correct!" << endl;
	} else {
		cout << "Fail! Answer was " << target << endl;
	}
	return 0;
}
