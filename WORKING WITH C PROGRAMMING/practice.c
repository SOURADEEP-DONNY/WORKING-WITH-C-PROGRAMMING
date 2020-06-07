#include<conio.h>
#include<stdio.h>
int main()
{
	FILE *o;
	char a[25];
	printf("\nEnter a string");
	gets(a);
	o=fopen("Lost.txt","w");
	if(o==NULL)
	printf("\nUnable to open file");
	else
	{
		fputs(a,o);
		printf("\nFile written successfully.");
	}	
	getch();
	return 0;	
}
