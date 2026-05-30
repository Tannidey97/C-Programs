//A C program to input number of students, subjects and marks of subjects and then print the total marks and Grade.

#include<stdio.h>

int main()
{
	int n, m, roll, mark, total ;
	float grade ;
	printf("Enter the number of students and subjects : ");
	scanf("%d %d", &n, &m);
	
	 for(int i=0;i<n;i++)
	 {
	 	printf("Enter roll number :\n ");
	 	scanf("%d", &roll);
	 	total=0; 
	 	printf("\nEnter marks of roll %d :\n", roll);
	 	for(int j=0;j<m;j++)
	 	{
	 		scanf("%d", &mark);
	 		total = total + mark ;
	 	}
	 	printf("Total marks of student of roll %d number : %d\n", roll, total);
	 	if(total>=m*80)
	 		printf("First Class\n\n");
	 	else if(total>=m*60 && total<=m*80)
	 	    printf("Average\n\n");
	 	else
	 	    printf("Need to progress\n\n");
	 }
	 		
	 return 0 ;
}
