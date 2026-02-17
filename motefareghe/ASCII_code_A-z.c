// chap adad ASCII hamra ba harf an ha

#include <stdio.h>

int main()
{
    char ch='a';
    for (int i = 'A'; i <='z'; i++)
    {
        if (i>= 91 && i<= 96 )
        {
            continue;
        }

        printf("%c = %d in ASCII cod\n", i, i);
    }
}
