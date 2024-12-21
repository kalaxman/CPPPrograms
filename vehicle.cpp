#include<iostream>
using namespace std;

class vehicle
{
	int sno;
	public:
		virtual void run()=0;
};

void vehicle::run()
{
	cout<<"Vehicel class run function is being called" <<endl;
}

class car:public vehicle
{
	int carNo;
	public:
		void run();	
};

void car::run()
{
	cout<<"car class run function is being called" <<endl;
}
class bike:public vehicle
{
	int bikeNo;
	public:
		void run();	
};

void bike::run()
{
	cout<<"bike class run function is being called" <<endl;
}

int main()
{
/*
	vehicle v1,*v2;
	v1.run();
	
	car c1;
	bike b1;
	
	v2=&c1;
	v2->run();
	v2=&b1;
	
	v2->run();
*/
	
	car c2;
	c2.run();
	
	bike b2;
	b2.run();

}
