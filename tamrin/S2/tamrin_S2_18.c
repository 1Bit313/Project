// daryaft yek adad ashary az vorody va tabdil do ghesmat An be adad mamoly
#include <stdio.h>
int main()
{
    // a = bakhsh aval adad, b = bakhsh dovom adad
    int a, b;
    printf("enter your number: ");
    // adad vorody ra be do bakhsh tabdil my konad '.' = beh in many keh adad vorody agar yek '.' gozash adad bady ro begir
    scanf("%d.%d", &a, &b);
    printf("%d\t%d", a, b);
}
