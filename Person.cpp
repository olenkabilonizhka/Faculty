#include "Person.h"
#include <iostream>
using namespace std;

Person::Person(string name, string lastname, int year) {
	this->name = name;
	this->lastname = lastname;
	this->year = year;
}

void Person::Print() {
	cout << " Just a person!" << endl;
}

string Person::GetName() {
	return name;
}

string Person::GetLastname() {
	return lastname;
}

int Person::GetYear() {
	return year;
}