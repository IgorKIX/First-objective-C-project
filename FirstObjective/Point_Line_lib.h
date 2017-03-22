#ifndef Point_Line.h
#define Point_Line.h
#include<iostream>
using namespace std;

class Point
{
	string name;
	float x, y;
public:
	Point(string = "A", float = 0, float = 0);
	void read();
};
#endif
