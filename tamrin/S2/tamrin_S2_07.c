// daryaft mizan hoghogh har nafar ra darysft, maliat ra ezafeh, chap mikonad, bishtarin ra chap mi konad
#include <stdio.h>

int main()
{
    // tarif motaghayer id = shomareh karmandi, pay = hoghogh daryafty, max_id, max_pay = bishtarin hoghogh
    int id, pay;
    int max_pay = 0, max_id = 0;

    while (1)
    {
        // daryaft vorody ha
        printf("\nenter id(-1 : end of program): ");
        scanf("%d", &id);

        if (id < 0)
            break;

        printf("enter hoghog: ");
        scanf("%d", &pay);

        // barresy hoghogh
        if (pay <= 400000)
            printf("moaf az maliat\nhoghogh = %d");
        else if (pay > 400000 && pay <=500000)
            printf("10%% maliat\nhoghogh = %.0f", pay + (pay * 0.10));
        else if (pay > 50000 && pay <=700000)
            printf("15%% maliat\nhoghogh = %.0f", pay + (pay * 0.15));
        else
            printf("17%% maliat\nhoghogh = %.0f", pay + (pay * 0.17));

        // barresy, negahdary bishtarin hoghogh
        if (pay > max_pay)
        {
            max_id = id;
            max_pay = pay;
        }
    }
    printf("bishtarin hoghogh = %d, id = %d", max_pay, max_id);
    return 0;
}
