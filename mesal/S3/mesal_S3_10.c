// mohasebeh zarb adad ba komak tabe bazgashty
#include <stdio.h>
// prototype function zrb
int zarb(int, int);

int main()
{
    // x = adad vorody, y = mazrab
    int x, y;
    printf(" Enter your number:(x, y = x * y) ");
    scanf("%d%d", &x, &y); // daryaft az vorody
    printf("\n %d * %d = %d", x, y, zarb(x, y)); // farakhany tabe
    return 0;
}

int zarb(int x, int y)
{
    if(y == 1)
        return x;
    return(x + zarb(x, y - 1)); // farakhany bazgashty tabe
}
