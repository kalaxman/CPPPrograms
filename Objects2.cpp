#include<iostream>
using namespace std;

class Line
{
	double length;
public:
	void setLength(double len);	
	double getLength();
	Line();
	~Line();
};

Line::Line(void)
{
	cout << "Object for class Line has been created" << endl;
}
Line::~Line(void)
{
	cout<<"Object has been deleted" <<endl;
}
double Line::getLength()
{
	return length;
}
void Line::setLength(double len)
{
	length=len;
}

int main()
{
	Line line;
	
	line.setLength(6.0);
	cout << "Length of line = "<< line.getLength()<< endl;
	return 0;
}
