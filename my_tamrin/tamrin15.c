#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main()
{
    
    for(int i=2; i<=10; i++)
    {
        printf("%d = ", i);
        for(int j=1; j<=10; j++)
        {
            if((i%j)==0)
            {
                printf("%d\t", j);
            }
        }
        printf("\n");
    }
}
