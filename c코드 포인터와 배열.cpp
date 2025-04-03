#include <stdio.h>

void PrintArray(int ar[]);
void InputData(int *p);
int GetMax(int *ar);
int GetMin(int *ar);

int main()
{
/*	int ar[5] = {10,20,30,40,50};
	
	for (int i = 0;i < 5;i++)
	{
		printf("배열의 이름 : %d\n",ar+i);
		printf("배열의 이름 : %d\n",&ar[i]);
	}
	*/
	
/*	int n, *p;
	
	p = &n;
	*p = 70;
	
	printf("%d %d",n,*p); */
	
/*	int ar[ ] = {11,21,31,41,51,61,71};
	int *p;
	
	p = ar;
	
	for (int i = 0;i < sizeof(ar) / sizeof(int);i++)
	{
		printf(" %d ",*(ar+i));
	}*/
	
/*	int ar[3] = {1,2,3};
	int ar2[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	
	printf("%d\n",ar);
	printf("%d\n",&ar[0]);
	
	printf("%d\n",ar2);
	printf("%d\n",&ar2[0][0]);*/
	
/*	int ar[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	int *p;
	int i;
	int len = sizeof(ar[0])/sizeof(ar[0][0]);
	
	for (i = 0;i < len;i++);
	{
		printf(" %d ",*(ar[1]+i));
	}
	printf("\n");
	
	p = ar[2];
	
	for (i = 0; i < len;i++)
	{
		printf(" %d ",*(p+i));
	}
	printf("\n");
	printf(" %d ",len);*/
	
/*	int ar[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	int len = sizeof(ar)/sizeof(int);
	int *p;
	
	p = ar[0];
	
	for (int i = 0;i < len;i++)
	{
		printf("%d ",*(p+i));
		if ((i+1)%4==0)
		{
			printf("\n");
		}	
	}*/
	
/*	char str[] = "Hello String";
	char name[20] = "씨큐브코딩";
	char *p,*q;
	
	p = str;
	q = name;
	
	printf("%d %d\n",str,name);
	printf("%s %s\n",str,name);*/
	
/*	char *sp = "Hello String";
	char *name = "씨큐브코딩";
	
	printf("%d %d\n",sp,"Hello String");
	printf("%d %d\n",name,"씨큐브코딩");
	printf("%s %s\n",sp,"Hello String");
	printf("%s %s\n",name,"씨큐브코딩");*/
	
	int ar[5] = {0};
	int max,min;
	
	InputData(ar);
	max = GetMax(ar);
	min = GetMin(ar);
	PrintArray(ar);
	printf("max = %d,min = %d",max,min);
	
	return 0;	
}

void PrintArray(int ar[])
{
	for (int i = 0;i < 5;i++)
	{
		printf("%d ",ar[i]);
	}
	printf("\n");
}
void InputData(int *p)
{
	for (int i = 0;i < 5;i++)
	{
		scanf("%d",p+i);
	}
}
int GetMax(int *ar)
{
	int a = 0;
	for (int i = 0;i < 5;i++)
	{
		if (a < *(ar+i))
		{
			a = *(ar+i);
		}
	}
	return a;
}
int GetMin(int *ar)
{
	int a = 11;
	for (int i = 0;i < 5;i++)
	{
		if (a > *(ar+i))
		{
			a = *(ar+i);
		}
	}
	return a;
}
