// adad ra az vorodi begirad, an ra varoneh konad

#include <stdio.h>

int main()
{
    // tarif moteghayer num = adad vorodi, digit = adad varoneh shodeh
    int num;
    int digit = 0;

    printf("Enter your number: ");
    scanf("%d", &num);

    printf("\ninvers = ");

    // varoneh kardan adad
    do
    {
        digit = num % 10;
        printf("%d", digit);
        num /= 10;
    } while (num != 0);

    return 0;

}
