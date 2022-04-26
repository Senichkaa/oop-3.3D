//Source.cpp
#include "TrianglePrivate.h"
#include "TrianglePublic.h"
#include "Triad.h"

int main()
{
	TrianglePrivate A1(3, 4, 5), B1;
	TrianglePublic A2(5, 2, 5), B2;

	cout << "A1:" << A1 << endl;

	cin >> B1;
	cout << "B1:" << B1 << endl;

	cout << "A2:" << A2 << endl;

	cin >> B2;
	cout << "B2:" << B2 << endl << endl;



	cout << "++B1: " << ++B1 << endl;
	cout << "--B1: " << --B1 << endl;
	cout << "B1++: " << B1++ << endl;
	cout << "B1--: " << B1-- << endl << endl;

	cout << "++B2: " << ++B2 << endl;
	cout << "--B2: " << --B2 << endl;
	cout << "B2++: " << B2++ << endl;
	cout << "B2--: " << B2-- << endl << endl;

	cout << "Principle of substitution" << endl;
	Triad N = A2;
	cout << N << endl;

	double A = 0.0;
	double B = 0.0;
	double C = 0.0;

	cout << "Square: " << A1.Square() << endl;

	A1.Angle(A, B, C);
	cout << "Angle A = " << A << endl;
	cout << "Angle B = " << B << endl;
	cout << "Angle C = " << C << endl << endl;

	cout << "Square: " << A2.Square() << endl;

	A2.Angle(A, B, C);
	cout << "Angle A = " << A << endl;
	cout << "Angle B = " << B << endl;
	cout << "Angle C = " << C << endl << endl;

	cout << "Sum = " << B2.Sum() << endl;
}