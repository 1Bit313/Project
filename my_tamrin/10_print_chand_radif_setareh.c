// be teidady ke vared mi koni da har satr setareh mizareh
#include <stdio.h>

int main()
{
    int x;
    printf("chand radif chap konam?\nbego: ");
    scanf("%d", &x);
    for(int i=1; i<=x; i++)
    {
        for(int j=1; j<=i; j++)
        {
            putchar('*');
        }
        putchar('\n');
    }
}
