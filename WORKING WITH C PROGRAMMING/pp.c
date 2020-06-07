#include<stdio.h>
#include<conio.h>
int main()
{
	char c;
	scanf("%ch",&c);
	if(iscntrl(c)==0)
	printf("\nUnable to control");
	else
	printf("\nControlable variable");
	getch();
	return 0;
}
