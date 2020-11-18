//#include "Command.h"
//#include "Staff.h"
//#include <string>
//using namespace std;
//#ifndef STAFFACADEMICS_H
//#define STAFFACADEMICS_H
//
//class StaffAcademics : public Staff {
//public:
//	StaffAcademics(Staff& = Staff(), int = 0);
//	StaffAcademics(string name, string lastname, string subject, int);
//	void Print();
//	string GetStorageName() {
//		return "D:/c++/2 курс/lessons/navchalna/FacultyPr/FacultyPr/StaffAcademics.txt"
//	}
//	friend ifstream& operator>>(ifstream& fin, StaffAcademics& sf);
//	friend ofstream& operator<<(ofstream& fout, StaffAcademics& sf);
//};
//
//#endif 
//
////StaffAcademics* temp = new StaffAcademics;
////for (int i = 0; i < 6; i++) {
////	if (arr.Size() < 6) { temp = new StaffAcademics((Staff)*arr[i%arr.Size()], i + 1); }
////	else { temp = new StaffAcademics(*arr[i], i + 1); }
////	Add(*temp);
////}
////
////StaffAcademicsRepository& StaffAcademicsRepository::Change(int year, int prof, StaffRepository& arr) {
////	StaffAcademics* temp = new StaffAcademics((Staff)*arr[prof - 1], year);
////	mass[year - 1] = (Entity*)temp;
////	return *this;
////};