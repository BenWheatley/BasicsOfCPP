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
	
	virtual void getClass() { cout << "I'm an animal (virtual method)" << endl;	}
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
	
	void getClass() { cout << "I'm a dog (overwritten virtual method)" << endl;	}
};

Dog::Dog(double height, double weight, string name, string breed) : Animal(height, weight, name) {
	this->breed = breed;
}

void Dog::toString() {
	cout	<< this->getName() << " weighs " << this->getWeight() << "kg, is "
			<< this->getHeight() << "cm tall, and is a " << this->breed << endl;
}

class GermanShepherd : public Dog {
public:
	void getClass() {
		cout << "I'm a German Shepherd" << endl;
	}
	void getDerived() {
		cout << "I'm an animal and a dog" << endl;
	}
};

void whatClassAreYou(Animal *animal) {
	// Without "virtual" keyword, will always be Animal::getClass
	// With "virtual" keyword, will be <instancetype>::getClass
	animal->getClass();
}

void whatClassAreYou(shared_ptr<Animal> animal) {
	// Without "virtual" keyword, will always be Animal::getClass
	// With "virtual" keyword, will be <instancetype>::getClass
	animal->getClass();
}

int main(int argc, const char * argv[]) {
	cout << "Animal count: " << Animal::getNumOfAnimals() << endl;
	
	Animal *blank = new Animal();
	Animal *fred = new Animal(50, 33, "Fred");
	Animal *sam = new Animal();
	sam->setName("Sam");
	sam->setHeightCM(160);
	sam->setWeightKG(87);
	
	cout << "Animal count: " << Animal::getNumOfAnimals() << endl;
	
	blank->toString();
	fred->toString();
	sam->toString();
	
	cout << "Animal count: " << Animal::getNumOfAnimals() << endl;
	
	Dog *spot = new Dog(38, 16, "Spots", "Dalmation");
	
	cout << "Animal count: " << Animal::getNumOfAnimals() << endl;
	
	spot->toString();
	spot->printBreed();
	spot->Animal::toString();
	
	// Deletion automatic at end of execution if they are not pointers, but not automatic if they are pointers
	delete blank;
	delete fred;
	delete sam;
	delete spot;
	
	cout << "shared_ptr example: " << endl;
	
	shared_ptr<Animal> a = make_shared<Animal>();
	shared_ptr<Dog> d = make_shared<Dog>();
	a->setName("Katie");
	d->setName("Molly");
	a->getClass();
	d->getClass();
	
	whatClassAreYou(a);
	whatClassAreYou(d);
	
	shared_ptr<GermanShepherd> gs = make_shared<GermanShepherd>();
	
	gs->getClass();
	gs->getDerived();
	
	shared_ptr<Animal> gs2 = make_shared<GermanShepherd>();
	
	gs2->getClass();
	// gs2->getDerived(); // Can't be called even though the constructed object has this method, because this isn't python
	
	return 0;
}
