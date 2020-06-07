#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	char *p;
	p=(char *)malloc(sizeof(char));
	if(p==NULL)
	printf("\nUNABLE TO ALLOCATE MEMORY");
	else
	{
		printf("\nMEMEORY ALLOCATED SUCCESSFULLY");
		*p='a';
		printf("%c",*p);
	}
	free(p);
	getch();
	return 0;
}
