// shomaresh tedad hrof string

#include <stdio.h>
#include <conio.h>
int main()
{
    int count = 0 ;

    printf("Type a statement and press ENTER to end:\n ");

    // daryaft caracter az vorodi, shomaresh an ha
    while(getche() !='\r')
         count ++ ;

    printf("\n Length of statement is:%d",count);

    return 0;
}
