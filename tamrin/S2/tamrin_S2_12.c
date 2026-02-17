// daryaft adad az vorodi, tabdil beh roz hafteh
#include <stdio.h>

int main()
{
    // day = roz chndom az hafteh
    int day;
    printf("emroz roz chndom az hafteh ast?(1 to 7): ");
    scanf("%d", &day);

    // barresy roz hafteh
    switch(day)
    {
        case(1):
            printf("today is Saturday");
            break;
        case(2):
            printf("today is Sunday");
            break;
        case(3):
            printf("today is Monday");
            break;
        case(4):
            printf("today is Tuesday");
            break;
        case(5):
            printf("today is Wednesday");
            break;
        case(6):
            printf("today is Thursday");
            break;
        case(7):
            printf("today is Friday");
            break;
    }
    return 0;
}
