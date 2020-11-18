//#include "StaffAcademics.h"
//#include<iostream>
//using namespace std;
//
//StaffAcademics::StaffAcademics(Staff& profesor, int yearcourse) : Staff(profesor) {
//	this->yearcourse = yearcourse;
//}
//
//StaffAcademics::StaffAcademics(string name, string lastname, string subject, int yearcourse) : Staff(name, lastname, subject) {
//	this->yearcourse = yearcourse;
//}
//
//void StaffAcademics::Print() {
//	cout << "Courator of " << yearcourse << "-year st.: ";
//	Staff::Print();
//}
//
//ifstream& operator>>(ifstream& fin, StaffAcademics& sf) {
//	int y; int f;
//	fin >> y >> f;
//	Repository<Staff>::mass[]
//	sf.yearcourse
//	return fin;
//}
//
//ofstream& operator<<(ofstream& fout, StaffAcademics& sf) {
//	fout << sf.yearcourse << " " << Repository<Staff>::mass;
//	return fout;
//}