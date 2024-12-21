#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
	int empno;
	char ename[20];
};

int main()
{
	struct node *e1;
	
	e1 = (struct node*)malloc(sizeof(struct node));
	
	if(e1!=NULL)
	{
		e1->empno=1;
		strcpy(e1->ename,"Laxman");
	}
	
	printf("Emp No = %d\n",e1->empno);
	printf("Emp Name =%s\n",e1->ename);
	return 0;
}
