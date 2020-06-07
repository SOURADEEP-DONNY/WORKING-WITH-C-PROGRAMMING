#include<conio.h>
#include<stdio.h>
int main()
{
	time_t t;
	struct tm *o;
	char a[100];
	t=time(NULL);
	puts(ctime(&t));
	o=gmtime(&t);
	strftime(a,100,"The gmtime is %H hour %M minutes %S seconds\n %Z zone",o);
	puts(a);
	getch();
	return 0; 
}
