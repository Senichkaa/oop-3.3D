//TrianglePublic.cpp
#include "TrianglePublic.h"

TrianglePublic::TrianglePublic()
	:Triad()
{
}

TrianglePublic::TrianglePublic(const double A, const double B, const double C)
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

TrianglePublic::TrianglePublic(const TrianglePublic& v)
	:Triad(v)
{
}

TrianglePublic& TrianglePublic::operator++()
{
	this->set_a(this->get_a() + 1);
	return *this;
}

TrianglePublic& TrianglePublic::operator--()
{
	this->set_a(this->get_a() - 1);
	return *this;
}

TrianglePublic TrianglePublic::operator++(int)
{
	TrianglePublic a(*this);
	this->set_a(this->get_a() + 1);
	return a;
}

TrianglePublic TrianglePublic::operator--(int)
{
	TrianglePublic a(*this);
	this->set_a(this->get_a() - 1);
	return a;
}

double TrianglePublic::Sum()
{
	return get_a() + get_b() + get_c();
}

double TrianglePublic::Square() const
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

void TrianglePublic::Angle(double& A, double& B, double& C)
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
