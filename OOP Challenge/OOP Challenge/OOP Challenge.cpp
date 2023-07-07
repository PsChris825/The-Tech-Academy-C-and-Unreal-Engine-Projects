#include <string>
#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    string color;
    virtual void getArea() = 0;
};

class Rectangle : public Shape {
public:
    int Height;
    int Width;

    void getArea() override {
        int Area = Height * Width;
        cout << Area << "\n";
    }
};

class Triangle : public Shape {
public:
    int Height;
    int Base;

    void getArea() override {
        int Area = (Height * Base) / 2;
        cout << Area << "\n";
    }
};

class Circle : public Shape {
public:
    int Radius;

    void getArea() override {
        double Area = 3.14 * pow(Radius, 2);
        cout << Area << "\n";
    }
};

int main() {
    Rectangle rectangle;
    rectangle.Height = 5;
    rectangle.Width = 10;
    rectangle.getArea();

    Triangle triangle;
    triangle.Height = 4;
    triangle.Base = 6;
    triangle.getArea();

    Circle circle;
    circle.Radius = 3;
    circle.getArea();

    return 0;
}

	
