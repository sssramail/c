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
	
	printf("���ڸ� �Է��϶�......... :");
	scanf("%d",&num);
	printf("%d",num);
	
	double eye_r;
	double eye_l;
	
	printf("���� �÷��� �Է��϶�..................................:");
	scanf("%lf %lf",&eye_r,&eye_l);
	printf("������ �÷� : %.1lf,���� �÷� : %.1lf..........................",eye_r,eye_l);
	
	int c;
	int q;
	int qe;
	
	printf("�г�,��,��ȣ:");
	scanf("%d %d %d",&c,&q,&qe);
	printf("�г�:%d\n",c);
	printf("��:%d\n",q);
	printf("��ȣ:%d\n",qe);
	printf("%d�г� %d�� %d�� �Դϴ�",c,q,qe);
	
	double m;
	double c;
	
	printf("m�� �Է��϶�........:");
	scanf("%lf",&m);
	c = m * 100.0;
	printf("%.0lfm�� %.0lfcm�̴�.......\n",m,c);
	printf("cm�� �Է��϶�...........:");
	scanf("%lf",&c);
	m = c / 100.0;
	printf("%.0lfcm�� %.2lfm�̴�",c,m);
	
	int num1 , num2;
	
	printf("���� ���ÿ�.:");
	scanf("%d %d",&num1,&num2);
	
	printf("%d + %d = %d\n",num1, num2, num1+num2);
	printf("%d - %d = %d\n",num1, num2, num1-num2);
	printf("%d x %d = %d\n",num1, num2, num1*num2);
	printf("%d / %d = %d ... %d\n",num1, num2, num1/num2, num1%num2);*/
	
	double num1,num2;
	
	printf("���� ���ÿ�(�Ǽ�):");
	scanf("%lf %lf",&num1,&num2);
	
	printf("%.2lf + %.2lf = %.2lf\n",num1,num2,num1+num2);
	printf("%.2lf - %.2lf = %.2lf\n",num1,num2,num1-num2);
	printf("%.2lf x %.2lf = %.2lf\n",num1,num2,num1*num2);
	printf("%.2lf / %.2lf = %.2lf\n",num1,num2,num1/num2); 
	
	return 0;
}
