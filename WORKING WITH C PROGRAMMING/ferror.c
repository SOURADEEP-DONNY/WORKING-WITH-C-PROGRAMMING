#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *p;
	char q[50];
	p=fopen("Lost.txt","r");
	if(p==NULL)
	printf("\nUNABLE TO OPEN FILE");
	else
	{
		printf("\nFILE OPENED SUCCESSFULLY");
		fprintf(p,"%s",q);
		int status=ferror(p);
		printf("\n\n%d",status);
		if(status==0)
		printf("\n\n\nNO ERROR IN READING AND WRITING");
		else
		printf("\n\n\nERROR IN READING AND WRITING.");
	}
	fclose(p);
	getch();
	return 0;
}
