Write a program to print a table of values of the function 
Y = exp(-X).
  X varying from 0.0 to 9.0  in steps of 0.10.
  

#include<stdio.h>
#include<math.h>

int main()
{
	float X,Y;
	printf("x\t0.1\t0.2\t0.3\t0.4\t0.5\t0.6\t0.7\t0.8\t0.9\n");
	printf("____________________________________________________________\n");
	
	for(float i = 0; i<=9; i++)
	{
		X = i / 10 ;
			if(i==0)
			{
		       printf("%.1f\t", X);
			}
		  else   
		  {
	    	Y = exp(-X) ;
	    	printf("%.5f\t", Y);
		  }
	}
	printf("\n");
	
	for(float j = 10; j<=19; j++)
	{
		X = j/10 ;
			if(j==10)
			{
		       printf("%.1f\t", X);
			}
		  else     
		  {
    		Y = exp(-X) ;
	    	printf("%.5f\t", Y);
		  }
	}
	printf("\n");
	
	for(float k = 20; k<=29; k++)
	{
		X = k/10 ;
			if(k==20)
			{
		       printf("%.1f\t", X);
			}
		  else     
		  {
    		Y = exp(-X) ;
	    	printf("%.5f\t", Y);
		  }
	}
	printf("\n");
	
	for(float m = 30; m<=39; m++)
	{
		X = m/10 ;
			if(m==30)
			{
		       printf("%.1f\t", X);
			}
		  else     
		  {
    		Y = exp(-X) ;
	    	printf("%.5f\t", Y);
		  }
	}
	printf("\n");
	
	for(float n = 40; n<=49; n++)
	{
		X = n/10 ;
			if(n==40)
			{
		       printf("%.1f\t", X);
			}
		  else     
		  {
    		Y = exp(-X) ;
	    	printf("%.5f\t", Y);
		  }
	}
	printf("\n");
	
	for(float o = 50; o<=59; o++)
	{
		X = o/10 ;
			if(o==50)
			{
		       printf("%.1f\t", X);
			}
		  else     
		  {
    		Y = exp(-X) ;
	    	printf("%.5f\t", Y);
		  }
	}
	printf("\n");
	
	for(float t = 60; t<=69; t++)
	{
		X = t/10 ;
			if(t==60)
			{
		       printf("%.1f\t", X);
			}
		  else     
		  {
    		Y = exp(-X) ;
	    	printf("%.5f\t", Y);
		  }
	}
	printf("\n");
	
	for(float a = 70; a<=79; a++)
	{
		X = a/10 ;
			if(a==70)
			{
		       printf("%.1f\t", X);
			}
		  else     
		  {
    		Y = exp(-X) ;
	    	printf("%.5f\t", Y);
		  }
	}
	printf("\n");
	
	for(float v = 80; v<=89; v++)
	{
		X = v/10 ;
			if(v==80)
			{
		       printf("%.1f\t", X);
			}
		  else     
		  {
    		Y = exp(-X) ;
	    	printf("%.5f\t", Y);
		  }
	}
	printf("\n");
	
	for(float h = 90; h<=99; h++)
	{
		X = h/10 ;
			if(h==90)
			{
		       printf("%.1f\t", X);
			}
		  else     
		  {
    		Y = exp(-X) ;
	    	printf("%.5f\t", Y);
		  }
	}
	return 0 ;
}
