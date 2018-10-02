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
	Book(string aTitle, string aAuthor, int aPageCount) {
		title = aTitle;
		author = aAuthor;
		pageCount = aPageCount;
	}
};

int main(int argc, const char * argv[]) {
	
	Book book1("Haymaker", "Example McDougal", 500);
	
	Book book2("Lord of the Flappers", "Bob", 146);
	
	cout << book1.title << endl;
	cout << book2.title << endl;
	
	return 0;
}
