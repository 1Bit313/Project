#include <stdio.h>

float avg_max(float, float, float);
float avg_min(float, float, float);
float avg_kol(float, float, float);

int main()
{
    float avg1, avg2, avg3;
    printf("Enetr avg(1): ");
    scanf("%f", &avg1);
    printf("Enetr avg(2): ");
    scanf("%f", &avg2);
    printf("Enetr avg(3): ");
    scanf("%f", &avg3);
    printf("avg max is: %.3f\n", avg_max(avg1, avg2, avg3));
    printf("avg min is: %.3f\n", avg_min(avg1, avg2, avg3));
    printf("avg kol is: %.3f\n", avg_kol(avg1, avg2, avg3));
}

float avg_max(float avg1, float avg2, float avg3)
{
    if(avg1 > avg2 && avg1 > avg3)
        return avg1;
    else if(avg2 > avg1 && avg2 > avg3)
        return avg2;
    else
        return avg3;
}

float avg_min(float avg1, float avg2, float avg3)
{
    if(avg1 < avg2 && avg1 < avg3)
        return avg1;
    else if(avg2 < avg1 && avg2 < avg3)
        return avg2;
    else
        return avg3;
}

float avg_kol(float avg1, float avg2, float avg3)
{
    float avg;
    avg = (avg1 + avg2 + avg3) / 3;
    return avg;
}
