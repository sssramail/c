#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
/*
	int a = 20;
	
	a = a + 10;
	printf("a = %d\n",a);
	a = a * 10;
	printf("a = %d\n",a);
	a = a - 10;
	printf("a = %d\n",a);
	a = a / 10;
	printf("a = %d\n",a);
	
	int a,b;
	
	a = 20;
	b = 5;
	
	a += b;
	printf("a = %d\n",a);
	a *= b;
	printf("a = %d\n",a);
	a -= b;
	printf("a = %d\n",a);
	a /= b;
	printf("a = %d\n",a);
	a %= b;
	printf("a = %d\n",a);
	
	int a = 10;
	
	a++;
	a++;
	printf("a = %d\n",a);
	++a;
	++a;
	printf("a = %d\n",a);
	a--;
	printf("a = %d\n",a);
	--a;
	printf("a = %d\n",a);
	
	int num1 = 10;
	int num2 = 20;
	
	int num3 = ++num1 + num2++;
	
	printf("num1 = %d\n",num1);
	printf("num2 = %d\n",num2);
	printf("num3 = %d\n",num3);
	
	int a = 20;
	
	a += 4;
	printf("a = %d\n",a);
	a /= 2;
	printf("a = %d\n",a);
	a -= 1;
	printf("a = %d\n",a);
	a *= 11;
	printf("a = %d\n",a);
	
	int a = 10;
	int b = 2;
	
	a -= b;
	printf("a = %d\n",a);
	a *= b;
	printf("a = %d\n",a);
	--a;
	printf("a = %d\n",a);
	a %= b;
	printf("a = %d\n",a);
	a += b;
	printf("a = %d\n",a);
	++a;
	printf("a = %d\n",a);
	a /= b;
	printf("a = %d\n",a);
	
	int a,b;
	
	a = 10;
	b = a++;
	printf("a = %d b = %d\n",a,b);
	b = ++a;
	printf("a = %d b = %d\n",a,b);
	
	
	a = 20;
	b = a--;
	printf("a = %d b = %d\n",a,b);
	b = --a;
	printf("a = %d b = %d\n",a,b);
	
	int num = 3;
	
	printf("%d\n",num -= 1);
	printf("%d\n",--num);
	printf("%d\n",num--);
	printf("%d\n",num);
	
	int a = 12;
	int b = 3;
	
	a -= b++;
	printf("a = %d b = %d\n",a,b);
	a = --b;
	printf("a = %d b = %d\n",a,b);
	a += b++;
	printf("a = %d b = %d\n",a,b);
	a /= b++;
	printf("a = %d b = %d\n",a,b);
	a = b--;
	printf("a = %d b = %d\n",a,b);
	
	if(1)
	{
		printf("True\t��\n");
		printf("��\t�¾�\n");
	}
	else
	{
		printf("False\t����\n");
		printf("�ƴ�\t�ƴϾ�\n");
	}
	
	int a,b;
	
	a = 12;
	b = 56;
	
	if (a > b)
	{
		pritnf("%d�� %d���� ũ��.\n",a,b);
	}
	else
	{
		printf("%d�� %d���� ũ�� �ʴ�.\n",a,b);
	}
	
	int a,b,c;
	
	a = 12;
	b = 56;
	c = a > b;
	
	if (c)
	{
		printf("%d�� %d���� ũ��.\n",a,b);
	}
	else
	{
		printf("%d�� %d���� ũ�� �ʴ�.\n",a,b);
	}
	
	srand(time(NULL));
	
	int rnd = rand() % 1024;
	printf("%d\n",rnd); 
	
	if (rnd > 200)
	{
		printf("���ǽ�1 ����");
	}
	if (rnd > 400)
	{
		printf("���ǽ�2 ����");
	}
	if (rnd > 600)
	{
		printf("���ǽ�3 ����");
	}
	if (rnd > 800)
	{
		printf("���ǽ�4 ����");
	}
	
	srand(time(NULL));
	
	int rnd = rand() % 1024;
	printf("%d\n",rnd); 
	
	if (rnd > 200)
	{
		printf("���ǽ�1 ����	");
	}
	else
	{
		printf("���ǽ�2 ����	");
	}
	if (rnd > 600)
	{
		printf("���ǽ�3 ����	");
	}
	else
	{
		printf("���ǽ�4 ����	");
	}
	
	srand(time(NULL));
	
	int rnd = rand() % 1024;
	printf("%d\n",rnd); 
	
	if (rnd > 200)
	{
		printf("���ǽ�1 ����	");
	}
	else if (rnd > 400)
	{
		printf("���ǽ�2 ����	");
	}
	else if (rnd > 600)
	{
		printf("���ǽ�3 ����	");
	}
	else if (rnd > 800)
	{
		printf("���ǽ�4 ����	");
	}*/
	
	int num;
	
	printf("10000 �̸� ���� �Է�");
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
	
	return 0;
}
