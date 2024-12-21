#include<iostream>
using namespace std;

template <class T>
class Calculator
{
	T num1,num2;
	
	public:
		Calculator(T n1,T n2)
		{
			num1 = n1;
			num2 = n2;
		}
	T add(){
		return (num1+num2);
	}
	T mul(){
		return (num1*num2);
	}
	T div(){
		return (num1/num2);
	}
	T subtract(){
		return (num1-num2);
	}
	void display()
	{
		cout<<"Numbers are "<<num1<<" and "<<num2<<endl;
		cout<<num1<<" + "<<num2<<" = "<<add()<<endl;
		cout<<num1<<" * "<<num2<<" = "<<mul()<<endl;
		cout<<num1<<" / "<<num2<<" = "<<div()<<endl;
		cout<<num1<<" - "<<num2<<" = "<<subtract()<<endl;
	}
};

int main()
{
	Calculator<int> intCalculator(2,3);
	Calculator<float> floatCalculator(5.5,6.5);
	
	cout<<"Int result"<<endl;
	intCalculator.display();
	cout<<"Float result"<<endl;
	floatCalculator.display();
		
	return 0;
}
