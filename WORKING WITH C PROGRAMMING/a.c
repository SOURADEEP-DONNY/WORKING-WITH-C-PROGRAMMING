#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	if(isprint(ch)==0)
	printf("Unable");
	else
	printf("Printable");
	getch();
	return 0;
}
