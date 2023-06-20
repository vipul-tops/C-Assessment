#include<stdio.h>
#include <stdlib.h>
void main()
{
	int n,q,amount,total_amount=0;
	char add;
	
	printf("\n\n-----------Menu----------\n");
	printf(" 1. Pizza       Price = 180pcs\n");
	printf(" 2. Burger      Price = 100pcs\n");
	printf(" 3. Dosaa       Price = 120pcs\n");
	printf(" 4. Idli        Price = 50pcs");
	
	
	
	do
	{
		printf("\nPlease Enter Your Choice : ");
		scanf("%d",&n);
		
		if(n==1)
		{
			printf("\nYou have selected Pizza");
			printf("\n\nPlease Enter Your Quentity : ");
			scanf("%d",&q);
			amount=180*q;
			printf("Amount : %d",amount);
		}
		else if(n==2)
		{
			printf("\nYou have selected Burger");
			printf("\n\nPlease Enter Your Quentity : ");
			scanf("%d",&q);
			amount=100*q;
			printf("Amount : %d",amount);
		}
		else if(n==3)
		{
			printf("\nYou have selected Dosa");
			printf("\n\nPlease Enter Your Quentity : ");
			scanf("%d",&q);
			amount=120*q;
			printf("Amount : %d",amount);
		}
		else if(n==4)
		{
			printf("\nYou have selected Idli");
			printf("\n\nPlease Enter Your Quentity : ");
			scanf("%d",&q);
			amount=50*q;
			printf("Amount : %d",amount);
		}
		else
		{
			printf("Invalid Inputs");
		}
		total_amount= total_amount + amount;
		
		printf("\n\nTotal Amount : %d",total_amount);
		
		printf("\n\nDo you want to place more Order (y/n): ");
		add = getch();
		
	}
	while(add == 'y' || add == 'Y');
	
	printf("\n\nTotal Amount : %d",total_amount);
	
	printf("\n\n\tThank You!!!");

}
