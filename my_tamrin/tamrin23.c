// چاپ ستاره به تعداد n

#include <stdio.h>
#include <conio.h>

int main()
{
    int n;
    printf("enter num n: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        putch('*');
    }
}
