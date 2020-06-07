#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *p;
	char ch[50];
	printf("\nEnter a string:-");
	scanf("%s",&ch);
	p=fopen("Doni.txt","w+");
	if(p==NULL)
	printf("\nUnable to open file");
	else
	{
		fprintf(p,"%s",ch);
		printf("\nFile opened successfully");
		fclose(p);
	}
	getch();
	return 0;
}
