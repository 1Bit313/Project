// daryaft jomleh az vrodi, shomaresh tydad caracter , tydad adad

#include <stdio.h>

int main()
{
    /* tarif moteghayer word_count = shomarandeh kalamat,
    hrof_count = shomarandeh horof, digit_count = shomarandeh adad
    */
    int word_count = 1, hrof_count = 0, digit_count = 0;
    char ch;

    // daryaft character, digit az vorodi
    while ((ch = getche()) != '\r')
    {
        // barresy kalameh bodan
        if(ch == ' ')
            word_count++;

        // barresy digit bodan vorodi
        if (ch >= 48 && ch <= 57 )
            digit_count++;

        hrof_count++;
    }

    printf("\nchar count = %d \nword count = %d \ncount digit = %d", hrof_count, word_count, digit_count);

    return 0;
}
