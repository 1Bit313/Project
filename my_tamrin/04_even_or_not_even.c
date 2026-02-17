#include <stdio.h>

int main()
{
    int x;
    while (1)
    {
        printf("enter your number: ");
        scanf("%d", &x);

        if(x==-1)
            break;

        int count=0;

        for (int i = 1; i<=(x/2); i++)
        {
            //printf("%d\t", i);
            if(x%i==0)
            {
                count++;
                //break;
            }
        }

        if (count==1 && x>1)
            printf("number %d is aval\n", x);
        else
            printf("number %d is not aval\n", x);
    }
    return 0;
}
