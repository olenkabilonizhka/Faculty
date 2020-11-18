#ifndef COMMAND_H
#define COMMAND_H

#include "Student.h"
#include "Staff.h"
#include "StudentEM.h"
#include "Repository.h"
#include <string>
using namespace std;

class Command {
private:
	Repository<Student> StsRepository = Repository<Student>(true);
	Repository<Staff> StfRepository = Repository<Staff>(true);
	Repository<StudentEM> StsEmRepository = Repository<StudentEM>(true);
	string* bachelor;
	string* master;
	static int b;
	static int m;
public:
	Command();
	void AddStaff(Staff&);
	void AddStudent(Student&);
	void AddStudentEM(StudentEM&);
	void AllStudents();
	void AllStaff();
	void Courators();
	void GetBach();
	void GetMast();
	void ChangeCour(int = -1, int = -1);
	int PopYear();
	int GetSfNum();
	string PopLang();
	template <typename T>
	static int File(istream&, T*, int);
	~Command();
};

#endif 


