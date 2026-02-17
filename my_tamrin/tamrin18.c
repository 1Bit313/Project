/*
#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main()
{
    int a, count=1;
    printf("enter your number: ");
    scanf("%d", &a);
    while (1)
    {
        if((a/10)!=0)
            count+=1;
        if(a/10==0)
        {
            //printf("sabr kon alan migam\n");
            //Sleep(5000);
            break;
        }
        a=a/10;
        printf("\n%d\n", a);
    }
    printf("counter= %d", count);
}
*/
/*
مشکل در تعداد رقم بیشتر از 10
#include <stdio.h>

int main()
{
    int a, count = 0;

    printf("enter your number: ");
    scanf("%d", &a);

    if (a == 0)
    {
        count = 1;
    }
    else
    {
        if (a < 0)
            a = -a;   // حذف علامت منفی

        while (a != 0)
        {
            count++;
            a /= 10;
        }
    }

    printf("number of digits = %d", count);
    return 0;
}
*/
#include <stdio.h>

int main()
{
    long long a;
    int count = 0;

    printf("enter your number: ");
    scanf("%lld", &a);

    if (a == 0)
        count = 1;
    else
    {
        if (a < 0)
            a = -a;

        while (a != 0)
        {
            count++;
            a /= 10;
        }
    }

    printf("number of digits = %d", count);
    return 0;
}
