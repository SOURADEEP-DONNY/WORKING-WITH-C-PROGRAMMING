#include<stdio.h>
#include<conio.h>
#include<time.h>
void display()
{
	printf("\nClock time of processor %u secs. \n",clock()/CLOCKS_PER_SEC);
}
int main()
{
	getch();
	display();
	getch();
	return 0;
	
}
