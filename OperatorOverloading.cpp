#include<iostream>
using namespace std;

class Box
{
	double height,width,length;
	public:
		double getVolume(){
			return height*width*length;
		}
		void setHeight(double h){
			height=h;
		}
		void setWidth(double w){
			width=w;
		}
		void setLength(double len){
			length=len;
		}
		
		Box operator+(const Box&b)
		{
			Box box;
			box.length=this->length+b.length;
			box.height=this->height+b.height;
			box.width=this->width+b.width;
			return box;
		}
		
		bool operator<(const Box&b)
		{
			if(this->length<b.length)
				return true;
			else
				return false;
		}
	
};

int main()
{
	Box b1,b2,b3;

	b1.setHeight(6.0);
	b1.setLength(2.0);
	b1.setWidth(4.0);
	cout<< "Volume of b1 object "<<b1.getVolume()<<endl;

	b2.setHeight(2.0);
	b2.setLength(3.0);
	b2.setWidth(4.0);
	cout<< "Volume of b2 object "<<b2.getVolume()<<endl;

	b3=b1+b2;
	cout<< "Volume of b3 object "<<b3.getVolume()<<endl;

	if(b1<b2)
		cout<<"Object b1 is less than b2"<<endl;
	else
		cout<<"Object b1 is greater than b2"<<endl;
	
/*
	b3.setHeight(5.0);
	b3.setLength(7.0);
	b3.setWidth(9.0);
*/
	
	return 0;
}
