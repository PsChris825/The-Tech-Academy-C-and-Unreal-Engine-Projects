#include <string>
#include <iostream>
using namespace std;

class Dog {
public:
	string Breed;
	string Color;
	int Height;
	int Weight;
	string Behavior(string tricks);
	
};

string Dog::Behavior(string tricks)
{
	return tricks;
}

int main() {
	Dog myDog;

	myDog.Breed = "Hound";
	myDog.Color = "Brown";
	myDog.Height = 2;
	myDog.Weight = 60;
	
	cout << "Breed: " << myDog.Breed << "\n";
	cout << "Color: " << myDog.Color << "\n";
	cout << "Height: " << myDog.Height << " feet" << "\n";
	cout << "Weight: " << myDog.Weight << " lbs" << "\n";
	cout << "Behavior:\n" << myDog.Behavior("Shake,\nSit,\nLay Down");
	return 0;
}