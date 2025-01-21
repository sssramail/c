#include <stdio.h>

int main() 
{
/*	int i;
	int n;
	
	printf("±¸±¸´Ü:");
	scanf("%d",&i);
	
	for (n = 9;n >= 0;n--)
	{
		printf("%d X %d = %d\n",i,n,i*n);
	}*/
	
	double f;
	double n;
	
	scanf("%lf",&f);
	
	for (n=0.0;n<=f;n+=0.3)
	{
		printf("n = %.1lf\n",n);
	}
	
	
	return 0;	
}
