#include <stdio.h>

int revers(int);
int main()
{
    int num ;
    printf(" Enter a number: ");
    scanf("%d", &num);
    revers(num);
    return 0;
}

int revers(int x)
{
    if(x > 0)
    {
        printf("%d ", x);
        revers(x - 1) ;
    }
    return 1 ;
}
