#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
/*	char c1 = 'A';
	char c2 = 'B';
	
	printf("%d\n",c1+c2);
	printf("%d\n",c1 > c2);
	printf("%d\n",c1 == 'A');
	printf("%d\n",'b' > c2);
	printf("%d\n",'a' - c2);*/
	
/*	char c;
	
	scanf("%c",&c);
	
	if (c >= 'A' && c <= 'Z')
	{
		printf("1");
	}
	else if (c >= 'a' && c <= 'z')
	{
		printf("0");
	}
	else
	{
		printf("-1");
	}*/
	
/*	char* sp1 = "C3coding";
	char* sp2 = "C3coding";
	
	printf("%d\n",sp1 == sp2);
	printf("%d\n",sp1 == "C3coding");
	printf("%d\n",sp2 == "C3coding");
	printf("%d\n","C3coding" == "C3coding");
	printf("%d\n",sp1 == "c3coding");
	
	printf("%d %d\n",sp1,"c3coding");
	printf("%d %d\n",sp2,"c3coding");*/
	
/*	char str1[ ] = "C3coding";
	char str2[10] = "C3coding";
	
	printf("%d\n",str1 == str2);
	printf("%d\n",str1 == "C3coding");
	printf("%d\n",str2 == "C3coding");
	printf("%d\n","C3coding" == "C3coding");
	printf("%d\n",str1 == "c3coding");*/
	
/*	char *sp = "C3coding";
	char str[] = "C3coding";
	int res;
	
	res = strcmp(sp,str);
	printf("%d\n",res);
	res = strcmp(sp,"C3coding");
	printf("%d\n",res);
	res = strcmp("C3coding","C3coding");
	printf("%d\n",res);
	
	res = strcmp("test","text");
	printf("%d\n",res);
	res = strcmp("text","test");
	printf("%d\n",res);*/
	
/*	char start[15] = "C3";
	char end[15] = "coding";
	int len;
	
	printf("start = %s %d\n",start,strlen(start));
	printf("end = %s %d\n",end,strlen(end));
	
	strcat(start,end);
	len = strlen(start);
	printf("%s %d\n",start,len);*/
	
/*	int* p;
	
	p = (int*)malloc(sizeof(int) * 5);
	
	for (int i = 0; i < 5;i++)
	{
		p[i] = i;
		printf("%d",p[i]);
	}
	printf("\n");
	
	for (int i = 0; i < 5;i++)
	{
		printf("%d", *p + i);
	}
	
	free(p);*/
	
	int ar[10] = {1,2,3,4,5,6,7,8,9,10};
	int i;
	int *pr;
	
	pr = (int*)malloc(sizeof(int) * 20);
	
	printf("%d %d %d\n",sizeof(pr),sizeof(pr[0]),sizeof(int));
	
	for (i = 0;i < 20;i++)
	{
		pr[i] = i + 1;
		printf("%d ",pr[i]);
	}
	
	
	free(pr);
		
	return 0;	
}
