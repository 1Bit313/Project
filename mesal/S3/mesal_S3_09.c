// mohasebeh fact ba komak tabe bazgashty
#include <stdio.h>
// prototype function fact
int fact(int);

int main()
{
    // m = adad vorody baray mohasebeh fact
    int m ;
    printf(" Enter your number: ");
    scanf("%d", &m); // daryaft az vorody
    printf("\n number = %d, fact = %d", m, fact(m)); // farakhany tabe
    return 0;
}

int fact(int x)
{
    if(x != 0)
        return(x * fact(x - 1)); // farakhany bazgashty tabe
    return 1;
}
