//A cloth showroom has announced the following seasonal
discounts on purchase of items.
Purchase  Mill    Handloom 
amount    cloth    items
(0-100)    -       5%
(101-200)  5%      7.5%
(201-300)  7.5%    10.0%
above>300  10.0%   15.0%
Write a program using switch and if statements to compute the amount 
to be paid by a customer.

#include<stdio.h>

int main()
{
	int n,m;
	printf("enter the amount : ");
	scanf("%d",&n);
	
	printf("enter the type(1 & 2) :");
	scanf("%d",&m);
	
	
	switch(n/100)
	{
	case 0 :
   	if(m==1)
	   printf("discount : 0");
	   else
	   printf("discount :%d",5);
	   break;
   case 1 :
      if(m==1)
      printf("discount : %d",5);
      else
      printf("discount : %.1f",7.5);
      break;
   case 2 :
	      if(m==1)
	        printf("discount : %d",7.5);
	      else
	         printf("discount : %.1f",10.0);
	      break;
	 default :
	      if(m==1)
	      printf("discount :%.1f",10.0);
	      else
	      printf("discount : %.1f",15.0);
	      break;
	}
	return 0;
}
