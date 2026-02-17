#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main()
{
    int x, y;
    printf("enter x= ");
    scanf("%d", &x);

    printf("enter y= ");
    scanf("%d", &y);

    x=x+y;
    y=x-y;
    x=x-y;

    printf("bezar yekam fekr konam\n");
    Sleep(5000);
    printf("x=%d\ny=%d", x,y);

}
