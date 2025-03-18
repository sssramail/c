#include <stdio.h>

int main()
{
	/*char ch1,ch2;
	
	ch1 = 'A';
	ch2 = 'a';
	printf("%c %c\n",ch1,ch2);
	printf("%d %d\n",ch1,ch2);
	
	printf("%c %c\n",66,98);
	printf("%d %d\n",66,98);
	
	char ch1,ch2;
	
	ch1 = 'A';
	ch2 = 'a';
	
	ch1 = ch2 - ch1;
	
	printf("%d %c\n",ch1); 
	
	char ch;
	
	printf("문자를 입력하세요:");
	scanf("%c",&ch);
	printf("%c %d\n",ch, ch); */
	
	char ch;
	
	printf("문장을 ㅁㅇ 입력하시오:");
	ch = getchar();
	putchar(ch);
	printf("%c %d\n",ch,ch);
	
	return 0;	
}
