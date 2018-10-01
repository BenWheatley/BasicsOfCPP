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
	string name = "John";
	int age = 35;
	
	std::cout << "There was once a man named " << name << "\n";
	std::cout << "He was " << age << " years old\n";
	std::cout << "He liked being named " << name << "\n";
	std::cout << "But he didn't like being " << age << "\n";
	
	return 0;
}
