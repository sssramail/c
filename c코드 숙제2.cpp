#include <stdio.h>

int main()
{
	int i; // �޴� �� 
	int r = 0; // Ƚ�� 
	int s = 100; // �ּ� �� 
	int b = 0; // �ִ� ��  
	int p = 0; // ���� 
	double w; // ��� 
	
	while(1)
	{
		scanf("%d",&i); 
		
		if (i == -1)
		{
			printf("���� ���� ��:%d\n",s);
			printf("���� ū ��:%d\n",b);
			printf("����:%d\n",p);
			w = 1.0*p/r;
			printf("���:%.1lf",w);
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


