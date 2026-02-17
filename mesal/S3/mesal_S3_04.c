// daryaft charakter az vorody va tabdil An be character bozorg
#include <stdio.h>
// prototype function characterex
char characterex (char);

int main()
{
    char ch;
    printf("Enter your character: ");
    ch = getchar();
    printf("your upper char is: %c", characterex(ch));
    return 0;
}

char characterex (char ch)
{
    // barresy character, tabdil An
    if(ch >= 97 && ch <= 122 )
        ch -= 32;
    return ch;
}
