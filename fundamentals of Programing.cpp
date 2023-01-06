//Create menu driven calculator using function

#include<stdio.h>

float add(float a,float b);
float sub(float a,float b);
float multi(float a,float b);
float div(float a,float b);

int main()
{
		float a,b,ans=0;
		int num;
		
	printf("----------------------Menu-----------------------");
	printf("\n\n\t 1. Addition \n\t 2. Substraction \n\t 3. Multiplication \n\t 4. Division \n");

	printf("\n Enter Your Choice : ");
	scanf("%d",&num);
	
	printf("\n Enter Value of A : ");
	scanf("%f",&a);
	printf("\n Enter Value of B : ");
	scanf("%f",&b);
	switch(num)
	{
		case 1:
			printf("\n Addition");
			ans= add(a,b);
			printf("\n %.f + %.f = %.2f",a,b,ans);
			break;
		case 2:
			printf("\n Substraction");
			ans= sub(a,b);
			printf("\n %.f - %.f = %.2f",a,b,ans);
			break;
		case 3:
			printf("\n Multiplication");
			ans= multi(a,b);
			printf("\n %.f * %.f = %.2f",a,b,ans);
			break;
		case 4:
			printf("\n Division");
			ans=div(a,b);
			printf("\n %.f / %.f = %.2f",a,b,ans);
			break;
		default:
			printf("invalid Inputs");
	}
	return 0;
}
float add(float a,float b)
{
	return a+b;
}
float sub(float a,float b)
{
	return a-b;
}
float multi(float a,float b)
{
	return a*b;
}
float div(float a,float b)
{
	return a/b;
}
