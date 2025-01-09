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
		printf("True\t참\n");
		printf("응\t맞아\n");
	}
	else
	{
		printf("False\t거짓\n");
		printf("아니\t아니야\n");
	}
	
	int a,b;
	
	a = 12;
	b = 56;
	
	if (a > b)
	{
		pritnf("%d는 %d보다 크다.\n",a,b);
	}
	else
	{
		printf("%d는 %d보다 크지 않다.\n",a,b);
	}
	
	int a,b,c;
	
	a = 12;
	b = 56;
	c = a > b;
	
	if (c)
	{
		printf("%d는 %d보다 크다.\n",a,b);
	}
	else
	{
		printf("%d는 %d보다 크지 않다.\n",a,b);
	}
	
	srand(time(NULL));
	
	int rnd = rand() % 1024;
	printf("%d\n",rnd); 
	
	if (rnd > 200)
	{
		printf("조건식1 실행");
	}
	if (rnd > 400)
	{
		printf("조건식2 실행");
	}
	if (rnd > 600)
	{
		printf("조건식3 실행");
	}
	if (rnd > 800)
	{
		printf("조건식4 실행");
	}
	
	srand(time(NULL));
	
	int rnd = rand() % 1024;
	printf("%d\n",rnd); 
	
	if (rnd > 200)
	{
		printf("조건식1 실행	");
	}
	else
	{
		printf("조건식2 실행	");
	}
	if (rnd > 600)
	{
		printf("조건식3 실행	");
	}
	else
	{
		printf("조건식4 실행	");
	}
	
	srand(time(NULL));
	
	int rnd = rand() % 1024;
	printf("%d\n",rnd); 
	
	if (rnd > 200)
	{
		printf("조건식1 실행	");
	}
	else if (rnd > 400)
	{
		printf("조건식2 실행	");
	}
	else if (rnd > 600)
	{
		printf("조건식3 실행	");
	}
	else if (rnd > 800)
	{
		printf("조건식4 실행	");
	}*/
	
	int num;
	
	printf("10000 미만 정수 입력");
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
		printf("세 자리 수\n");
	}
	
	return 0;
}
