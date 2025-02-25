#include <stdio.h>

int main()
{
	int i; // 받는 값 
	int r = 0; // 횟수 
	int s = 100; // 최소 값 
	int b = 0; // 최대 값  
	int p = 0; // 총합 
	double w; // 평균 
	
	while(1)
	{
		scanf("%d",&i); 
		
		if (i == -1)
		{
			printf("가장 작은 수:%d\n",s);
			printf("가장 큰 수:%d\n",b);
			printf("총합:%d\n",p);
			w = 1.0*p/r;
			printf("평균:%.1lf",w);
			break;
		}
		p = p + i;
		r = r + 1;
		
		if (i < s)
		{
			s = i;
		}
		if (i > b)
		{
			b = i;
		}
	}
	
	return 0;
}


