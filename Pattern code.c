Write a C program to display the following pattern 

       1
   1   2   1
1  2   3   2   1
   1   2   1
       1
#include<stdio.h>

int main()
{
  for(int i = 1; i <= 5; i++)
  {
    if(i<=3)
    {
      for(int j = 1; j <= 3-i; j++)
        printf("  ");
      for(int m = 1; m <= 2*i - 1; m++)   
        {
          if(m <= i)
          {
            printf("%d ", m);    
       	  }    
	       else    
	      {   
          printf("%d ", 2*i - m);    
	      }    
 	    }    
   }    
   else
    {
      for(int r = 1; r <= i-2; r++)    
    	{    
		     printf(" ");    
	    }  
     for(int k = 1; k <= 2*(6-i)-1; k++)
     {
        if(k <= 6-i)
           printf("%d ", k);
        else
           printf("%d ", 2*(6-i)-k);
     }
    }
    printf("\n");
  }
   return 0 ;
}
