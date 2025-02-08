#include <stdio.h>

int main()
{
/*	int i;
	i = 1;
	
	while (i <= 10)
	{
		printf("%d",i);
		i++;
	}
	
	int n;
	n = 12;
	
	while (n <= 20)
	{
		printf("%d ",n);
		n++;
	} 
	
	int n;
	int sum;
	
	n = 10;
	sum = 0;
	while (n <= 17)
	{
		printf("%d ",n);
		sum = sum + n;
		n++;	
	}
	printf("\n%d ",sum);
	
	int i;
	
	i = 11;
	do
	{
		printf("%d ",i);
		i++;
	} while(i <= 10);
	
	int i = 1;
	int sum = 0;
	
	while (1)
	{
		printf("%d\n",i);
		sum += i;
		i++;
		if (sum >= 10000)
		{
			printf("\n%d ",sum);
			break;
		}
	}
	
	int i = 0;
	int sum = 0;
	
	while (1)
	{
		i++;	
		if (i % 2 == 0) continue;
		
		printf("%d\n",i);
		sum += i;
	
		if (sum >= 10000)
		{
			printf("\n%d ",sum);
			break;
		}
	}
	
	int n;
	int i = 1;
	
	scanf("%d",&n);
	
	while (n > 0)
	{
		printf("%d ",i);
		i = i * -1;
		n = n - 1;
	}
	
	int n;
	int i = 0;
	
	scanf("%d",&n);
	
	while (i < n )
	{
		i = i + 1;
		printf("%d ",i%2 );
	}
	
	int n;
	int i = 1;
	
	scanf("%d",&n);
	while (1)
	{
		while (i <= n)
		{
			printf("%d ",i);
			i++;
		}
		printf("\n");
		i = 1;
	}
	
	int n;
	int m;
	int i = 1;
	
	scanf("%d %d",&n,&m);
	
	while (m > 0)
	{
		printf("%d ",i);
		
		
		if (i == n)
		{
			printf("\n");
			i = 0;
			m = m - 1;
		}
		i++;
	}
	
	int n;
	int i = 1;
	int j = 1;
		
	scanf("%d",&n);
	
	while (1)
	{
		if (i > n)
		{
			break;
		}
		
		printf("%d",j);
		if (j == i)
		{
			printf("\n");
			j = 0;
			i++;
		}
		j++;
		
	}*/
	
	int n;
	int num = 0;
	
	scanf("%d",&n);
	
	while (n > 0)
	{
		num = n%10 + num * 10;
		n /= 10;
		
	}
	printf("%d",num);
	
	
	return 0;	
}
