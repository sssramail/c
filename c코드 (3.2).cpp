#include <stdio.h>

int main() 
{
/*	int a;
	double f1;
	char ch;
	
	a = 15;
	f1 = 123.456;
	ch = 'A';
	printf("%d\n",a);
	printf("%.3lf\n",f1);1
	printf("%c\n",ch);
	
	int a = 10;
	printf("%d\n",a);
	
	a = 20;
	printf("%d\n",a);
	
	int num;
	
	printf("숫자를 입력하라......... :");
	scanf("%d",&num);
	printf("%d",num);
	
	double eye_r;
	double eye_l;
	
	printf("양쪽 시력을 입력하라..................................:");
	scanf("%lf %lf",&eye_r,&eye_l);
	printf("오른쪽 시력 : %.1lf,왼쪽 시력 : %.1lf..........................",eye_r,eye_l);
	
	int c;
	int q;
	int qe;
	
	printf("학년,반,번호:");
	scanf("%d %d %d",&c,&q,&qe);
	printf("학년:%d\n",c);
	printf("반:%d\n",q);
	printf("번호:%d\n",qe);
	printf("%d학년 %d반 %d번 입니다",c,q,qe);
	
	double m;
	double c;
	
	printf("m를 입력하라........:");
	scanf("%lf",&m);
	c = m * 100.0;
	printf("%.0lfm는 %.0lfcm이다.......\n",m,c);
	printf("cm을 입력하라...........:");
	scanf("%lf",&c);
	m = c / 100.0;
	printf("%.0lfcm은 %.2lfm이다",c,m);
	
	int num1 , num2;
	
	printf("수를 쓰시오.:");
	scanf("%d %d",&num1,&num2);
	
	printf("%d + %d = %d\n",num1, num2, num1+num2);
	printf("%d - %d = %d\n",num1, num2, num1-num2);
	printf("%d x %d = %d\n",num1, num2, num1*num2);
	printf("%d / %d = %d ... %d\n",num1, num2, num1/num2, num1%num2);*/
	
	double num1,num2;
	
	printf("수를 쓰시오(실수):");
	scanf("%lf %lf",&num1,&num2);
	
	printf("%.2lf + %.2lf = %.2lf\n",num1,num2,num1+num2);
	printf("%.2lf - %.2lf = %.2lf\n",num1,num2,num1-num2);
	printf("%.2lf x %.2lf = %.2lf\n",num1,num2,num1*num2);
	printf("%.2lf / %.2lf = %.2lf\n",num1,num2,num1/num2); 
	
	return 0;
}
