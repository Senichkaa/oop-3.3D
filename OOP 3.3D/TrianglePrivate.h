//TrianglePrivate.h
#pragma once
#include "Triad.h"

class TrianglePrivate : private Triad
{
public:
	using Triad::set_a;
	using Triad::set_b;
	using Triad::set_c;

	using Triad::get_a;
	using Triad::get_b;
	using Triad::get_c;

	using Triad::Triad;

	TrianglePrivate();
	TrianglePrivate(const double a, const double b, const double c);
	TrianglePrivate(const TrianglePrivate& s);

	TrianglePrivate& operator =(const TrianglePrivate& s);
	operator string() const;

	friend ostream& operator << (ostream& out, const TrianglePrivate& s);
	friend istream& operator >> (istream& in,  TrianglePrivate& s);

	TrianglePrivate& operator ++ ();
	TrianglePrivate& operator -- ();
	TrianglePrivate operator ++ (int);
	TrianglePrivate operator -- (int);


	double Sum();
	double Square() const;
	void Angle(double& A, double& B, double& C) const;
};