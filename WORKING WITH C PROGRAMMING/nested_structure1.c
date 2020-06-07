#include<stdio.h>
#include<conio.h>
struct location
{
	char street_name[200];
	int house_number;
};
struct donny
{
	char n[20];
	char pn[20];
	int dob;
	struct location call;
};
int main()
{
	struct donny ddr;
	strcpy(ddr.n,"DONNY");
	strcpy(ddr.pn,"ARUP DAS  SUKLA DAS");
	ddr.dob=27111997;
	strcpy(ddr.call.street_name,"BAGHA JATIN ROAD, TOBIN ROAD");
	ddr.call.house_number=28;
	
	printf("\nNAME:- %s",ddr.n);
	printf("\nPARENTS NAME:- %s",ddr.pn);
	printf("\nDATE OF BIRTH:- %d",ddr.dob);
	printf("\nSTREET NAME:- %s",ddr.call.street_name);
	printf("\nHOUSE NUMBER:- %d",ddr.call.house_number);
	
	return 0;
	getch();
	
}
