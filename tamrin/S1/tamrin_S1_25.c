// tabdil vazn kala az kg beh g
#include <stdio.h>
#include <stdlib.h>

// tarif tabe asli
int main ()
{
    // mote
    float vazn;


    printf("Vazn ra Beh \"Kg\" vared konid: ");
    scanf("%f", &vazn);


    vazn = vazn * 1000;

    system("cls");

    printf("Vazn kala Beh \"g\": %.0f", vazn);

}
