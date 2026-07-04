Write a program to print S shape letter using for loop and if statement and using '*' character.
  
#include<stdio.h>

int main()
{
	char R = '*' ;
	for(int i = 0; i < 15; i++)
	{
		for(int j = 0; j< 18; j++)
		{
			if(i == 0 || i ==14 || i <= 7 && j == 0 || j == 17 && i >= 7 || i ==7)
			{
				printf("%c", R) ;
			}
			else
			{
				printf(" ") ;
			}
		}
		printf("\n") ;
	}
	return 0 ;
}
