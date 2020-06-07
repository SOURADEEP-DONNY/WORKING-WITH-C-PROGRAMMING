#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	int l;
	int i;
	char *a;
	a=(char *)calloc(a,50);
	if(a==NULL)
	printf("\nUNABLE TO ALLOCATE MEMORY");
	else
	{
		printf("\nMEMORY ALLOCATED SUCCESSFULLY");
		printf("\nEnter any string:-");
		scanf("%s",a);
		l=strlen(a);
	}
		printf("%s",*a);
		printf("\nLENGTH=%d",l);
	free(a);
	return 0;
	getch();
}
