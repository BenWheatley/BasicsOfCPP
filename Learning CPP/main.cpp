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
	int numGrid[4][5] = {
		{1,2,3,4,5},
		{1,2,3,2,1},
		{5,4,3,4,5},
		{5,4,3,2,1}
	};
	
	for (int row=0; row<4; row++) {
		cout << "{";
		for (int col=0; col<5; col++) {
			cout << numGrid[row][col];
			if (col<4) cout << ",";
		}
		cout << "}";
		if (row<3) cout << ",\n";
	}
	cout << endl;
	
	return 0;
}
