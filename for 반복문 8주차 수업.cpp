#include <stdio.h>

int main() 
{
/*	int i;
	
	for (i = 0;i <= 10;i++)
	{
		printf("%d\n",i);
	}
	
	int n;
	
	for (n = -10;n <= -1;n++)
	{
		printf("n = %d\n",n);
	}
	
	printf("마지막 n = %d\n",n);
	for (n = 30;n>20;n--)
	{
		printf("n = %d\n",n);
	}
	printf("마지막 n = %d\n",n);
	
	
	for (int n = 0;n < 10;n++)
	{
		printf("n = %d\n",n);
	}
	
	printf("마지막 n = %d\n",n);
	
	int n=1;
	
	for (i = 1; i<=10;i++)
	{
		
		printf("%2d",n);
		n = n *-1;
	}
	
	int i;
	
	for (i=0;i<=10;i++)
	{
		printf("%2d",i%2);
	}
	
	int i;
	int n=1;
	
	for (i=0;i<=10;i++)
	{
		printf("%2d",n*i);
		n = n*-1;
	}
	
	int n=0;
	int r=0;
	int i=0;
	
	scanf("%d",&n);
	
	for (i=1;i<=n;i++ )
	{
		r = r + i;
	}
	printf("%d\n",r);*/
	
	int i;
	int n;
	int a = 0;
	int d = 100;
	
	for (n=1;n<=7;n++)
	{
		printf("정수입력:");
		scanf("%d",&i);
		
		if (i%2 != 0)
		{
			a = a + i;
			if (i < d )
			{
				d = i;
			}
		}
	}
	if (a == 0)
	{
		printf("-1");
	}
	else
	{
		printf("홀수의 합은 %d이다.......\n",a);
		printf("최솟값은 %d이다............",d);
	}
	
	
	
	return 0;	
}
