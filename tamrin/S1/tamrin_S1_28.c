// barnameh mohasebeh masahat mosalas
#include <stdio.h>

int main()
{
    // tarif motegayer: h = ertefa, m = gaedeh
    int h, m;

    // daryaft vrodi ha
    printf("ertefah mosalas ra vared kon: ");
    scanf("%d", &h);

    printf("gaedeh mosalas ra vared kon: ");
    scanf("%d", &m);

    // mohasebeh masahat mosalas
    printf("masahat mosalas : %.2f", (float)(h * m) / 2);


}
