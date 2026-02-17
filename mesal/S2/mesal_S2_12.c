// khandan yek jomleh az vorodi, moshakhas kardan tedad karakter ha, hrof

#include <stdio.h>

int main()
{
    // tarif moteghayer word = tedad kalamat, count = teydad horof
    int word = 1, count = 0;
    char ch;

    // daryaft karakter az vorodi, shomaresh hrof, kalamt
    while ((ch = getche()) != '.')
    {
        if (ch == ' ')
            word++;
        count++;
    }

    // namyesh dar khorojy
    printf("\ntedad kalamt: %d\nteydad horof: %d", word, count);

    return 0;
}
