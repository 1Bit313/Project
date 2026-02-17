#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main()
{
    int a, sum=0, counter=0;
    printf("adda ra vared konid: ");
    scanf("%d", &a);
    for(int i=1; i<=a; i++)
    {
        if(a%i==0)
        {
            printf("i= %d\t", i);
            sum+=i;
            counter++;
        }
    }
    printf("\ncounter= %d \nsum= %d ", counter, sum);
}
