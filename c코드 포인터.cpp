#include <stdio.h>

void add(int* num1,int* num2);

void addnum(int *a,int *b);
void subnum(int *a,int *b);
void nulnum(int *a,int *b);
void divnum(int *a,int *b);

int main()
{
/*	int a;
	
	printf("���� �Է�:");
	scanf("%d",&a); // &�� '�ּҰ�'�̴�. 
	
	printf("%d",a);*/
	
/*	int a; //int,double,char�� '����'�̶�� �Ѵ�. 
	double b;
	char c;
	
	a = 153; b = 12.7; c = 'j';*/
	
/*	int a;
	double b;
	char c;
	
	a = 153; b = 12.7; c = 'j';
	printf("���� a�� �ּ�:%d\n",&a);
	printf("���� b�� �ּ�:%d\n",&b);
	printf("���� c�� �ּ�:%d\n",&c);*/
	
/*	int m;
	
	printf("%d\n",45);
	printf("%d\n",'A');
	printf("%d\n","Coding");
	printf("%d\n","�˰���");
	printf("%d\n",&m);*/
	
/*	char ch = 'A';
	char *pch;
	pch = &ch;
	
	printf("%p\n",pch);
	printf("%c\n",*pch);*/
	
/*	int number1 = 5;
	int number2 = 10;
	
	add(number1,number2);
	
	printf("number1 = %d\n",number1);
	printf("number2 = %d\n",number2);*/
	
/*	int number1 = 5;
	int number2 = 10;
	
	add(&number1,&number2);
	
	printf("number1 = %d\n",number1);
	printf("number2 = %d\n",number2);*/
	
/*	int a;	double b;	char c;
	int *pa; double *pb; char *pc;
	
	a = 153; b = 12.7; c = 'j';
	pa = &a; pb = &b; pc = &c;
	printf("pa = %x pb = %x pc = %x\n",pa,pb,pc);
	printf("&a = %d &b = %d &c = %d\n",pa,pb,pc);
	
	printf("a = %d b = %lf c = %c\n",a,b,c);
	printf("*pa = %d *pb = %lf *pc = %c\n",*pa,*pb,*pc);*/
	
/*	int n;
	int *pn,*pr;
	int ar[10] = {10,20,30,40,50,60,70,80,90,100};
	
	n = 49;
	pn = &n;
	pr = &ar[2];
	printf("%d %d %p %p\n",n,ar[2],pn,pr);
	
	*pn = 59;
	*pr = 33;
	printf("%d %d\n",*pn,*pr);*/
	
/*	int a,b;
	int add,sub,mul,div;
	int *pa,*pb;
	
	pa = &a;
	pb = &b;
	
	a = 30;
	b = 55;
	add = *pa + *pb;
	printf("add = %d\n",add);
	
	*pa = 9;
	*pb = 7;
	sub = *pa - *pb;
	printf("sub = %d\n",sub);
	
	*pa = 12;
	*pb = 3;
	mul = *pa * *pb;
	printf("mul = %d\n",mul);
	
	a = 45;
	*pb = 5;
	div = *pa / *pb;
	printf("div = %d",div);*/
	
/*	double f1,f2,f3;
	double *p1,*p2,*p3;
	
	p1 = &f1;
	p2 = &f2;
	p3 = &f3;
	
	printf("�Ǽ� �Է�:");
	scanf("%lf", &f1);
	printf("�Ǽ� �Է�:");
	scanf("%lf", &f2);
	f3 = *p1 + *p2;
	printf("%lf + %lf = %lf\n",f1,f2,f3);
	printf("�Ǽ� �Է�:");
	scanf("%lf",p1);
	printf("�Ǽ� �Է�:");
	scanf("%lf",p2);
	*p3 = f1-f2;
	printf("%lf - %lf = %lf\n",*p1,*p2,*p3);
	
	printf("�Ǽ� 2�� �Է�:");
	scanf("%lf %lf",p1,&f2);
	*p3 = f1 * *p2;
	printf("%lf * %lf = %lf\n",f1,*p2,f3);*/
	
	int a,b;
	int *pa = &a,*pb = &b;
	
	printf("���� �Է�:");
	scanf("%d %d",pa,pb);
	
	addnum(pa,pb);
	subnum(pa,pb);
	nulnum(pa,pb);
	divnum(pa,pb);
	
	return 0;	
}

/*void add(int* num1,int* num2)
{
	*num1 = *num1+10;
	*num2 = *num2+10;
}*/

void addnum(int *num1,int *num2)
{
	int i = *num1 + *num2;
	printf("%d + %d = %d\n",num1,num2,i);
}
void subnum(int *nun1,int *num2)
{
	int i = *num1 - *num2;
	printf("%d - %d = %d\n",num1,num2,i);
}
void nulnum(int *num1,int *num2)
{
	int i = *num1 - *num2;
	printf("%d * %d = %d\n",num1,num2,i);
}
void divnum(int *num1,int *num2)
{
	int i = *num1 / *num2;
	int j = *num1 % *num2;
	printf("%d / %d = %d ... %d",num1,num2,i,j);
}
