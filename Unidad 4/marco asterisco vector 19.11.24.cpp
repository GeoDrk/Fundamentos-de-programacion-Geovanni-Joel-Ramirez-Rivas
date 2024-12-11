//Geovani Joel Ramirez Rivas
//24041219
#include <iostream>
#include <windows.h>
#include <time.h>
#include <conio.h>
using namespace std;
void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	int r;
	int vec[10];
	srand(time(0));
	for(r=0;r<=166;r++)
	{	
		gotoxy(r,0);
		printf("*");
		gotoxy(r,40);
		printf("*");
	}	
	for(r=0;r<40;r++)
	{
		gotoxy(0,r);
		printf("*");
		gotoxy(165,r);
		printf("*");
	}
	cout<<"Impresión del vector";
	for(r=0;r<10;r++)
	{
		vec[r]=rand()%100;
		gotoxy(40,r+3);
		printf("%3d",vec[r]);
	}
	gotoxy(5,13);
	getche();
	
}