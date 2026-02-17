// mohasebeh fact be tedad na mahdod
#include <stdio.h>
#include <conio.h>

int main()
{
    int x;

    for(;;)
    {
        int fact=1;
        printf("enter yuor number: ");
        scanf("%d", &x);

        //mohasebeh fact
        for (int i = 1; i<=x; i++)
        {
            fact*=i;
        }
        printf("%d! = %d\n", x,fact);
    }
    return 0;
}
