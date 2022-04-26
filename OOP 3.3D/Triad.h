//Triad.h
#pragma once
#pragma pack(1)
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Triad {
private:
	double a, b, c;
public:
	void set_a(double value) { a = value; }
	void set_b(double value) { b = value; }
	void set_c(double value) { c = value; }

	double get_a() const { return a; }
	double get_b() const { return b; }
	double get_c() const { return c; }

	Triad();
	Triad(const double a, const double b, const double c);
	Triad(const Triad& s);

	Triad& operator=(const Triad& s);
	operator string() const;

	friend ostream& operator << (ostream& out, const Triad& s);
	friend istream& operator >>(istream& in, Triad& s);
};
