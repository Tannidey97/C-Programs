//program : Write a C program to input a currency value in dollars and display its equivalent Euro and INR amounts.


#include<stdio.h>
int main()
{
     int x;
     printf("enter the currency in dollars :");
     scanf("%d",&x);
     
     float EC = x*0.87;
     float IN = x*84;
     
     printf("the amount in Euro : %.2f\n",EC);
     printf("the amount in INR : %.2f\n",IN);
	
	return 0;
}
