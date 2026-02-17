// shomaresh tydad horof daryaft shodeh az vorodi
#include <stdio.h>
#include <conio.h>
int main()
{
    char ch;
    int count;

    printf("Enter a statement with . in end:\n");

    // daryaft hrof az vorodi , shomaresh an ha
    for(count = 0; (ch = getchar()) != '.' ; count++);

    printf("\n length of statement is:%d", count);

    return 0;
}
