// A C program to input the total percentage of marks of a student and display its division using rules:
(a)80=> - First Division 
(b)60=> - Second Division 
(c)60< - Third Division 

#include<stdio.h>
int main()
{
	float a, b;
	printf("Enter the total percentage of marks :");
	scanf("%f", &a);
	
	if(a>=80)
	{
	    printf("First Division");
	}
	else if(a>=60 && a<80)
	{
	    printf("Second Division");
	}
	else if(a<60)
	 {
	 	printf("Third Division");
	 }
	 return 0;
}
