// barresy aval bodan adad
#include <stdio.h>
#include <conio.h>
// prototype function isprime
int isprime(int);

int main()
{
    // num = adad vorody, ans = shart halgheh
    int num;
    char ans;
    while(1)
    {
        printf("\nEnter a number : ") ;
        scanf("%d", &num);

        if(isprime(num)) // farakhany tabe
            printf("\nNumber %d is prime", num);
        else
            printf("\nNumber %d is not prime", num);

        // porsesh edameh halgheh
        printf("\n Do you want to continue?(y/n): ");
        ans = getche();
        if(ans != 'y')
            break;
    }
    return 0;
}
// function isprime = barresy adal bodan adad
int isprime(int num)
{
    int i, count = 1;
    for(i = 2; (i <= num / 2) && count ; i++)
        if(num % i == 0)
            count = 0;
    return count;
}
