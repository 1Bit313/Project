#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main()
{
    int x = 15, y = 30;
    COORD c;
    c.X = 10;
    c.Y = 5;
    SetConsoleCursorPosition(
        GetStdHandle(STD_OUTPUT_HANDLE), c);
    printf("Multiply of %d , %d is %d", x, y, x * y);
}
