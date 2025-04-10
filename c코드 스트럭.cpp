#include <stdio.h>
#include <string.h>

/*struct Coordi
{
	int x;
	int y;
};*/

/*struct Circle
{
	int x;
	int y;
	double r;
};*/

/*struct Person
{
	char name[10];
	int age;
	double height;
};*/

/*struct Circle
{
	int x;
	int y;
	double r;
	double l;
	double s; 
};*/

/*struct Coordi
{
	int x;
	int y;
};

struct Circle
{
	struct Coordi cen;
	double r;
};*/

struct Person
{
	char name[10];
	int age;
	double height;
};

int main()
{
/*	struct Coordi p1;
	struct Coordi p2 = {5,9};
	struct Coordi p3;
	struct Coordi p4;
	
	p1.x = 2;
	p1.y = 3;
	
	printf("p1의 좌표(%d , %d)\n",p1.x,p1.y);
	printf("p2의 좌표(%d , %d)",p2.x,p2.y);*/
	
/*	struct Circle c1,c3,c4;
	struct Circle c2 = {3,8,5.8};
	
	c1.x = 7;
	c1.y = 3;
	c1.r = 6.2;
	scanf("%d %d %lf",&c4.x,&c4.y,&c4.r);
	
	printf("c1의 x값과 y값과 r값은 %d %d %.2lf입니다.\n",c1.x,c1.y,c1.r);
	printf("c2의 x값과 y값과 r값은 %d %d %.2lf입니다.\n",c2.x,c2.y,c2.r);
	printf("c2의 x값과 y값과 r값은 %d %d %.2lf입니다.",c4.x,c4.y,c4.r);*/
	
/*	struct Person m1;
	struct Person m2 = {"허난설헌",13,159.9};
	
	strcpy(m1.name,"허균");
	m1.age = 19;
	m1.height = 168.34;
	
	printf("%s %d %.2lf\n",m1.name,m1.age,m1.height);
	printf("%s %d %.2lf",m2.name,m2.age,m2.height);*/
	
/*	struct Circle c;
	
	scanf("%lf",&c.r);
	c.l = 2*c.r*3.14;
	c.s = c.r*c.r*3.14;
	
	printf("%.2lf %.4lf %.4lf",c.r,c.l,c.s);*/
	
/*	struct Circle c1;
	struct Circle c2 = {{4,5},12.4};
	struct Circle c3;
	
	scanf("%lf %d %d",&c3.r,&c3.cen.x,&c3.cen.y);
	c1.r = 6.34;
	c1.cen.x = 13;
	c1.cen.y = 24;
	
	printf("c1의 r은 %.2lf cen.x은 %d cen.y는 %d\n",c1.r,c1.cen.x,c1.cen.y);
	printf("c2의 r은 %.2lf cen.x은 %d cen.y는 %d\n",c2.r,c2.cen.x,c2.cen.y);
	printf("c3의 r은 %.2lf cen.x은 %d cen.y는 %d",c3.r,c3.cen.x,c3.cen.y);*/
	
	struct Person list[5] = {{"김유신",15,178.3},{"김춘추",13,173.3},{"사다암",17,183.2},{"원효",19,168.9},{"장보고",13,187.3}};
	
	for (int i = 0;i < 5;i++)
	{
		printf("이름:%s,나이:%d,키:%.2lf\n",list[i].name,list[i].age,list[i].height);
	}
	
	return 0;	
}
