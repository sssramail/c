#include <stdio.h>

int main()
{
/*	int num;
	
	printf("10000 미만 정수 입력: ");
	scanf("%d",&num);
	
	if (num < 10)
	{
		printf("한 자리 수\n");
	}
	else if (num < 100)
	{
		printf("두 자리 수\n");
	}
	else if (num < 1000)
	{
		printf("세 자리 수\n");
	}
	else if (num < 10000)
	{
		printf("네 자리 수\n");
	}
	
	int a;
	
	scanf("%d", &a);
	
	if (a > 0)
	{
		printf("양수입니다.");
	}
	else if (a == 0)
	{
		printf("0입니다.");
	}
	else
	{
		printf("음수입니다.");
	}
	
	int a;
	
	scanf("%d",&a);
	
	if (a%2 == 0)
	{
		printf("짝수입니다.");
	}
	else
	{
		printf("홀수입니다.");
	}
	
	int a;
	
	scanf("%d",&a);
	
	if (a%3 == 0)
	{
		printf("3의 배수입니다.");
	}
	else
	{
		printf("3의 배수가 아닙니다.");
	}
	
	int a;
	int b;
	
	scanf("%d",&a);
	scanf("%d",&b);
	
	if (a > b)
	{
		if (a % b == 0)
		{
			printf("%d는 %d롤 나누어 떨어진다.",a,b);
		}
		else
		{
			printf("%d는 %d로 나누어 떨어지지 않는다.",a,b);
		}
	}
	else if (b > a)
	{
		if (b % a == 0)
		{
			printf("%d는 %d롤 나누어 떨어진다.",b,a);
		}
		else
		{
			printf("%d는 %d로 나누어 떨어지지 않는다.",b,a);
		}
	}
	else
	{
		printf("%d와 %d는 같다.",a,b);
	}
	
	double a;
	
	scanf("%lf",&a);
	
	if (a<0)
	{
		a = a * -1;
	}
	
	printf("%lf",a);
	
	int a;
	
	scanf("%d",&a);
	
	if (a%2 == 0 && a%3 == 0)
	{
		printf("2,3의 공배수가 맞습니다.\n");
	}
	else
	{
		printf("2,3의 공배수가 아닙니다.\n");
	}
	
	int b;
	
	scanf("%d",&b);
	
	if (12%a == 0 && 30%a == 0)
	{
		printf("12,30의 공약수가 습니다.\n");
	}
	else
	{
		printf("12,30의 공약수가 아닙니다.\n");
	}
	
	int a;
	int b;
	
	scanf("%d",&a);
	scanf("%d",&b);
	
	if (a%2 == 0 && b%2 == 0)
	{
		printf("%d X %d = %d",a,b,a*b);
	}
	else if (a%2 != 0 && b%2 != 0)
	{
		printf("%d + %d = %d",a,b,a+b);
	}
	else if (a > b)
	{
		if (a%2 != 0)
		{
			printf("%d - %d = %d",a,b,a-b);
		}
		else
		{
			printf("%d - %d = %d",b,a,b-a);
		}
	}
	else if (b > a)
	{
		if (b%2 != 0)
		{
			printf("%d - %d = %d",b,a,b-a);
		}
		else
			printf("
		{%d - %d = %d",a,b,a-b);
		}
	}
	
	int i;
	
	for (i = 1; i<=10; i++)
	{
		printf("%d\n",i);
	}
	
	int i;
	
	for (i = 1; i<=10; i+=2)
	{
		printf("%d\n",i);
	}
	
	int i;
	
	for (i = 2; i<=10; i++)
	{
		printf("%d\n",i);
	}
	
	int i;
	
	for (i = 1; i<=20; i++)
	{
		printf("%d\n",i);
	}*/
	
	int n;
	
	for (n=-10;n <= -1; n++)
	{
		printf("n = %d\n",n);
	}
	
	printf("마지막 n + %d\n",n);
	for (n=30;n>20;n--)
	{
		printf("n = %d\n",n);
	}
	printf("마지막 n + %d\n",n);
				
	return 0;
}
