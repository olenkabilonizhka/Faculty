#include "Staff.h"
#include <iostream>
#include <fstream>
using namespace std;

Staff::Staff(string name, string lastname, string subject, int year) :Person(name, lastname,year) {
	this->subject = subject;
}

Staff::Staff(Person& p, string subject, int year) : Person(p) {
	this->year = year;
	this->subject = subject;
}

void Staff::Print() {
	cout << name << " " << lastname << ", " << subject << endl;
}

//void Staff::SetYear(int yearcourse) { 
//	this->year = yearcourse;
//}

void Staff::PrintCourt() {
	cout << "Courator of " << year << "-year: " << name <<" "<< lastname << endl;
}

ifstream& operator>>(ifstream& fin, Staff& sf) {
	string name; string lastname; string subject; int year;
	fin >> name >> lastname >> subject >> year;
	sf.name = name;
	sf.lastname = lastname;
	sf.subject = subject;
	sf.year = year;
	return fin;
}

ofstream& operator<<(ofstream& fout, Staff& sf) {
	fout << sf.name << " " << sf.lastname << " " << sf.subject << " " << sf.year;
	return fout;
}

ostream& operator<<(ostream& out, Staff& sf) {
	out << sf.name << " " << sf.lastname << ", " << sf.subject;
	return out;
}

string Staff::GetStorageName() {
	return "D:/c++/2 курс/lessons/navchalna/FacultyPr/FacultyPr/Staff.txt";
}