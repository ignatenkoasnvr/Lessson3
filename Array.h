#pragma once
#include <iostream>
#include <iomanip>
using namespace std;
class Array {
	friend ostream& operator<<(ostream&, const Array&);
	friend istream& operator>>(istream&, Array&);
public:
	explicit Array(int = 10);
	Array(const Array&);
	~Array();
	int length() const;
	const Array& operator=(const Array&);
	bool operator==(const Array&) const;
	bool operator!=(const Array& a) const {
		return !(*this == a);
	}
	int& operator[](int);
	int operator[](int) const;
private:
	int size;
	int* arr;
};