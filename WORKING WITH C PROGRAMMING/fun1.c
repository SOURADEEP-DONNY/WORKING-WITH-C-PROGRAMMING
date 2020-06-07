#include<stdio.h>
#include<conio.h>
int cal(int,int);
int display();
int main()
{
	int a,b;
	printf("\nEnter a number:-");
	scanf("\n%d",&a);
	printf("\nEnter another number:-");
	scanf("\n%d",&b);
	cal(a,b);
	
	return 0;
	getch();
}
int cal(int a,int b)
{
	int c=a+b;
	printf("\nResult:-%d",&c);
	return 0;
}

