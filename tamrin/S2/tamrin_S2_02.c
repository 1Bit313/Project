// barresy kamel bodan adad
#include <stdio.h>

int main()
{
    // tarif moteghayer num = adad vorody, sum = jam adad bakhs pazir
    int num, sum;
    while (1)
    {
        sum=0, num=0;
        // daryaft adad az vorody
        printf("enter your number:");
        scanf("%d", &num);
        // tagsim adad
        for(int i=1; i<=num/2; i++)
        {
            if (num%i==0) // bakhs paziry
            {
                sum+=i;
            }
        }
        if ( sum == num ) // shart kamel bodan
            printf("%d is Perfect Number\n", num);
        else
            printf("%d is not a Perfect Number\n", num);

        // shart khoroj az halgheh
        if(num == 0)
            break;
    }

    return 0;
}
