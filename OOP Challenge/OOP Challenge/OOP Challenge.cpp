#include <string>
#include <iostream>
using namespace std;

class Shape {
public:
	string color;
	int getArea(int area);
	
};

int Shape::getArea(int area)
{
	cout << area;
}

class Rectangle : public Shape
{
public:
	int Height;
	int Width;
};

class Triangle : public Shape
{
public:
	int Height;
	int Base;
};

class Circle : public Shape
{
public:
	int Radius;
};