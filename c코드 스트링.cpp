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
	
	// �ƽ�Ű �ڵ� �����̽��� 32 
	printf("a%cb%cc",32,32);
	
	char ch1,ch2;
	
	ch1 = 'A';
	ch2 = 'a';
	
	printf("%c %c\n",ch1,ch2);
	
	ch1 = 97;
	ch2 = 65;
	
	printf("%c %c\n",ch1,ch2);
	
	char ch1,ch2;
	
	ch1 = 'A';
	ch2 = 'a';
	
	printf("%c %c\n",ch1,ch2);
	
	ch1 = ch1 + 32;
	ch2 = ch2 - 32;
	
	printf("%c %c\n",ch1,ch2);
	
	char ch;
	
	printf("���ڸ� �Է��ϼ���.");
	scanf("%c",&ch);
	printf("%c %d\n",ch,ch);
	
	char ch;
	
	printf("���ڸ� �Է��ϼ���.");
	ch = getchar();
	putchar(ch);
	printf("%c %d\n",ch,ch);
	
	char str1[ ] = {'h','i',' ','C','3',' ','C','o','d','i','n','g'};
	char str2[ ] = {'h','i',' ','C','3',' ','C','o','d','i','n','g','\0'};
	
	printf("%s\n",str1);
	printf("%s\n",str2);
	
	char str1[15] = "coding is fun";
	char str2[ ] = "coding is fun";
	
	printf("%s\n",str1);
	printf("%s\n",str2);
	
	char word[20];
	
	printf("�ܾ �Է��ϼ���.");
	scanf("%s",word);
	printf("�Է��Ͻ� �ܾ�� %s �Դϴ�.",word);
	
	char sentence[20];
	
	printf("������ �Է��ϼ���:");
	gets(sentence);
	puts(sentence);
	printf("%s",sentence);
	
	char str[15] = "Hi C3 coding";
	
	for(int i = 0;str[i] != '\0';i++)
	{
		printf("%c",str[i]);
	}*/
	
	char str[15] = "Hi C3 coding";
	int a;
	int j = 0;
	
	for(a = 0;str[a] != '\0';a++)
	{
		j = j + 1;
		printf("%d\n",j);
	}	
	for(int i = j-1;i>=0;i--)
	{
		printf("%c",str[i]);
	}
	
	return 0; 
}
