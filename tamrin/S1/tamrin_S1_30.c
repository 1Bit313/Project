#include <stdio.h>

int main()
{
    const float sal = 3.156e7;

    int sen;
    printf("sal ra vared konid: ");
    scanf("%d", &sen);

    printf("shoma ta alan %.4e ", sal * sen);

}
