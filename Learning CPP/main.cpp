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
#include <map>
#include <fstream>

using namespace std;

// Classes

class Box {
private:
	int l = 0;
	int b = 0;
	int h = 0;
public:
	Box() : l(0), b(0), h(0) {};
	Box(int l, int b, int h) : l(l), b(b), h(h) {};
	Box(Box *otherBox);
	
	int getLength() { return l; }
	int getBreadth() { return b; }
	int getHeight() { return h; }
	long long CalculateVolume() {
		long long ll = l, lb = b, lh = h; // Because this wouldn't be specified long-long if none of the test cases overflowed
		return ll*lb*lh;
	}
	
	bool operator < (Box& b) {
		return (this->l < b.l) ||
		(this->b < b.b && this->l == b.l) ||
		(this->h < b.h && this->b == b.b && this->l == b.l);
	}
};

class BadLengthException : public runtime_error {
public:
	BadLengthException(int length) : runtime_error(to_string(length)) {};
};

Box::Box(Box *otherBox) { l=otherBox->l; b=otherBox->b; h=otherBox->h; }

ostream& operator << (ostream& out, Box& B) {
	out << B.getLength() << " " << B.getBreadth() << " " << B.getHeight();
	return out;
}

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

// MARK: cache challenge

struct Node{
	Node* next;
	Node* prev;
	int value;
	int key;
	Node(Node* p, Node* n, int k, int val):prev(p),next(n),key(k),value(val){};
	Node(int k, int val):prev(NULL),next(NULL),key(k),value(val){};
};

class Cache{
	
protected:
	map<int,Node*> mp; //map the key to the node in the linked list
	int cp;  //capacity
	Node* tail; // double linked list tail pointer
	Node* head; // double linked list head pointer
	virtual void set(int, int) = 0; //set function
	virtual int get(int) = 0; //get function
	
};

class LRUCache : public Cache {
public:
	LRUCache(int capacity) { cp = capacity; };
	
	void set(int key, int value) {
		// seek key:
		//     key found:
		//         extract, move to front
		//     key missing:
		//         insert at front
		//         delete last item
		try {
			Node *node = mp.at(key);
			
			if (node->prev != nullptr) {
				node->prev->next = node->next;
			}
			if (node->next != nullptr) {
				node->next->prev = node->prev;
			}
			node->prev = nullptr;
			node->next = this->head;
			this->head->prev = node;
			this->head = node;
			
		} catch (...) {
			Node *n = new Node(NULL, head, key, value);
			mp[key] = n;
			this->head = n;
			
			if (mp.size()==1) {
				this->tail = n;
			}
			
			if (mp.size() > cp && this->tail != NULL) {
				mp.erase(this->tail->key);
				
				Node *newTail = this->tail->prev;
				
				if (newTail != NULL) {
					newTail->next = NULL;
				}
			}
		}
	};
	int get(int key) {
		try {
			return (mp.at(key))->value;
		} catch (...) {
			return -1;
		}
	};
};

void challenge() {
	LRUCache cache(4);
	
	int out;
	cache.set(4, 2);
	cache.set( 2, 7);
	out = cache.get( 2); cout << out << endl;
	cache.set( 1, 8);
	cache.set( 5, 9);
	cache.set( 6, 15);
	out = cache.get( 4); cout << out << endl;
	out = cache.get( 5); cout << out << endl;
	
	
	return;
	
	int n, capacity,i;
	cin >> n >> capacity;
	LRUCache l(capacity);
	for(i=0;i<n;i++) {
		string command;
		cin >> command;
		if(command == "get") {
			int key;
			cin >> key;
			cout << l.get(key) << endl;
		}
		else if(command == "set") {
			int key, value;
			cin >> key >> value;
			l.set(key,value);
		}
	}
}

// MARK: main block

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
	
	int big1 = 0xFFFFFF;
	int overflowing = big1*big1;
	long long isItNow = big1*big1;
	long long big2 = big1;
	long long andNow = big2*big2;
	cout << "big1: " << big1 <<
	"\noverflowing: " << overflowing <<
	"\nisItNow: " << isItNow <<
	"\nandNow: " << andNow << endl;
	
	try {
		throw BadLengthException(10);
	} catch (BadLengthException e) {
		cout << e.what() << endl;
	}
	
	challenge();
	
	return 0;
}
