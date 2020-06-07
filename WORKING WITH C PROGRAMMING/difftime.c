#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	time_t start,end;
	start=time(NULL);
	for(i=0;i<1000002000;i++)
	{
	end=time(NULL);}
	printf("\nExecution time %f ",difftime(end,start));
	getch();
	return 0;
}
