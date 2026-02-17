// mohasebeh sery 1 + 1/2 + 1/4 + 1/8 + 1/16 + 1/32
#include <stdio.h>
#include <conio.h>
#define NUM 6

int main()
{
    int count;
    float sum, x;

    for(sum = 0, x = 1.0, count = 1; count <= NUM; count ++, x *= 2)
    {
        sum += 1 / x;
        printf("sum = %7.4f, when count = %d\n", sum, count);
    }
return 0;
}
