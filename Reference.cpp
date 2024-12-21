#include<iostream>
using namespace std;

int main()
{
	int i,j;
	int& a=i, &b=j;
	//int& b=j;
	
	i=10;j=20;
	
	cout<<"Value of i="<<i<<" and j="<<j<<endl;
	cout<<"Value of a="<<a<<" and b="<<b<<endl;
	
	cout<<"Address of i="<<&i<<" and j="<<&j<<endl;
	cout<<"Address of a="<<&a<<" and b="<<&b<<endl;
	
	a=i;
	b=j;
	
	
		
	return 0;
}
