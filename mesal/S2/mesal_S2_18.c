// daryaft adad az vorodi, shomarsh adad zoj, fard
#include <stdio.h>

int main()
{
    // tarif moteghayer num = adad vorodi, count_z, count_f = shomaresh adad hay zoj, fard
    int num;
    int count_z = 0, count_f = 0;
    // halgheh tekrar daryaf vrodi, barresy zoj ya fard bodan adad, shomaresh Anha
    while (1)
    {
        printf("enter yuor number: ");
        scanf("%d", &num);

        // shart khroj az halgheh
        if (num == 0)
            break;

        if (num % 2 == 0)
            count_z++;
        else
            count_f++;

    }
    // chap khroji
    printf("adad hay zoj = %d \nadad hay fard = %d", count_z, count_f);

    return 0;
}
