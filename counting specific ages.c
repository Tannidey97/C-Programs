/Write a program to read the age of 100 persons and count the number of persons in the age group 50 to 60. Use for and continue statement.  

#include<stdio.h>

int main()
{
	int n, count = 0 ;
	printf("Enter the ages : ");
	
	for(int i = 1; i<=100; i++)
	{  
	    scanf("%d", &n);
		if(n < 50 || n > 60)
		      continue ;
		    count ++ ;
		      
	}
		printf("Number of persons between 50 to 60 : %d", count);
	return 0;
}
