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

// Classes

class Animal {
private:
	double height;
	double weight;
	string name;
	
	static int numOfAnimals;

public:
	double getHeight() {	return height;	}
	double getWeight() {	return weight;	}
	string getName() {	return name;	}
	
	void setHeightCM(double height) {	this->height = height;	}
	void setWeightKG(double weight) {	this->weight = weight;	}
	void setName(string name) {	this->name = name;	}
	
	void setAll(double, double, string);
	
	Animal(double, double, string);
	Animal();
	~Animal();
	
	static int getNumOfAnimals() {	return numOfAnimals;	}
	
	void toString();
};

int Animal::numOfAnimals = 0;

void Animal::setAll(double height, double weight, string name) {
	this->height = height;
	this->weight = weight;
	this->name = name;
}

Animal::Animal(double height, double weight, string name) {
	this->setAll(height, weight, name);
	Animal::numOfAnimals++;
}

Animal::Animal() {
	Animal::numOfAnimals++;
}

Animal::~Animal() {
	cout << "Animal of name " << this->name << " was deleted" << endl;
	Animal::numOfAnimals--;
}

void Animal::toString() {
	cout << this->name << " weighs " << this->weight << "kg and is " << this->height << "cm tall" << endl;
}

class Dog: public Animal {
private:
	string breed = "Mongrel";
public:
	void printBreed() {	cout << breed << endl;	}
	
	Dog(double, double, string, string);
	Dog() : Animal(){}; // One possible way to initialize default constructor; note to self, this syntax is completely different from what I'm used to
	
	void toString();
};

Dog::Dog(double height, double weight, string name, string breed) : Animal(height, weight, name) {
	this->breed = breed;
}

void Dog::toString() {
	cout	<< this->getName() << " weighs " << this->getWeight() << "kg, is "
			<< this->getHeight() << "cm tall, and is a " << this->breed << endl;
}

int main(int argc, const char * argv[]) {
	cout << "Animal count: " << Animal::getNumOfAnimals() << endl;
	
	Animal blank;
	Animal fred(50, 33, "Fred");
	Animal sam;
	sam.setName("Sam");
	sam.setHeightCM(160);
	sam.setWeightKG(87);
	
	cout << "Animal count: " << Animal::getNumOfAnimals() << endl;
	
	blank.toString();
	fred.toString();
	sam.toString();
	
	cout << "Animal count: " << Animal::getNumOfAnimals() << endl;
	
	Dog spot(38, 16, "Spots", "Dalmation");
	
	cout << "Animal count: " << Animal::getNumOfAnimals() << endl;
	
	spot.toString();
	spot.printBreed();
	spot.Animal::toString();
	
	return 0;
}
