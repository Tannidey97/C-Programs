// Take input in radians and represent the trigonometric type

#include<stdio.h>
#include<math.h>

int main()
{
	double x ;
	char m ;
	printf("Enter a value(in radian) :\n");
	scanf("%lf", &x);
	
	printf("Enter a character :\n ");
	scanf("   %c", &m);
	
	if(m=='s' || m=='S')
	{
		printf("sin(x) : %lf", sin(x));
	}
	else if(m=='c' || m=='C')
	{
		printf("cos(x) : %lf",cos(x));
	}
	else if(m=='t' || m=='T')
	{
		printf("tan(x) : %lf", tan(x));
	}
	return 0;
}
