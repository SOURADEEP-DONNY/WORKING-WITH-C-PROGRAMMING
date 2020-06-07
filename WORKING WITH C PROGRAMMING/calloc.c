#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
int main()
{
	int l;
	int *m;
	int i;
	m=(int *)calloc(l,sizeof(int));
	if(m==NULL)
	printf("\nUNABLE TO ALLOCATE MEMORY");
	else
	{
		
		printf("\nEnter length:-");
		scanf("%d",&l);
		for(i=0;i<l;i++)
		{
			printf("\nEnter marks for %d subject ",i+1);
			scanf("%d",&m[i]);
		}
		for(i=0;i<l;i++)
		{
			printf("\n%d",m[i]);
		}
	}
	free(m);
	getch();
	return 0;
}
