#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void inc()
{
	extern int a;
	printf("\nFROM FUNCTION %d",a+=10);
}
int main()
{
	extern int a;
	printf("\nFROM MAIN %d",a);
	//inc();
	//inc();
	getch();
	return 0;
}
int a=10;
