#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <cmath>

using namespace std;

class Vector {
private:
	double x;
	double y;
	double x1;
	double y1;
	double x2;
	double y2;
public:
	Vector();
	~Vector();
	void setVector(double, double, double, double);
	double mod();
	void getZero();
	void getEnd();
	void getVector();
	void add(Vector);
	void deduct(Vector);
	void mulK(double);
};

#endif
