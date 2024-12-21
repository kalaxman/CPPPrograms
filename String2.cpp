#include<iostream>
//#include<cstring>
#include<string.h> 
using namespace std;

int main()
{
	char name1[20]="Laxman";
	char name2[20]="Kanikaram";
	char name3[20];
	char fullname[20];
	int length;
	
	length=strlen(name1);
	cout<<"Length of name1 = "<<length<<endl;
	cout<<"Length of name2 = "<<strlen(name2)<<endl;
	strcat(name1,name2);
	cout<<"Length of fullname = "<<strlen(name1)<<endl;
	
	cout<<name1<<endl;
	cout<<name2<<endl;
	if(strcmp(name1,name2)==0)
		cout<< "Both strings are same"<<endl;
	else
		cout<< "Both strings are NOT same"<<endl;
	
	strcpy(name3,name2);
	cout<<name3<<endl;
	
	char country[]="United States of America";
	char *p;
	p=strchr(country,'i');
	while(p!=NULL)
	{
		cout<<"Found character at "<<p-country+1<<endl;
		p=strchr(p+1,'i');
	}
	
	char place[20];
	
	strncpy(place,name2,6);
	cout<<"After copying n number of characters = "<<place<<endl;
	
	return 0;
}
