void sum(int a,int b)
{
	printf("%d + %d = %d\n",a,b,a+b);
}
void sub(int a,int b)
{
	if (a > b)
	{
		printf("%d - %d = %d\n",a,b,a-b);
	}
	if (b > a)
	{
		printf("%d - %d = %d\n",b,a,b-a);
	}
}
void mul(int a,int b)
{
	printf("%d X %d = %d\n",a,b,a*b);
}
void div(int a,int b)
{
	if (a > b)
	{
		printf("%d / %d = %d ... %d\n",a,b,a/b,a%b);
	}
	if (b > a)
	{
		printf("%d / %d = %d ... %d\n",b,a,b/a,b%a);
	}
}
