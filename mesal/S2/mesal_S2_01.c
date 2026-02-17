// daryafd chand adad az karbar , mohasebeh miangin an ha
#include <stdio.h>

int main()
{
    // x = adada vared shodeh az, karbar n = tedad adad, sum = jam adad
    int x, n, sum = 0;

    // daryaft tedad adad az vorodi
    printf("chand adad dari ta avg begiram? ");
    scanf("%d", &n);

    // daryaft adada az vorodi, jam adad
    for(int i = 1; i<=n; i++)
    {
        printf("enter yuor namber %d : ", i);
        scanf("%d", &x);
        sum+=x;
    }

    // namyesh dar khoroji
    printf("avg adad: %.2f", (float)sum / n);

    return 0;
}
