//TrianglePrivate.cpp
#include "TrianglePrivate.h"

TrianglePrivate::TrianglePrivate()
	:Triad()
{
}

TrianglePrivate::TrianglePrivate(const double A, const double B, const double C)
{
	if (A + B > C && B + C > A && A + C > B)
	{
		set_a(A), set_b(B), set_c(C);
	}
	else
	{
		set_a(0), set_b(0), set_c(0);
	}
}

TrianglePrivate::TrianglePrivate(const TrianglePrivate& v)
	:Triad(v)
{
}

TrianglePrivate& TrianglePrivate::operator=(const TrianglePrivate& n)
{
	double a = n.get_a();
	double b = n.get_b();
	double c = n.get_c();
	return *this;
}

TrianglePrivate::operator string() const
{
	stringstream ss;
	ss << endl;
	ss << "a = " << get_a() << endl;
	ss << "b = " << get_b() << endl;
	ss << "c = " << get_c() << endl;
	return ss.str();
}

TrianglePrivate& TrianglePrivate::operator++()
{
	this->set_a(this->get_a() + 1);
	return *this;
}

TrianglePrivate& TrianglePrivate::operator--()
{
	this->set_a(this->get_a() - 1);
	return *this;
}

TrianglePrivate TrianglePrivate::operator++(int)
{
	TrianglePrivate a(*this);
	this->set_a(this->get_a() + 1);
	return a;
}

TrianglePrivate TrianglePrivate::operator--(int)
{
	TrianglePrivate a(*this);
	this->set_a(this->get_a() - 1);
	return a;
}

ostream& operator<<(ostream& out, const TrianglePrivate& s)
{
	out << (string)s;
	return out;
}

istream& operator>>(istream& in, TrianglePrivate& s)
{
	double a, b, c;
	cout << "a = "; in >> a;
	cout << "b = "; in >> b;
	cout << "c = "; in >> c;
	if (a + b > c && b + c > a && a + c > b)
	{
		s.set_a(a); s.set_b(b); s.set_c(c);
	}
	else
	{
		s.set_a(0); s.set_b(0); s.set_c(0);
	}
	return in;
}

double TrianglePrivate::Sum()
{
	return get_a() + get_b() + get_c();
}

double TrianglePrivate::Square() const
{
	double a = get_a();
	double b = get_b();
	double c = get_c();
	double S = 0;

	if (a == 0 || b == 0 || c == 0)
	{
		cout << "Square of triangle doesn't exists" << endl;
	}
	else
	{
		double p = (a + b + c) / 2;
		S = sqrt(p * (p - a) * (p - b) * (p - c));
	}
	return S;
}

void TrianglePrivate::Angle(double& A, double& B, double& C) const
{
	const double PI = atan(1) * 4;
	double a = get_a();
	double b = get_b();
	double c = get_c();

	double S = Square();

	if (a == 0 || b == 0 || c == 0)
	{
		cout << "Triangle doesn't exists" << endl;
	}
	else
	{
		double sinA = (S * 2) / (a * b);
		double x1 = asin(sinA);
		A = (x1 * 180) / PI;

		double sinB = (sinA * b) / c;
		double x2 = asin(sinB);
		B = (x2 * 180) / PI;

		C = 180 - (A + B);
	}
}
