#include<stdio.h>
#include<conio.h>
void addition();
void subtraction(int,int);
int division();
int module(int,int);
int menu();
void main()
{
	int c,x,y,div;
	char yn;
	clrscr();
	do
	{
	c=menu();
	switch(c)
	{
	case 1:
		addition();
		break;
	case 2:
		printf("\n enter two values:");
		scanf("%d%d",&x,&y);
		subtraction(x,y);
		break;
	case 3:
		div=division();
		printf("division is %d:",div);
		break;
	case 4:
		printf("enter 2 value:");
		scanf("%d %d",&x,&y);
		module(x,y);
		printf("modulus of %d & %d is %d",x,y,div);
		break;
	case 5:
		exit(0);
	default:
		printf("invalid choice");
	}
	printf("\n\n\t do you want to continue?(yes=Y/y,no=N/n)");
	flushall();
	scanf("%c",yn);
	}while(yn=='Y'||yn=='y');
	getch();
}
	int menu()
	{
		int choose;
		printf("\nmenu");
		printf("\n\n 1. addition\n\t2.subtraction\n\t3.division\n\t4.modulas\n\t5.exit\n\n");
		printf("enter your choise");
		scanf("%d",&choose);
		return choose;
	}
	void addition()
	{
		int x,y;
		scanf("%d %d",&x,&y);
		printf("\n addition of %d & %d is %d",x,y,x+y);
	}
	void subtraction(int x,int y)
	{
		printf("\n subtraction of %d & %d is %d",x,y,x-y);
	}
	int division()
	{
		int x,y;
		scanf("%d %d",&x,&y);
		return(x/y);
	}
	int module(int x, int y)
	{
		return(x%y);
	}


