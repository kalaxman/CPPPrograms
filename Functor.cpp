#include<iostream>
using namespace std;

class Functor{
	public:
	void operator()(int x){
		cout<<"Functor called with the value:"<<x<<endl;
	}
};

int main()
{
	Functor functor;
	functor(10);
	functor(19);
}
