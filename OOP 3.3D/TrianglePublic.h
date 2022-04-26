//TrianglePublic.h
#pragma once
#include "Triad.h"

class TrianglePublic : public Triad
{
public:
	TrianglePublic();
	TrianglePublic(const double a, const double b, const double c);
	TrianglePublic(const TrianglePublic& v);

	TrianglePublic& operator ++ ();
	TrianglePublic& operator -- ();
	TrianglePublic operator ++ (int);
	TrianglePublic operator -- (int);

	double Sum();
	double Square() const;
	void Angle(double& A, double& B, double& C);
};
