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
	char key; 
	int x = 0,y = 0;
	
	do 
	{
		GotoXY(x,y);
		printf("kiom");
		for (int i = 0;i != 24;i++)
		{	
			system("cls");
			GotoXY(x,y);
			y = i;
			GotoXY(x,y);
			printf("e");
			//Sleep(1000);
			for (int j = 0; j < 1; j++){
				key = getch();
				Move_LeftRight_Key(key,&x,&y);
			}
			
		}
		printf("iki");
		
	} while (key != 24);
	
	return 0;	
}

void GotoXY(int x,int y)
{
	COORD pos = {x,y};
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
	}
}
