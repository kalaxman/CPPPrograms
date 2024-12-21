#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> vec;
	cout<< "Size of Vector " << vec.size()<<endl;
	
	for(int i=0;i<5;i++)
	vec.push_back(i);
	
	cout<< "Size of Vector post resize " << vec.size()<<endl;
	
//	vector<int>::iterator v = vec.begin();
	vector<int>::iterator v = vec.begin();
	
//	while(v!=vec.end())
	while(v!=vec.end())
	{
		cout<<"Value of v = "<< *v<<endl;
		cout<<"Address of v = "<< v<<endl;
		v++;
	}
	
	return 0;
}
