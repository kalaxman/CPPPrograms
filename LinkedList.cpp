#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

void printLL(struct node**);
void createLL(int,struct node**);
void addbeg(int,struct node **);
void addend(int,struct node **);
void addmid(int,int,struct node **);

struct node
{
	int empno;
	struct node *next;
};

void printLL(struct node** e2)
{
	printf("Inside printLL function\n");
	struct node *e3;
	e3=*e2;
	while(e3->next!=NULL)
	{
		printf("%d ",e3->empno);
		e3=e3->next;
	}
	printf("%d\n",e3->empno);
	printf("Exiting printLL function\n");
}

void createLL(int i,struct node** e2)
{
	printf("Inside createLL function\n");
	struct node *e1;
	int count=0;
	while(count<i)
	{
		e1 = (struct node*)malloc(sizeof(struct node));	
		if(e1!=NULL)
		{
			printf("Enter node element\n");
			scanf("%d",&e1->empno);
			e1->next=*e2;
			*e2=e1;
		}
		else
		{
			printf("Error occured in creating the node\n");
			exit(0);
		}
		count++;
	}
	printf("Exiting createLL function\n");	
}

void addbeg(int j,struct node **e2)
{
	struct node *e3;
	e3=(struct node*)malloc(sizeof(struct node));
	if(e3!=NULL)
	{
		e3->empno=j;
		e3->next=*e2;
		*e2=e3;		
	}
	else
	{
		printf("Error occured in adding node at the begining \n");
		exit(0);
	}

}

void addend(int k,struct node **e2)
{
	printf("Inside asddend function\n");
	struct node *e3,*e4;
	e4=*e2;
	e3=(struct node*)malloc(sizeof(struct node));
	if(e3!=NULL)
	{
		printf("Inside addend function if condition met \n");
		e3->empno=k;
		e3->next=NULL;
		while(e4->next!=NULL)
			e4=e4->next;
		e4->next=e3;
		e4=*e2;		
	}
	else
	{
		printf("Error occured in adding node at the begining \n");
		exit(0);
	}
	printf("Exiting asddend function\n");
}

void addmid(int index,int b,struct node **e2)
{
	struct node *e3,*e4,*e5,*e6;
	e4=*e2;
	e5=*e2;
	e6=*e2;
	int count=1;
	while(e6->next!=NULL)
	{
		count++;
		e6=e6->next;
	}
	printf("Number of elements in linked list = %d\n",count);
	e3=(struct node*)malloc(sizeof(struct node));
	e3->empno=b;
	if(e3!=NULL)
	{
		printf("Inside addmid function if condition met \n");
		if(index==1)
		{
			printf("Inside addmid function if condition index==1  \n");
			e3->next=e5;
			e5=*e2;
		}
		else if(index>=count)
		{
			addend(b,&e4);
		}
		else
		{
			printf("Inside addmid function if condition index!=1  \n");
				e4=e4->next;
			for(int k=2;k<index;k++)
			{
				printf("Inside addmid function if condition index!=1 for loop \n");
				e5=e5->next;
				e4=e4->next;
			}
				e3->next=e4;
				e5->next=e3;
				e5=*e2;		
		}
	}
	else
	{
		printf("Error occured in adding node at the begining \n");
		exit(0);
	}
	
}

int main()
{
	struct node *e1,*e2=NULL,*e3;
	int i;

	printf("How many nodes you want to create? \n");
	scanf("%d",&i);
	printf("Nodes to be created = %d\n",i);
	
	createLL(i,&e2);
	
	printLL(&e2);
	addbeg(20,&e2);
	printLL(&e2);
	addbeg(30,&e2);
	printLL(&e2);
	addbeg(40,&e2);
	printLL(&e2);
    addend(50,&e2);
	printLL(&e2);
	addmid(2,65,&e2);	
	printLL(&e2);
	addmid(10,77,&e2);	
	printLL(&e2);
	addmid(5,88,&e2);	
	printLL(&e2);	
	return 0;
}

