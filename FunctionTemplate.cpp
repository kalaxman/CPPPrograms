#include<iostream>
using namespace std;


template<typename T>
T add(T num1,T num2)
{
	return (num1+num2);
}
int main()
{
	int result1;
	float result2;
	
	result1 = add<int>(5,6);
	cout<<"Result of int numbers = "<<result1<<endl;
	result2 = add<float>(5.5,6.5);
	cout<<"Result of float numbers = "<<result2<<endl;
	
	return 0;
}
