#include <stdio.h>
#include <conio.h>
#include <windows.h>

/*void Gotoxy(int x,int y);*/

/*void Gotoxy(int x,int y);*/

void Gotoxy(int x,int y);
void MyDelay(int d);

int main()
{
/*	int x,y;
	COORD pos = {40,12};
	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	printf("Hello C3coding");
	_getch();*/
	
/*	int x,y;
	COORD pos = {1,0};
	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	printf("←: 커서 시작위치(%d,%d)",pos.X,pos.Y);
	_getch();*/
	
/*	int x,y;
	COORD pos = {1,0};
	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	printf("←: 커서 시작위치(%d,%d)",pos.X,pos.Y);
	_getch();
	
	
	pos.X = 10;
	pos.Y = 2;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	printf("←: 커서 시작위치(%d,%d)",pos.X,pos.Y);
	_getch();
	
	pos.X = 20;
	pos.Y = 5;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	printf("←: 커서 시작위치(%d,%d)",pos.X,pos.Y);
	_getch();
	
	pos.X = 40;
	pos.Y = 12;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	printf("←: 커서 시작위치(%d,%d)",pos.X,pos.Y);
	_getch();
	
	pos.X = 40;
	pos.Y = 24;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	printf("←: 커서 시작위치(%d,%d)",pos.X,pos.Y);
	_getch();*/
	
/*	int x,y;
	COORD pos;
	
	do
	{
		pos.X = 0;
		pos.Y = 0;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
		printf("커서의 위치를 입력하세요:");
		scanf("%d %d",&pos.X,&pos.Y);
		system("cls");
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
		printf("=");
	} while (pos.X <= 80 && pos.Y <= 24);*/
	
/*	int x,y;
	
	do
	{
		Gotoxy(0,0);
		printf("커서의 위치를 입력하세요:");
		scanf("%d %d",&x,&y);
		system("cls");
		Gotoxy(x,y);
		printf("☆");
	} while (x <= 80 && y <= 24);*/
	
/*	int i = 0;
	
	do
	{
		Gotoxy(0,0);
		printf("%d",i);
		Sleep(1000);
		i++;
	} while(1);*/
	
	int i = 0;
	int s;
	
	printf("출력 속도(초 단위) :");
	scanf("%d",&s);
	while (1)
	{
		Gotoxy(0,1);
		MyDelay(s);
		printf("%d",i);
		i++;
	}
	
	return 0;
}

/*void Gotoxy(int x,int y)
{
	COORD pos;
	
	pos.X = x;
	pos.Y = y;
	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}*/

/*void Gotoxy(int x,int y)
{
	COORD pos;
	
	pos.X = x;
	pos.Y = y;
	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}*/

void Gotoxy(int x,int y)
{
	COORD pos;
	
	pos.X = x;
	pos.Y = y;
	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}
void MyDelay(int d)
{
	d = d*1000;
	Sleep(d);
}

