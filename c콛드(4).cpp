#include <stdio.h>

int main() 
{	
/*	printf("%d\n",10/3);
	printf("%d\n",10/3.0);
	print("%lf\n",10/3.0);
	
	int a = 20, b = 7;
	double f1 = 77.0, f2 = 7.0;
	
	printf("%d\n",a/b);
	printf("%lf\n",f1,b); 
	printf("%lf\n",a/f1);
	printf("%lf\n",f1/f2);
	
	int a,b,c;
	
	printf("정수 입력:");
	scanf("%d",&a);
	printf("정수 입력:");
	scanf("%d",&b);
	printf("%d\n",10%3);
	printf("%d\n",a%10);
	c = a%b;
	printf("%d\n",c);
	
	int w,h;
	double e;
	
	printf("정수 입력:");
	scanf("%d",&w);
	printf("정수 입력:");
	scanf("%d",&h);
	e = 1.0*w*h/2.0;
	printf("삼각형의 넓이는 %.1lf입니다",e);
	
	int c;
	double f;
	
	printf("정수 입력:");
	scanf("%d",c);
	f = c * 9/5.0 + 3
	printf("섭씨%d도는 화씨%.1lf입니다.",c,f);
	
	int a;
	int k;
	int e;
	
	printf("두자리수 입력:");
	scanf("%d",&a);
	k = a/10;
	e = a%10;
	a = k + e;
	printf("답은 %d이다",a);*/
	
	int a;
	int k;
	int e;
	int r;
	int n;
	
	printf("세자리수 입력:");
	scanf("%d",&a);
	k = a/100;
	e = a%100;
	r = e/10;
	n = k+r;
	printf("답은 %d이다",n);
	
	return 0;
}
