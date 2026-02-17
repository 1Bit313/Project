// ye kalameh midi badesh ba "switch" barrsy mikoneh ke chieh va behet bar asas on kalameh ye rang migeh

#include <stdio.h>

int main()
{
    char color;
    printf("please write favourite color: ");
    color = getchar();
    switch(color)
    {
        case('r'):
        case('R'):
            printf("your favourite color is 'red'");
            break;

        case('y'):
        case('Y'):
            printf("your favourite color is 'yello'");
            break;

        case('g'):
        case('G'):
            printf("your favourite color is 'Green'");
            break;
    }
}
