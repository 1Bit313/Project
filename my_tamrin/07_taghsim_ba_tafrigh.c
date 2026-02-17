// ba tafrtgh do adad az ham taghsim sehih anjam mideh
#include <stdio.h>

int main()
{
    int x, y, div = 0;
    printf("enter number 1: ");
    scanf("%d", &x);

    printf("enter number 2: ");
    scanf("%d", &y);

    while (x>0)
    {
        x -= y;
        div += 1;
    }
    printf("%d",  div);

}
