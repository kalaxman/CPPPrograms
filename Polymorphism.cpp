#include<iostream>
using namespace std;

class Shape
{
protected:
int height,width;
public:
	Shape(int a=0,int b=0){
		height=a;
		width=b;
	}
	
	virtual int area()=0; // pure virtual function
	/*
	virtual int area(){
		cout<< "Parent class area = "<<height*width<<endl;
		return height*width;
	}
	*/	
};

class Rectangle:public Shape
{
	public:
	Rectangle(int a=0,int b=0):Shape(a,b){
	}
	int area(){
		cout<<"Area of Rectangle = "<<height*width<<endl;
		return height*width;
	}
	
};

class Triangle:public Shape
{
	public:
	Triangle(int a=0,int b=0):Shape(a,b){
	}	
	int area(){
		cout<<"Area of Triangle = "<<height*width/2<<endl;
		return (height*width/2);	
	}
};

int main()
{
	Shape *s;
	Rectangle r(3.0,4.0);
	Triangle t(2.0,3.0);
	
	r.area();
	t.area();
	
	cout<<"Assignning rectangle to Shape"<<endl;
	s=&r;
	s->area();
	
	cout<<"Assignning triangle to Shape"<<endl;
	s=&t;
	s->area();
			
	return 0;
}
