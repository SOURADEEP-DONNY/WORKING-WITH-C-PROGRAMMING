#include<stdio.h>
#include<conio.h>
int main()
{
	struct Person
	{
		int age;
		char name[6];
		float w;
	}p;
	union Student
	{
		int age;
		char name[6];
		float k;
	}q;
	printf("%d\n", sizeof p);
	printf("%d\n", sizeof q);
	printf("%d\n", sizeof(struct Person));
	printf("%d\n", sizeof(union Student));
	getch();
	return 0;
}
