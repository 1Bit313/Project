// daryaft tarikh tavalod, tarikh emroz, mohasebeh ekhtelaf
#include <stdio.h>

int main()
{
    int year, month, day;
    int year1, month1, day1;
    int year2, month2, day2;
    int t1, t2;
    int h, m, s;

    printf("enter your birthday(year month day)");
    scanf("%d%d%d", &year1, &month1, &day1);

    printf("what day to day?(year month day)");
    scanf("%d%d%d", &year2, &month2, &day2);

    printf("what time is it?(hour minute second)");
    scanf("%d%d%d", &h, &m, &s);

    year1 *= 365;
    if (month1 > 6)
        month1 = month1 * 30 + 6;
    else
        month1 *= 30;

    year2 *= 365;
    if (month2 > 6)
        month2 = month2 * 30 + 6;
    else
        month2 *= 30;

    t1 = year1 + month1 + month1;
    t2 = year2 + month2 + month2;

    year = t2 - t1;
    year = year / 365;
    printf("%d", year);
    // printf("your %d year, %d month, %d day, %d hour, %d minute, %d secend", year, month, day, h, m, s);
    return 0;
}
