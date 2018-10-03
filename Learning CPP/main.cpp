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
#include <vector>
#include <fstream>

using namespace std;

int main(int argc, const char * argv[]) {
	// File i/o
	
	string quote = "Blah one two three example";
	string filename = "output.txt";
	ofstream writer(filename);
	
	if (!writer) {
		cout << "Error opening file!";
		return -1;
	} else {
		writer << quote << endl;
		writer.close();
	}
	
	ofstream writer2(filename, ios::app);
	
	/*
	 ::binary = open as binary
	 ::in = open for reading
	 ::out = open for writing (how is this not one of {::app, ::trunc}?)
	 ::app = append
	 ::trunc = default = truncate
	 */
	
	if (!writer2) {
		cout << "Error opening file!";
		return -1;
	} else {
		writer2 << "\n - {{citation needed}}" << endl;
		writer2.close();
	}
	
	char letter;
	
	ifstream reader(filename);
	
	if (!reader) {
		cout << "Error opening file!";
		return -1;
	} else {
		for (int i=0; !reader.eof(); ++i) {
			reader.get(letter);
			cout << letter;
		}
		cout << endl;
		reader.close();
	}
	
	return 0;
}
