#include <stdio.h>

int main()
{
/*	int ar[5] = {10,20,30,40,50};
	
	for (int i = 0;i < 5;i++)
	{
		printf("배열의 이름 : %d\n",ar+i);
		printf("배열의 이름 : %d\n",&ar[i]);
	}*/
	
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
	
	int ar[ ] = {5,10,15,20,25,30,35,40,45,50}
	int *p = ar;
	int i;
	int len = sizeof(ar) / sizeof(ar[0]);
	
	for (i = 0;i < len;i++)
	{
		printf("%d %d\n",ar[i],*(ar+i));
	} 
	
	return 0;	
}
