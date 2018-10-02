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

class Chef {
public:
	void makeChicken() {
		cout << "Makes chicken" << endl;
	}
	void makeCake() {
		cout << "Makes cake" << endl;
	}
	void makeSpecial() {
		cout << "Makes BBQ ribs" << endl;
	}
};

class ItalianChef: public Chef {
public:
	void makePizza() {
		cout << "Makes pizza" << endl;
	}
	void makeSpecial() {
		cout << "Makes Parma ham" << endl;
	}
};

int main(int argc, const char * argv[]) {
	
	Chef chef;
	chef.makeCake();
	chef.makeSpecial();
	
	ItalianChef italianChef;
	italianChef.makeCake();
	italianChef.makePizza();
	italianChef.makeSpecial();
	
	return 0;
}
