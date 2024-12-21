#include<iostream>
using namespace std;

class Vehicle
{
	string name;
	string color;
	string make;
	int year;

	public:
	Vehicle();
	void run();
	Vehicle(string,string,string,int);
};

Vehicle::Vehicle()
{
	cout<<"Default Constructor Called"<<endl;
}
Vehicle::Vehicle(string name,string color,string make,int year)
{
	this->name = name;
	this->color = color;
	this->make = make;
	this->year = year;
}

void Vehicle:: run()
{
	cout<<"Vehicle Name:"<<name<<endl;
	cout<<"Vehicle Color:"<<color<<endl;
	cout<<"Vehicle Make:"<<make<<endl;
	cout<<"Vehicle Year:"<<year<<endl;
	cout<<"Vehicle is running"<<endl;
}

int main()
{
	Vehicle v1("Car","White","Honda",2024);
	v1.run();
	return 0;
}