#include "Student.h"
#include <iostream>
#include <fstream>
using namespace std;

Student::Student(string name, string lastname, int year, string course) :Person(name, lastname,year) {
	this->course = course;
};

void Student::Print() {
	cout << name << " " << lastname << "," << course;
}

string Student::GetCourse() {
	return course;
}

ifstream& operator>>(ifstream& fin, Student& st) {
	string name; string lastname; int year; char s[50];
	fin >> name >> lastname >> year;
	fin.get(s, 50);  string course(s);
	st.name = name;
	st.lastname = lastname;
	st.year = year;
	st.course = course;
	return fin;
}

ofstream& operator<<(ofstream& fout, Student& st) {
	fout << st.name << " " << st.lastname << " " << st.year << st.course;
	return fout;
}

ostream& operator<<(ostream& out, Student& st) {
	st.Print();
	return out;
}

string Student::GetStorageName() {
	return "D:/c++/2 курс/lessons/navchalna/FacultyPr/FacultyPr/Students.txt";
}