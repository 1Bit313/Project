//دریافت کاراکتر از ورودی و چاپ دوباره آن
#include <stdio.h>
#include <conio.h>

int main()
{
    char ch;
    while (1)
    {
        ch = getch();
        if(ch=='\r')
            break;
        putch(ch);
        putch('\t');
    }
}
