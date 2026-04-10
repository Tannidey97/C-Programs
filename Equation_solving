//program : set of two linear equations with unknown x1 and x2 is given below.
ax1 + bx2 = m
cx1 + dx2 = n
The set has a unique solution 
       x1=(md-bn)/(ad-cb)
       x2=(na-mc)/(ad-cb)
provided denominator ad-cb is not equal to zero.
Write a program that will read the values of constants a, b, c, d, m, nand compute the values ofx1 and x2.An appropriate message should be printed if ad-cb=0.

#include<stdio.h>
int main()
{
	int a,b,c,d,m,n;
	float x1,x2;
	   
	printf("enter numbers :\n");
	scanf("%d %d %d %d %d %d",&a,&b, &c, &d, &m,&n);
	
	float jk = (a*d)-(c*b);
	float rm = (m*d)-(b*n);
	float V = (n*a)-(m*c);
			
			if(jk!=0)
			{
		     	x1=(rm/jk);
		     	x2=(V/jk);
	
			printf("the values are \n X1=%.3f\n X2 = %.3f\n",x1,x2);
			}
			if(jk==0)
			{
			printf("math can't be possible");
			}
	
	
	return 0;
}
	
