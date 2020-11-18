#ifndef REPOSITORY_H
#define REPOSITORY_H

#include <iostream>
#include <string>
#include <fstream>

template <class T>
class Repository {
protected:
	T* mass;
	int size;
	int n;
	bool sync;
	void Read();
	void Write();
	string GetStorageName();
public:
	Repository(bool sync = false);
	~Repository();
	bool Add(T&);
	void PrintAll();
	T operator[](int i);
	int Size();
};

template <class T>
Repository<T>::Repository(bool sync) {
	this->sync = sync;
	size = 100;
	mass = new T[size];
	n = 0;
	Read();
}

template <class T>
Repository<T>::~Repository() {
	Write();
	delete[] mass;
}

template <class T>
bool Repository<T>::Add(T& entity) {
	try {
		if (n >= 100)
			throw "No memory!";
		mass[n++] = entity;
	}
	catch (char* a) { cout << a << endl; }
	return true;
}

template<class T>
void Repository<T>::PrintAll() {
	for (int i = 0; i < n; i++) {
		cout << mass[i] << endl;
	}
}

template<class T>
void Repository<T>::Read() {
	ifstream fin(GetStorageName());
	if (fin.is_open()) {
		while (!fin.eof()) {
			T temp;
			fin >> temp;
			Add(temp);
		}
	}
	fin.close();
}

template<class T>
void Repository<T>::Write() {
	ofstream fout(GetStorageName());
	for (int i = 0; i < n; i++) {
		fout << mass[i];
		if (i != (n-1)) fout << endl;
	}
	fout.close();
}

template<class T>
string Repository<T>::GetStorageName() {
	T t;
	return t.GetStorageName();
}

template<typename T>
T Repository<T>::operator[](int i) {
	return mass[i];
}

template<class T>
int Repository<T>::Size() {
	return n;
}

#endif