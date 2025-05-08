#include <stdio.h>
#include <conio.h>

int main()
{
/*	int n;
	
	scanf("%d",&n);
	printf("%d",n);*/
	
/*	int a,b,c;
	
	scanf("%d",&a);
	printf("a = %d\n",a);
	scanf("%d %d",&a,&b);
	printf("a = %d b = %d\n",a,b);
	scanf("%d %d %d",&a,&b,&c);
	printf("a = %d b = %d c = %d",a,b,c);*/
	
/*	char ch;
	
	scanf("%c",&ch);
	printf("%c %d",ch,ch);*/
	
/*	int a;
	char b;
	
	scanf("%d",&a);
	scanf("%c",&b);
	printf("%d %d",a,b);*/
	
/*	int a;
	char b;
	
	scanf("%d",&a);
	getchar();
	scanf("%c",&b);
	printf("%d %c",a,b);*/
	
/*	int a;
	char b,c;
	
	scanf("%d",&a);
	b = getchar();
	scanf("%c",&c);
	printf("%d %d %c",a,b,c);*/
	
/*	char str[20];
	
	scanf("%s",str);
	printf("%s",str);*/
	
/*	char s1[15],s2[15];
	
	scanf("%s",s1);
	printf("str1 = %s\n",s1);
	
	scanf("%s%s",s1,s2);
	printf("str1 = %s\n",s1);
	printf("str2 = %s\n",s2);*/
	
/*	char str[80];
	
	gets(str);
	printf("%s\n",str);
	puts(str);*/
	
/*	char ch;
	
	ch = _getche();
	printf("\nch = %d : %c\n",ch,ch);
	putchar(ch);*/
	
/*	int n = 0;
	
	while (1)
	{
		printf("%d\r",n);
		n++;
	}*/
	
/*	char ch;
	
	while(1)
	{
		scanf("%c",&ch);
		if (ch== '\n')
		{
			printf("\n场车嚼聪促.....");
			break;
		}
		printf("%c",ch);
	}*/
	
/*	char ch;
	
	while(1)
	{
		scanf("%c",&ch);
		if (ch == 10)
		{
			printf("\n场车嚼聪促.....");
			break;
		}
		printf("%c",ch);
	}*/
	
	char str[20];
	
	scanf("%s",str);
	
	for (int i = 0;str[i]!='\0';i++)
	{
		if (str[i]>='A' && str[i]<= 'Z')
		{
			printf("%c",str[i]);
		}
	}
	
	return 0;
}
