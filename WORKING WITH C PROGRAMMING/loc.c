#include<conio.h>
#include<stdio.h>
int main()
{
	struct tm *o;
	char a[100];
	time_t t;
	t=time(NULL);
	o=localtime(&t);
	strftime(a,100,"The time is %H:%M:%S \n You are in %Z zone",o);
	puts(a);
	getch();
	return 0;
}
