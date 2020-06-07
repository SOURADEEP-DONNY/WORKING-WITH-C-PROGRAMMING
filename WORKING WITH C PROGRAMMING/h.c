#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *p;
	char a[50];
	p=fopen("Heartbreak.txt","w");
	if(p==NULL)
	printf("\nUnable to open a file.");
	else
	{
		printf("\nEnter anything:-");
		gets(a);
		fputs(a,p);
		printf("\nData written successfully");
	}
	fclose(p);
	return 0;
	getch();
}
