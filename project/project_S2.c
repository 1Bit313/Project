#include <stdio.h>
#include <conio.h>

int main()
{
    int id, n;
    int cmomtaz = 0, cmashrot = 0;
    float nomreh;
    char ans = 'y';

    while (ans == 'y')
    {
        float sum = 0, avg = 0;

        printf("\nchan dars dary: ");
        scanf("%d", &n);
        printf("Enter id: ");
        scanf("%d", &id);

        for (int i = 1; i <= n; i++)
        {
            printf("Enter nomreh(%d): ", i);
            scanf("%f", &nomreh);
            if(nomreh > 20 || nomreh < 0)
            {
                printf("This number is invalid...\n");
                i--;
                continue;
            } // end of if
            sum += nomreh;
        } // end of for
        avg = sum / n;
        if (avg >= 17)
        {
            printf("\nmoadel daneshjo = %.2f\nin daneshjo, daneshjoy momtaz ast ", avg);
            cmomtaz ++;
        } // end of if
        else
        {
            printf("\nmoadel daneshjo = %.2f\nin daneshjo, daneshjoy mashrot ast ", avg);
            cmashrot ++;
        } // end of else

        printf("\ndo you want to continue?(y/n)");
        ans = getche();
        switch (ans)
        {
            case 'y':
            case 'Y':
                ans = 'y';
                break;
            case 'n':
            case 'N':
                ans = 'n';
                break;
        } // end of switch
    } // end of while

    printf("\ndaneshjoyan momtaz = %d,\tdaneshjoyan mashrot = %d", cmomtaz, cmashrot);
}
