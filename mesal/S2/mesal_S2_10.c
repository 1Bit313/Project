// vared kardan tedadi adad az vorodi, mohasebeh majmo morabaat( مربعات ), shomaresh tedad adad

#include <stdio.h>
#include <conio.h>

int main()
{
    // tarif moteghayer x = adad vridi, count = shomaresh adad vrodi, sum = majmoe moraba ha, ans = shart edameh
    int x;
    int count = 0, sum = 0;
    char ans = 'y';

    while (ans == 'y')
    {
        printf("\nenter your number: ");
        scanf("%d", &x);

        // mohasebeh morabae adad, jam an ha
        sum += (x * x);
        count += 1;// shomaresh adad

        // shart edameh halgheh
        printf("do yuo want to continue? (y/n)\n");
        ans = getche();
    }// end of while

    // namyesh dar khoroji
    printf("\nshoma %d adad vared kardid.\nmajmoe moraba an ha barabar ba: %d", count, sum);
    return 0;

}
