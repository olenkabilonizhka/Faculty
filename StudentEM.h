#ifndef STUDENTEM_H
#define STUDENTEM_H

#include "Student.h"
#include <iostream> 
#include <string>
using namespace std;

class StudentEM : public Student {
public:
	StudentEM(string name = "", string lastname = "", int year = 2020, string course = "") : Student(name, lastname, year, course) {};
	void Print() override {
		cout << name << " " << lastname << "," << course << ", EM";
	}
	string GetStorageName() {
		return "D:/c++/2 курс/lessons/navchalna/FacultyPr/FacultyPr/StudentsEM.txt";
	}
};

#endif