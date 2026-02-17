
#include <stdio.h>

int main()
{
    int x, sum;
    while (1)
    {
        sum=0, x=0;
        printf("enter your number:");
        scanf("%d", &x);
        for(int i=1; i<=x/2; i++)
        {
            if (x%i==0)
            {
                sum+=i;
            }
        }
        if ( sum == x )
        {
            printf("%d is Perfect Number\n", x);
        }
        else
        {
            printf("%d is not a Perfect Number\n", x);
        }
    }

}
