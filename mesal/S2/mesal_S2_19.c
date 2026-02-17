// daryaft character az vorodi, chap An, character bad az An
#include <stdio.h>

int main()
{
    // tarif moteghayer done = shart edameh halgheh, ch = character vorodi
    int done = 1;
    char ch;

    while(done)
    {
        // drayaft character az vorodi
        printf("\nEnter a character : ");
        ch = getche();

        // shart edameh halgheh
        if(ch == '&')
        {
            done = 0;
            continue;
        }

        printf("\nYou typed char \"%c\", next char is: \"%c\"", ch, ch + 1);
    }
    return 0;
}
