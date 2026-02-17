// daryaft nomreh az vorodi va print character moadel An
#include <stdio.h>

int main()
{
    float num;
    // barresy adad az vorodi, chap grade dar khorojy
    while(1)
    {
        printf("\n Enter a num : ");
        scanf("%f",&num);
        if (num >= 17 && num <= 20)
            printf("\n nomreh = %5.2f, grade = %c", num, 'A');
        else if (num >= 15 && num < 17)
            printf("\n nomreh = %5.2f, grade =%c", num, 'B');
        else if (num >= 12 && num < 15)
            printf("\n nomreh = %5.2f, grade = %c", num, 'C');
        else if (num < 12)
        printf("\n nomreh = %5.2f, grade = %c", num, 'D');
    }
    return 0;
}
