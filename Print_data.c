//Program : Write a program to read and display the following table of data.

#include<stdio.h>
int main()
{
	int x,y;
	float p,q;
	printf("enter the codes of Fan and motor : ");
	scanf("%d %d",&x,&y);
	
	printf("enter the prices : \n");
	scanf("%f %f",&p,&q);
	
	printf("Name\t\tCode\t\tPrice\n");
	printf("Fan\t\t%d\t\t%.2f\n",x,p);
	printf("Motor\t\t%d\t\t%.2f",y,q);
	return 0;
}
