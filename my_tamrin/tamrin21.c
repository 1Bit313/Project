/*
چاپ حروف
A-z
*/
#include <stdio.h>
#include <conio.h>

int main()
{
    for (int i = 'A'; i <= 'z'; i++)
    {
        if( 91<=i & i<=96 )
            continue;
        putch(i);
        putchar('\t');
    }
}
