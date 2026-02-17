//mohasebe n = n! + n-1! + n-2! + n-3! + .... + n-(n-1)!
#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main()
{
    int a,fac=1,sum=0;
    printf("enter yuor number: ");
    scanf("%d", &a);

    for (int i = 1; i<=a; i++)
    {
        for (int j = 1; j<=j; j++)
        {
            fac*=j;
        }
        sum+=fac;
        fac=1;
    }

    printf("pless wait...\n");
    Sleep(3000);
    printf("yekam dige...\n");
    Sleep(2000);
    for(int b = 1; b<=a; b++)
        printf("%d! + ", b);
    printf("\b\b = %d", sum);

}
