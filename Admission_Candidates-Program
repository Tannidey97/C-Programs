//Admission to a professional course to the following conditions :
a)Marsk in Mathematics >= 60
b)Marks in Physics >= 50
c)Marks in Chemistry >= 40
d)Total in all subjects >= 200
Or
Total in Mathematics and Physics >= 150
Given the marks in three subjects, write a program to process the application 
to list the eligible candidates.


#include<stdio.h>
int main()
{
	int n, M, P, C;
	int count = 0;
	printf("Enter the list of students : ");
	scanf("%d",&n);
	
	printf("Enter the marks of Math,Physics and Chemistry : \n");
	for(int i=0;i<n;i++)
	{
		scanf("%d %d %d",&M,&P,&C);
		if(((M>=60 && P>=50 && C>=40)||(M+P+C)>=200)||(M+P)>=150)
		{
	   	printf("The student is eligible.\n");
		             count++;
		}
	     else
	     {
		   printf("Student is not eligible\n");
	     }
	}
	printf("the number of eligible students are : %d",count);
	return 0;
}
		   
		     
