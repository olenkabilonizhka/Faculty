#ifndef STAFF_H
#define STAFF_H

#include "Person.h"
#include<string>
using namespace std;

class Staff : public Person {
protected:
	string subject;
public:
	Staff(string = "", string = "", string = "", int = 0);
	Staff(Person& p, string = "", int = 0);
	void Print() override;
	string GetStorageName();
	//void SetYear(int y = 0);
	void PrintCourt();
	friend ifstream& operator>>(ifstream& fin, Staff& sf);
	friend ofstream& operator<<(ofstream& fout, Staff& sf);
	friend ostream& operator<<(ostream& out, Staff& sf);
};

#endif