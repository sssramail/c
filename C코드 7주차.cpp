#include <stdio.h>

int main()
{
/*	int num;
	
	printf("10000 �̸� ���� �Է�: ");
	scanf("%d",&num);
	
	if (num < 10)
	{
		printf("�� �ڸ� ��\n");
	}
	else if (num < 100)
	{
		printf("�� �ڸ� ��\n");
	}
	else if (num < 1000)
	{
		printf("�� �ڸ� ��\n");
	}
	else if (num < 10000)
	{
		printf("�� �ڸ� ��\n");
	}
	
	int a;
	
	scanf("%d", &a);
	
	if (a > 0)
	{
		printf("����Դϴ�.");
	}
	else if (a == 0)
	{
		printf("0�Դϴ�.");
	}
	else
	{
		printf("�����Դϴ�.");
	}
	
	int a;
	
	scanf("%d",&a);
	
	if (a%2 == 0)
	{
		printf("¦���Դϴ�.");
	}
	else
	{
		printf("Ȧ���Դϴ�.");
	}
	
	int a;
	
	scanf("%d",&a);
	
	if (a%3 == 0)
	{
		printf("3�� ����Դϴ�.");
	}
	else
	{
		printf("3�� ����� �ƴմϴ�.");
	}
	
	int a;
	int b;
	
	scanf("%d",&a);
	scanf("%d",&b);
	
	if (a > b)
	{
		if (a % b == 0)
		{
			printf("%d�� %d�� ������ ��������.",a,b);
		}
		else
		{
			printf("%d�� %d�� ������ �������� �ʴ´�.",a,b);
		}
	}
	else if (b > a)
	{
		if (b % a == 0)
		{
			printf("%d�� %d�� ������ ��������.",b,a);
		}
		else
		{
			printf("%d�� %d�� ������ �������� �ʴ´�.",b,a);
		}
	}
	else
	{
		printf("%d�� %d�� ����.",a,b);
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
		printf("2,3�� ������� �½��ϴ�.\n");
	}
	else
	{
		printf("2,3�� ������� �ƴմϴ�.\n");
	}
	
	int b;
	
	scanf("%d",&b);
	
	if (12%a == 0 && 30%a == 0)
	{
		printf("12,30�� ������� ���ϴ�.\n");
	}
	else
	{
		printf("12,30�� ������� �ƴմϴ�.\n");
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
	
	printf("������ n + %d\n",n);
	for (n=30;n>20;n--)
	{
		printf("n = %d\n",n);
	}
	printf("������ n + %d\n",n);
				
	return 0;
}
