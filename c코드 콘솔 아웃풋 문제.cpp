#include <stdio.h>
#include <conio.h>
#include <windows.h>

/*void MyDelay(int d);*/

/*void MyDelay(int d);*/

/*void MyDelay(int d);*/

void MyDelay(int d);

int main()
{
	/*char str[10] = {10,20,30,40,50,60,70,80,90,100}; // 1
	int i;
	
	for (i = 0;i<10;i++)
	{
		printf("%d ",str[i]);
		MyDelay(1);
	}*/
	
/*	char str[10] = {10,20,30,40,50,60,70,80,90,100}; // 2
	int i;
	COORD pos;
	
	pos.X = 40;
	pos.Y = 0;
	
	
	while (1)
	{
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
		
		printf("%d",str[i]);
		i = i + 1;
		pos.Y += 1;
		MyDelay(1);
	} */
	
/*	char str[10] = {999,888,777,666,555,444,333,222,111}; // 3
	int i = 0;
	COORD pos;
	
	pos.X = 40;
	pos.Y = 0;
	
	do
	{
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
		printf("%d",str[i]);
		i = i + 1;
		pos.X -= 5;
		MyDelay(1);
		if (i == 9)
		{
			break;
		}
	} while(1);*/
	
	char str[10] = {999,888,777,666,555,444,333,222,111}; // 4
	int i;
	COORD pos;
	
	pos.X = 40;
	pos.Y = 10;
	
	for (i = 0;i<9;i++)
	{
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
		printf("%d ",str[i]);
		MyDelay(1);
		pos.Y -= 1;
	}
	
	return 0;	
}

/*void MyDelay(int d)
{
	d = d*1000;
	Sleep(d);
}*/

/*void MyDelay(int d)
{
	d = d*1000;
	Sleep(d);
}*/

/*void MyDelay(int d)
{
	d = d*1000;
	Sleep(d);
}*/

void MyDelay(int d)
{
	d = d*1000;
	Sleep(d);
}
