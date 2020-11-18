#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
using namespace std;

class Student : public Person {
protected:
	string course = "";
public:
	Student(string = "", string = "", int = 2020, string = "");
	void Print() override;
	string GetStorageName();
	string GetCourse();
	friend ifstream& operator>>(ifstream& fin, Student& st);
	friend ofstream& operator<<(ofstream& fout, Student& st);
	friend ostream& operator<<(ostream& out, Student& st);
};

#endif
