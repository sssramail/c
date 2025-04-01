#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{ 
	
/*	int i,j;
	int a = 0;
	int ar[6][9] = {{0,0,0,1,0,0,0,0,0},
					{0,0,0,0,0,0,0,2,0},
					{0,0,0,0,1,0,0,0,0},
					{0,2,0,1,0,0,1,0,0},
					{0,0,0,1,0,0,0,0,0},
					{0,0,1,0,0,0,1,0,0},
					};
					
	for (i = 0;i < 6;i++)
	{
		for (j = 0;j < 9;j++)
		{
			printf("%d",ar[i][j]);
			if (ar[i][j] == 1)
			{
				a = a + 1;
			}
		}
		printf("\n");
	}
					
	printf("배열에서 1은 총%d개 입니다.",a);*/
	
/*	int i,j;
	int a = 0;
	int ar[6][9] = {{0,0,0,1,0,0,0,0,0},
					{0,0,0,0,0,0,0,2,0},
					{0,0,0,0,1,0,0,0,0},
					{0,2,0,1,0,0,1,0,0},
					{0,0,0,1,0,0,0,0,0},
					{0,0,1,0,0,0,1,0,0},
					};
					
	for (i = 0;i < 6;i++)
	{
		for (j = 0;j < 9;j++)
		{
			if (ar[i][j] == 2)
			{
				printf("  2의 위치는:%d %d  \n",i,j);
				ar[i-1][j] = 5;
				ar[i+1][j] = 5;
				ar[i][j-1] = 5;
				ar[i][j+1] = 5;
			}
		}
	}
	
	for (i = 0;i < 6;i++)
	{
		for (j = 0;j < 9;j++)
		{
			printf("%d",ar[i][j]);
		}
		printf("\n");
	}*/
	
	int ar[6][6] = {0};
	int i,j;
	
	srand(time(NULL));
	
	for(i = 0;i<6;i++)
	{
		for(j = 0;j < 7;j++)
		{
			ar[i][j] = rand()%99+1;
		}
	}
	
	i = 0;
	while(i < 6)
	{
		j = 0;
		while(j < 7)
		{
			printf("%3d",ar[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	
	return 0;	
}
