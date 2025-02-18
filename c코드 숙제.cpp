#include <stdio.h>

int main()
{
	int n;
	int i;
	int r;
	int s = 100;
	int b = 0;
	int p = 0;
	double w;
	
	printf("정수 입력:");
	scanf("%d",&n);
	r = n;
	
	while(1)
	{
		scanf("%d",&i);
		p = p + i;
		if (i < s)
		{
			s = i;
		}
		if (i > b)
		{
			b = i;
		}
		n = n - 1;
		if (n <= 0)
		{
			printf("가장 작은 수:%d\n",s);
			printf("가장 큰 수:%d\n",b);
			printf("총합:%d\n",p);
			w = p/r;
			printf("평균:%.1lf",w);
			break;
		}
	}
	
	
	return 0;
}


