//WRITE A PROGRAM IN C PROGRAMMING WHICH WILL ASK FOR AN AMOUNT FROM THE USER AND THEN
//WILL ALSO ASK FROM THE USER WHAT ARE THE TYPES OF NOTES THE USERS HAVE OF ANY THREE TYPES FOR THE AMOUNT TO PAY.
//FIND THE TOTAL NUMBER OF NOTES TO BE PAID FOR EACH INDIVIDUAL TYPES OF NOTES
//ALSO SHOW AT THE END WHETHER ANY AMOUNT IS STILL LEFT OR NOT.

#include<conio.h>
#include<stdio.h>
int main()
{
	int amount,still_left_over1=0,still_left_over2=0,still_left_over3=0;
	int total1=0,total2=0,total3=0;
	int type1,type2,type3;
	int amount1=0,amount2=0,amount3=0;
	printf("\nENTER YOUR AMOUNT:-");
	scanf("%d",&amount);
	
	printf("\nEnter the first type of notes which must be maximum:-");
	scanf("%d",&type1);
	
	printf("\nEnter the second type of notes which must be second maximum:-");
	scanf("%d",&type2);
	
	printf("\nEnter the third type of notes which must be least maximum:-");
	scanf("%d",&type3);
	
	if(amount>=type1)
	{
		total1=amount/type1;
		amount1=amount-total1*type1;
		still_left_over1=amount1;
		
		if(amount1>=type2)
		{
			total2=amount1/type2;
			amount2=amount1-type2*total2;
			still_left_over2=amount2;
			if(amount2>=type3)
			{
				total3=amount2/type3;
				amount3=amount2-type3*total3;
				still_left_over3=amount3;
				if(still_left_over3==0)
				printf("\nNO AMOUNT LEFT!!!");
				else
				printf("\nSTILL AMOUNT LEFT %d",still_left_over3);
				printf("\nTotal %d rupee notes:- %d",type1,total1);
				printf("\nTotal %d rupee notes:- %d",type2,total2);
				printf("\nTotal %d rupee notes:- %d",type3,total3);
			}
			else
			{
				if(amount2==0)
				printf("\nNO AMOUNT LEFT!!!");
				else
				printf("\nAMOUNT LEFT = %d",amount2);
				printf("\nTotal %d rupee notes:- %d",type1,total1);
				printf("\nTotal %d rupee notes:- %d",type2,total2);
				printf("\nTotal %d rupee notes:- %d",type3,total3);
			}
		}
		else if(amount1>=type3)
		{
			total3=amount1/type3;
			amount2=amount1-type3*total3;
			still_left_over2=amount2;
			
			if(still_left_over2==0)
				printf("\nNO AMOUNT LEFT!!!");
				else
				printf("\nSTILL AMOUNT LEFT %d",still_left_over2);
				printf("\nTotal %d rupee notes:- %d",type1,total1);
				printf("\nTotal %d rupee notes:- %d",type2,total2);
				printf("\nTotal %d rupee notes:- %d",type3,total3);
		}
		else
		{
			if(still_left_over1==0)
			printf("\nNO AMOUNT LEFT");
			else
			printf("\nAMOUNT STILL TO BE PAID IS %d",still_left_over1);
			printf("\nTotal %d rupee notes:- %d",type1,total1);
			printf("\nTotal %d rupee notes:- %d",type2,total2);
			printf("\nTotal %d rupee notes:- %d",type3,total3);
			
		}
	}
	else if(amount>=type2)
	{
		
		total2=amount/type2;
		amount1=amount-total2*type2;
		still_left_over1=amount1;
		
		if(amount1>=type3)
		{
			total3=amount1/type3;
			amount2=amount1-type3*total3;
			still_left_over2=amount2;
			if(still_left_over2==0)
				printf("\nNO AMOUNT LEFT!!!");
			else
				printf("\nSTILL AMOUNT LEFT %d",still_left_over2);
			printf("\nTotal %d rupee notes:- %d",type1,total1);
			printf("\nTotal %d rupee notes:- %d",type2,total2);
			printf("\nTotal %d rupee notes:- %d",type3,total3);	
		}
		else
		{
			
			if(still_left_over2==0)
				printf("\nNO AMOUNT LEFT!!!");
			else
				printf("\nSTILL AMOUNT LEFT %d",still_left_over2);
			printf("\nTotal %d rupee notes:- %d",type1,total1);
			printf("\nTotal %d rupee notes:- %d",type2,total2);
			printf("\nTotal %d rupee notes:- %d",type3,total3);
			
		}
	}
	else if(amount>=type3)
	{
		total3=amount/type3;
		amount1=amount-total3*type3;
		still_left_over1=amount1;
		if(still_left_over1==0)
				printf("\nNO AMOUNT LEFT!!!");
			else
				printf("\nSTILL AMOUNT LEFT %d",still_left_over1);
			printf("\nTotal %d rupee notes:- %d",type1,total1);
			printf("\nTotal %d rupee notes:- %d",type2,total2);
			printf("\nTotal %d rupee notes:- %d",type3,total3);
		
	}
	else
	{
		printf("\nYOU REQUIRED TO PAY = %d",amount);
		printf("\nSORRY YOU DON'T HAVE THE REQUIRED NOTES TO PAY THE AMOUNT!");
	}
	return 0;
}
