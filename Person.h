#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person {
protected:
	string name;
	string lastname;
	int year;
public:
	Person(string = "", string = "",int = 0);
	virtual void Print();
	string GetLastname();
	string GetName();
	int GetYear();
	void SetYear(int k = 0) {
		this->year = k;
	}
};

#endif
