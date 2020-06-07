#include<stdio.h>
#include<conio.h>
struct donny
{
	char a[50];
	int l;
};void display(struct donny *ptr);
int main()
{
	struct donny doni;
	strcpy(doni.a,"I wish I was your lover");
	doni.l=strlen(doni.a);
	display(&doni);
	getch();
	return 0;
}
void display(struct donny *ptr)
{
	printf("%s", ptr->a );
	printf("\n\n");
	printf("%d", ptr->l );
	printf("5d", )
}
