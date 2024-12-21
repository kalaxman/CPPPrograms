#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char name[6]={'H','e','l','l','o','\n'};
	
	cout << name <<endl;
	char name2[]="Laxman is a bad boy";
	char temp[]="bad";
	
	cout << name2 <<endl;
	char *hold;
	hold=strstr(name2,temp);
	
	if(hold)
	{
		cout << "String found" <<endl;
		cout << "First occurance of the string"<< temp << "in" << name2 << "is" << hold;
	}
	else
	{
		cout << "String not found" << endl;
	}
	
}
