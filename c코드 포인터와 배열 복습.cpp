#include <stdio.h>

void PrintArray(int ar[]);
void InputData(int *p);
int GetMax(int *ar);
int GetMin(int *ar);


int main()
{
	int ar[5] = {0};
	int max,min;
	
	InputData(ar);
	max = GetMax(ar);
	min = GetMin(ar);
	PrintArray(ar);
	printf("max = %d,min = %d",max,min);
	
	return 0;
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
