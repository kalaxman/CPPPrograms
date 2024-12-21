#include<iostream>
using namespace std;

class PrintData
{
public:
	void print(int i){
		cout<< "Printing function print with integer "<< i<< endl;
	}	
	void print(double f){
		cout<< "Printing function print with float "<<f << endl;
	}
	void print(char c){
		cout<< "Printing function print with Character n"<<c <<endl;
	}
};
int main()
{
	PrintData p;
	
	p.print('h');
	p.print(4.0);
	p.print(5);
	
	return 0;
}
