// zaman ra begirad, An ra bar asas sanieh chap konad
#include <stdio.h>
// prototype functin
void convert (void);
int main()
{
    convert(); // farakhany function
    return 0;
}

// void function
void convert (void)
{
    // daryaft vorody ha
    int hour, minute, secend;
    long int time;
    printf("Enter hour, minute, secend: ");
    scanf("%d%d%d", &hour, &minute, &secend);

    time = (60 * hour + minute) * 60 + secend;
    printf("time per secend = %ld S");
}
