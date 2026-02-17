#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main()
{
    int a,fac=1;
    printf("enter yuor number: ");
    scanf("%d", &a);
    //mohasebeh fact
    for (int i = 1; i <= a; i++)
    {
        fac*=i;
    }

    printf("pless wait...\n");
    Sleep(3000);
    printf("yekam dige...\n");
    Sleep(2000);
    printf("%d! = %d\t", a,fac);

}
