#include <stdio.h>
#include <conio.h>
#include <windows.h>
#define X_END 79
#define Y_END 24

void GotoXY(int x,int y);
void GotoxY(int x,int y);
void Move_LeftRight_Key(char chr,int *x,int *y);
void Move_Leftright_Key(char chr,int *x,int *y);

int main()
{
/*	int ch1,ch2;
	
	ch1 = getch();
	ch2 = getch();
	printf("%d %d\n",ch1,ch2);
	printf("%X %X\n",ch1,ch2);
	printf("%c %c\n",ch1,ch2);*/
	
/*	unsigned char ch;
	
	do
	{
		ch = getch();
		printf("%d %x : %c\n",ch,ch,ch);
	} while (ch != 13);*/
	
	char key; // Àç¹Õ´Â ºÎºÐ 
	int x = 0,y = 0;
	int w = 0,d = 10; 
	
	do 
	{
		GotoXY(x,y);
		printf("¡Ø");
		GotoxY(w,d);
		printf("¢Â");
		key = getch();
		key = getch();
		Move_LeftRight_Key(key,&x,&y);
		Move_Leftright_Key(key,&w,&d);
		system("cls");
	} while (key != 27);
	
	return 0;	
}

void GotoXY(int x,int y)
{
	COORD pos = {x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void GotoxY(int w,int e)
{
	COORD pos = {w,e};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void Move_LeftRight_Key(char key,int *x1,int *y1)
{
	switch (key)
	{
		case 75:
			*x1 = *x1 - 1;
			if (*x1 < 1)
			{
				*x1 = X_END;
			}
				
			break;
		case 77:
			*x1 = *x1 + 1;
			if (*x1 > X_END)
			{
				*x1 = 1;
			}	
			break;
		case 72:
			*y1 = *y1 - 1;
			if (*y1 < 1)
			{
				*y1 = Y_END;
			}
			break;
		case 80:
			*y1 = *y1 + 1;
			if (*y1 > Y_END)
			{
				*y1 = 1;
			}
			break;
	}
}

void Move_Leftright_Key(char wey,int *w,int *e)
{
	switch (wey)
	{
		case 97:
			*w = *w - 1;
			if (*w < 1)
			{
				*w = X_END;
			}
				
			break;
		case 100:
			*w = *w + 1;
			if (*w > X_END)
			{
				*w = 1;
			}	
			break;
		case 119:
			*e = *e - 1;
			if (*e < 1)
			{
				*e = Y_END;
			}
			break;
		case 115:
			*e = *e + 1;
			if (*e > Y_END)
			{
				*e = 1;
			}
			break;
	}
}
