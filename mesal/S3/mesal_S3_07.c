// estefadeh az moteghayer hay mokhtalef dar barnameh va mohasebeh majmo moraba adad
#include <stdio.h>
// moteghayer sarasary k = adad vorody, sq = moraba adad ha, sum = majmo moraba adad
int k, sq, sum;
// prototype function input, square
void input(void);
void square(void);

int main()
{
    // n = tedad adad
    int n;
    printf("chand adad dary? ");
    scanf("%d", &n);
    // farakhany func input, daryaft vorodu ha
    for (int i = 1; i <= n; i++)
        input();
    printf("majmo moraba ha = %d", sum);
}
void input(void)
{
    printf("enter yuor number: ");
    scanf("%d", &k);
    square();
    sum += sq;
}
void square(void)
{
    sq = k * k;
}
