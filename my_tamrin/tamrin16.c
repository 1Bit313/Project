#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main()
{
    int x, y, sum=0;
    printf("enter yuor number: ");
    scanf("%d", &x);
    for (int i=0; i<=9; i++)
    {
        y=x%10;
        sum+=y;
        x-=y;
        printf("%d\n", y);
    }
    printf("%d", sum);
}
