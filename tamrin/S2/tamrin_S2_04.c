// ye kalameh midi badesh ba "switch" barrsy mikoneh ke chieh va behet bar asas on kalameh ye rang migeh
#include <stdio.h>

int main()
{
    // colour = character vorody baray rang
    char colour;
    printf("character aval rangy keh dost dary ro bego: ");
    colour = getchar();
    switch(colour)
    {
        case('r'):
        case('R'):
            printf("your favourite color is 'Red'");
            break;

        case('b'):
        case('B'):
            printf("your favourite color is 'Blu'");
            break;

        case('y'):
        case('Y'):
            printf("your favourite color is 'Yello'");
            break;

        case('g'):
        case('G'):
            printf("your favourite color is 'Green'");
            break;
    }
    return 0;
}
