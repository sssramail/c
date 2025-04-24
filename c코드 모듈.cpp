#include <stdio.h>
#define MAX 10
#define PI 3.141592
#define C3C "씨큐브코딩"
#define PRN printf
#define MACRO "## 매크로상수##\n"
#define SUM(n,m) ((n)+(m))
#define SUB(s,b) ((s)-(b))

/*void Printfun1(int m,int n);
void Printfun2(int m,int n);*/

/*int ga;
int gb;

void Sum();
void Difference();*/

/*void Ccube();
void Coding();*/

int main()
{
/*	int a,b;
	
	a = 12;
	b = 20;
	printf("a = %d,b = %d\n",a,b); //a = 12 b = 20
	
	{
		int a,c;
		
		a = 30;
		c = 50;
		printf("a = %d,b = %d,c = %d\n",a,b,c);//a = 30 b = 20 c = 50
		
		a = 90;
		b = 45;
		c = 75;
	}
	
	printf("a = %d,b = %d\n",a,b);//a = 12 b = 45*/
	
/*	int m,n;
	
	m = 10;
	n = 30;
	
	printf("main before : m = %d n = %d\n",m,n);
	Printfun1(m,n);
	printf("main after : m = %d n = %d\n",m,n);*/
	
/*	printf("정수를 2개 입력하세요:");
	scanf("%d %d",&ga,&gb);
	Sum();
	Difference();*/
	
/*	Ccube();
	Ccube();
	Ccube();
	Coding();
	Coding();
	Coding();*/
	
	PRN(MACRO);
	PRN("MAX = %d\n",MAX);
	PRN("PI = %lf\n",PI);
	PRN("C3C = %s\n",C3C);
	PRN("%d\n",SUM(3,8));
	PRN("%lf\n",SUM(3.6,8.34));
	PRN("%d\n",SUB(13,5));
	PRN("%lf\n",SUB(4.2,3.4));
	
	return 0;	
}

/*void Printfun1(int m,int n)
{
	printf("fun1 before : m = %d n = %d\n",m,n);
	m = m + 50;
	n = n * 10;
	Printfun2(m,n);
	printf("fun1 after : m = %d n = %d\n",m,n);
}
void Printfun2(int m,int n)
{
	printf("fun2 before : m = %d n = %d\n",m,n);
	m = m + 50;
	n = n * 10;
	printf("fun2 after : m = %d n = %d\n",m,n);
}*/

/*void Sum()
{
	printf("%d + %d = %d\n",ga,gb,ga+gb);
}

void Difference()
{
	int biff;
	
	if(ga > gb)
	{
		biff = ga - gb;
		printf("%d - %d = ",ga,gb);
	}
	else
	{
		biff = gb - ga;
		printf("%d - %d = ",gb,ga);
	}
	printf("%d",biff);
}*/

/*void Ccube()
{
	int cnt = 0;
	
	cnt++;
	printf("%d 씨큐브\n",cnt);
}

void Coding()
{
	static int cnt = 0;
	
	cnt++;
	printf("%d 코딩\n",cnt);
}*/
