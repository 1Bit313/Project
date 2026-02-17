// ba tafrtgh do adad az ham taghsim sehih anjam midahad
#include <stdio.h>

int main()
{
    // tarif moteghyer x,y adad vorodi karbar, div = javab taghsim
    int x, y, div = 0;
    printf("enter number 1: ");
    scanf("%d", &x);

    printf("enter number 2: ");
    scanf("%d", &y);
    // taghsim ba tafrigh
    while (x > 0)
    {
        x -= y;
        div += 1;
    }
    printf("%d",  div);
    return 0;
}
