(b) Write a program to print following outputs using for loops : 

* * * * * * 
  * * * * *
    * * * *
      * * *
        * *
          *

#include <stdio.h>

int main()
{
    char n, r, m, y, e, g ;
    for(int i = 0; i<=5; i++)
    {
    	  g = '*' ;
    	  printf("%c\t", g);
    }
    printf("\n");
    
    	for(int j = 0; j<=5; j++)
    	{
    		m = '*' ;
    		printf("%c\t", m );
    	}
    	printf("\n");
    
    		for(int k = 0; k<=4; k++)
    		{
    			r = '*' ;
    			printf("%c\t", r);
    		}
    		printf("\n");
    		
    		for(int t = 0; t<=3; t++)
    			{
    				n = '*' ;
    				printf("%c\t", n);
    			}
    			printf("\n");
    				
    	   	for(int u = 0; u<=2; u++)
    				{
    					y = '*' ;
    					printf("%c\t", y);
    				}
    			printf("\n");
    			
    			for(int o = 1; o<=1 ; o++)
    			{
    				e = '*' ;
    				printf("%c", e);
    			}

    return 0;
    					
}
