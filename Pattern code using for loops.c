1) Write a program to print following outputs using for loops : 
(a) 1                  
    2 2
    3 3 3
    4 4 4 4
    5 5 5 5 5


#include <stdio.h>

int main()
{
    int n, r, m, g ;
    for(int i = 1; i<=1; i++)
    {
    	  printf("%d\n", i);
    }
    	  
    	for(int j = 0; j<=1; j++)
    	{
    		m = 2 ;
    		printf("%d\t", m );
    	}
    	printf("\n");
    
    		for(int k = 0; k<=2; k++)
    		{
    			r = 3 ;
    			printf("%d\t", r);
    		}
    		printf("\n");
    		
    		for(int t = 0; t<=3; t++)
    			{
    				n = 4 ;
    				printf("%d\t", n);
    			}
    			printf("\n");
    				
    	   	for(int u = 0; u<=4; u++)
    				{
    					g = 5 ;
    					printf("%d\t", g);
    				}
        return 0;
    }
