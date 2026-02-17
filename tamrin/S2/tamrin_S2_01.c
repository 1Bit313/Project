// drayaft shomareh daneshjoey, moadel chand daneshjo, peyda kardan nafar dovom(2)
#include <stdio.h>
#include <conio.h>

int main()
{
    /*  n = tedad daneshjo ha, id = id daneshjo vorody, idmax = id bishtarin moadel, idmin = id nafar 2
        avg = moadel vorody, avgmax = bishtarin moadel, avgmin = moadel nafar 2
    */
    int n, id, idmax, idmin;
    float avg;
    float avgmax = 0, avgmin = 0;

    // daryaft tedad daneshjo ha bray vrody
    printf("tedad daneshjoyan ra vared konid: ");
    scanf("%d", &n);

    // daryaft moshakhasat vorody ha, barresy an ha
    for(int i = 1; i <= n; i++)
    {
        printf("\nenter your Student id: ");
        scanf("%d", &id);
        printf("enter your avg: ");
        scanf("%f", &avg);

        // barresy moadel ha
        if(avg > avgmax)
        {
            avgmin = avgmax;
            avgmax = avg;
            idmax = id;
        }
        else if(avg > avgmin && avg < avgmax)
        {
            avgmin = avg;
            idmin = id;
        }
    }

    // namayesh da khorojy
    printf("id = %d\tavg = %5.2f", id, avgmin);
    
    return 0;
}
