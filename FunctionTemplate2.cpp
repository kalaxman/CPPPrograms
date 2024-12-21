#include<iostream>
using namespace std;

template <typename S>
S mul(S num1,S num2){
	return (num1*num2);
}
int main()
{
	int result1;
	float result2;
	
	result1 = mul<int>(5,6);
	cout<<"Result of int numbers = "<<result1<<endl;
	result2 = mul<float>(5.5,6.5);
	cout<<"Result of float numbers = "<<result2<<endl;
	
	return 0;
}
