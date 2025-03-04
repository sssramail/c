#include <stdio.h>

/*int coco(int n)
{
	n = n + 5;
	return n;
}

int main()
{
	int n;
	int d = 0;
	
	scanf("%d",&n); 
	d = coco(n);
	printf("%d",d);
	
	return 0;
}*/

/*int coco(int n)
{
	int i = n;
	
	n = n + i;
	return n;
} 

int main()
{
	int n;
	int d = 0;
	
	scanf("%d",&n); 
	d = coco(n);
	printf("%d",d);
	
	return 0;
}*/

int coco(int n)
{
	int i;
	int r;
	
	for (i = 0;i >= n;i++)
	{
		if (i%2 == 0)
		{
			r = r + 1;
		}
		else
		{
			r = r - 1;
		}
	}
	return r;
}

int main()
{
	int n;
	int d = 0;
	
	scanf("%d",&n); 
	d = coco(n);
	printf("%d",d);
	
	return 0;
}

