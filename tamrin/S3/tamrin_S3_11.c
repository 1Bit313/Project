#include <stdio.h>

int revers(int);
int main()
{
    int num ;
    printf("Enter your number: ");
    scanf("%d", &num);
    revers(num);
    return 0;
}

int a = 0, b = 1, c;
int revers(int x)
{

    c = a + b;
    a = b;
    b = c;
    printf("%d\t", a);

    if(x != 1)
        revers(x - 1);

    return 1 ;
}
