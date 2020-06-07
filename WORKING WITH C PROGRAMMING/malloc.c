#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	int *p;
	p=(int *)malloc(sizeof(int));
	if(p==NULL)
	printf("\nUNABLE TO ALLOCATE MEMORY");
	else
	{
		printf("\nMEMORY ALLOCATED SUCCESSFULLY");
		*p=20;
		printf("\n\n");
		printf("%d",*p);
	}
	free(p);
	printf("\n\nMEMORY EMPTIED SUCCESSFULLY");
	getch();
	return 0;
}
