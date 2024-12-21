#include<iostream>
using namespace std;

class vehicle 
{
public:
	int length;
};

int main()
{
	vehicle v1;
	v1.length=20;
	
	cout << "Vehocle length = "<< v1.length << endl;
}
