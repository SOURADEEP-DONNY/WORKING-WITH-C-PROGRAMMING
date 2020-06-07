#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<time.h>
int main()
{
	time_t start,end;
	char ch;
	start=time(NULL);
	printf("\nEnter a character:-");
	scanf("%c",&ch);
	if(islower(ch))
	printf("\n%c is a lowercase character ",ch);
	else 
	printf("\n%c is not a lowercase character ",ch);
	//if(isupper(ch));
	//printf("\n%c is a uppercase character ",ch);
	//else
	//{
	//printf("\n%c is not an uppercase character ",ch);}
	end=time(NULL);
	printf("\nElasped time %u",difftime(start,end));
}
