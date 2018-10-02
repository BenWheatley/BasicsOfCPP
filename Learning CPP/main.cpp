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

class Book {
public:
	string title;
	string author;
	int pageCount;
};

int main(int argc, const char * argv[]) {
	
	Book book1;
	book1.title = "Haymaker";
	book1.author = "Example McDougal";
	book1.pageCount = 500;
	
	Book book2;
	book2.title = "Lord of the Flappers";
	book2.author = "Bob";
	book2.pageCount = 146;
	
	cout << book1.title << endl;
	cout << book2.title << endl;
	
	return 0;
}
