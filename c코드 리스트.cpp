#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
/*	double helght[4];
	int j = 2;
	
	helght[0] = 145.7;
	helght[1] = 156.3;
	helght[j] = 147.89;
	j++;
	helght[j] = 159.4;
	printf("%.2lf\n",helght[0]);
	printf("%.2lf\n",helght[1]);
	printf("%.2lf\n",helght[2]);
	printf("%.2lf\n",helght[3]);
	
	int ar[10] = {10,20,30,40,50,60,70,80,90,100};
	int br[10];
	
	for (int a = 0;a <= 9;a++)
	{
		printf("%d ",ar[a]);	
	}
	
	int num[ ] = {5,2,6,7,8,9,4,3,1};
	int page[10] = {123,57,67,86};
	int i;
	
	for (i = 0;i < 9;i++)
	{
		printf("%d ",num[i]);
	}
	printf("\n");
	for (i = 0;i < 10;i++)
	{
		printf("%d ",page[i]);
	}
	
	char c;
	int i;
	long l;
	float f;
	double d;
	
	printf("%d %d %d %d %d \n",sizeof(c),sizeof(i),sizeof(l),sizeof(f),sizeof(d));
	printf("%d %d %d \n",sizeof(char),sizeof(int),sizeof(long));
	printf("%d %d \n",sizeof(float),sizeof(double));
	printf("%d %d \n",sizeof(153),sizeof(5.2));
	
	int ar[10];
	int br[ ] = {1,2,3,4,5};
	double dr[20];
	
	printf("%d %d %d",sizeof(ar),sizeof(br),sizeof(dr));
	
	int ar[10];
	int br[ ] = {1,2,3,4,5,6,7};
	double dr[20];
	
	for (int a = 0;a < sizeof(br)/sizeof(int);a++)
	{
		printf("%d ",br[a]);
	}*/
	
	srand((unsigned) time(NULL));
	
	int ar[10];
	int d = 0;
	
	for (int i = 0; i < 10;i++)
	{
		ar[i] = rand()%100;
		printf("%d ",ar[i]);
		d = d + ar[i];
	}
	printf("\n");
	printf("%d",d);
			
	return 0;	
}
