// mohasebeh eazafeh hoqoq bar asas darsad
#include <stdio.h>

int main()
{
    // tarif moteghayer
    int hoqoq, afrad, eazafh;
    float darsad;

    // daryaft az vorodi
    printf("hoqoq har nafar ra vared konid: ");
    scanf("%d", &hoqoq);

    printf("tedad karkonan ra vared konid: ");
    scanf("%d", &afrad);

    printf("darsad ezafeh hoqoq ra vared konid: ");
    scanf("%f", &darsad);

    // mohasebeh ezaf hoqoq
    eazafh = ((hoqoq * afrad * 12) * (float)(darsad / 100));
    printf("eazaf hoqoq baray kol karkonan dar har sal: %d", eazafh);


}
