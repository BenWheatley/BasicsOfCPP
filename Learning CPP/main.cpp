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

string dayNumToName(int dayNum) {
	switch (dayNum) {
		case 0: return "Monday";
		case 1: return "Tuesday";
		case 2: return "Wednesday";
		case 3: return "Thursday";
		case 4: return "Friday";
		case 5: return "Saturday";
		case 6: return "Sunday";
		default:
			return "invalid day";
	}
}

int main(int argc, const char * argv[]) {
	int dayIn;
	
	cout << "Day number: " << endl;
	cin >> dayIn;
	
	cout << "Day name: " << dayNumToName(dayIn) << endl;
	
	return 0;
}
