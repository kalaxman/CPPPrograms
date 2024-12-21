#include<iostream>
using namespace std;

class Functor1{
	public:
	void operator()(int x){
		cout<<"Functor called with the value:"<<x<<endl;
	}
};

int main()
{
	Functor1 functor;
	functor(10);
	functor(19);
}
