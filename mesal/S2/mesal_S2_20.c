// halgheh tekrar ba dastor go to
#include <stdio.h>
int main()
{
    int x = 100;
    loop1:
        x--;
        if (x >= 1)
            goto loop1;// ejad halgheh tekhrar
    printf("x = %d", x);

    return 0;
}
