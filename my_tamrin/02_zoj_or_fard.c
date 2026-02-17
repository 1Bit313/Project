/*
بررسی زوج بودن عدد
*/
#include <stdio.h>

int main()
{
    int x;
    while (1)
    {
        printf("enter number: ");
        scanf("%d", &x);

        // بررسی زوج بودن عدد
        if ((x%2)==0)
            printf("number is even\n");
        else
            printf("numbr is not even\n");

        // دستور خروج از حلقه
        if (x == EOF)
            break;
    }


    return 0;
}
