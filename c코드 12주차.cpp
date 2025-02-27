#include <stdio.h>
/*
void plus()
{
	int a = 3;
	int b = 2;
	
	printf("%d",a+b);
}

void plus(int num1, int num2)
{
	printf("%d\n",num1+num2);
}

int plus()
{
	int a,b;
	a = 3;
	b = 2;
	return a+b;
}

int plus(int num1,int num2)
{
	return num1+num2;
}

int plus(int num1)
{
	int result=0;
	{
		result = result + i;
	}
	return result;
}

int main()
{
	int n, result;
	scanf("%d",&n);

	result = plus(n);
	printf("%d",result);
	
	for (int i=1;i<=num1;i++)
	return 0;
}

void dirtn(int n)
{
	for (int i = 1;i <= n;i++)
	{
		if (n%i == 0)
		{
			printf("%d ",i);
		}
	}
}

int main()
{
	int n;
	
	scanf("%d",&n);
	dirtn(n);
	
	return 0;
}

int enlwlq(int n)
{
	int i = 0;
	while (1)
	{
		i += n%10;
		n /= 10;
		if (n == 0)
		{
			break;	
		}
		i *=10;
	}
	return i;
}

int main()
{
	int n;
	int num;
	
	scanf("%d",&n);
	num = enlwlq(n);
	
	printf("%d : %d",n,num);
	
	return 0;
}*/
int wjfeo(int n)
{
	if (n > 0)
	{
		return n;
	}
	else if (n == 0)
	{
		return n;
	}
	else 
	{
		n = n*-1;
		return n;
	}
}
int main()
{
	int n;
	int num;
	
	scanf("%d",&n);
	num = wjfeo(n);
	printf("%d",num);
	
	return 0;
}
