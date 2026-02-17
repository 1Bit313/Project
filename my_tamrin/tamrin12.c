//daryaft reshteh az karbar az tarigh tabeh getch
#include <conio.h>
#include <stdio.h>

int main()
{
    char str[20];
    int i = 0;

    while (1)
    {
        char ch = getchar();
        if (ch == '.')
            break;
        str[i++] = ch;
    }

    str[i] = '\0';
    printf("str=%s", str);
    return 0;
}
