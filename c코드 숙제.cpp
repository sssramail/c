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
	
	printf("���� �Է�:");
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
			printf("���� ���� ��:%d\n",s);
			printf("���� ū ��:%d\n",b);
			printf("����:%d\n",p);
			w = p/r;
			printf("���:%.1lf",w);
			break;
		}
	}
	
	
	return 0;
}


