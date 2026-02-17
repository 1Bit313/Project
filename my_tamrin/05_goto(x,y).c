#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

COORD coord = { 0 , 0 } ;
void gotoxy(int x, int y) //goto x y function
{
coord.X=x;
coord.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

int main()
{
    int m, x = 5, y = 10;
    //system("cls");
    m = x + y;
    gotoxy(20, 10);
    printf("x=%d, y=%d, sum=%d", x, y, m);
    //Sleep(5000);
    //system("cls");
    //getch();
    return 0;
}
