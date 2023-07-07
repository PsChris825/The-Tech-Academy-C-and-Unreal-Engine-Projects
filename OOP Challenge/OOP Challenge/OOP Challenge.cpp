#include <string>
#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
	string color;
	void getArea();
	
};


int main()
{
	class Rectangle : public Shape
	{
	public:
		int Height;
		int Width;


		void getArea()
		{
			int Area = Height * Width;
			cout << Area;
			return;
		}
	};

	class Triangle : public Shape
	{
	public:
		int Height;
		int Base;

		void getArea()
		{
			int Area = Height * Base;
			cout << Area;
		}
	};

	class Circle : public Shape
	{
	public:
		int Radius;

		void getArea()
		{
			int Area = Radius * Radius * 3.14;
			cout << Area;
		}
	};

	
}