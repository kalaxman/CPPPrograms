#include<iostream>
using namespace std;

class Shape{
	protected:
		int width;
		int height;
	public:
		void setWidth(int w);
		void setHeight(int h);
		Shape();
};
Shape::Shape(void)
{
	cout<<"Shape Object is created" << endl;
}
void Shape::setWidth(int w)
{
	width=w;
}
void Shape::setHeight(int h)
{
	height=h;
}

class PaintCost
{
	public:
		int getCost(int area)
		{
			return area*70;
		}
};

class Rectangle:public Shape,public PaintCost
{
	public:
		int getArea();
};

int Rectangle::getArea()
{
	return(width*height);
}
int main()
{
	Rectangle r;
	
	r.setHeight(5);
	r.setWidth(6);
	int area=r.getArea();	
	cout<<"Area = "<<r.getArea()<< endl;	
	cout<< "Cost ="<<r.getCost(area);
	return 0;
}
