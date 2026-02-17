// chap jadval code ascii

#include <stdint.h>

int main()
{
    // halgheh baray chap adad, cod ascii
    for(int i = 41; i <= 120; i++)
    {
        // chap cod ascii ba tol mydan 6 baray khanaiy bishtar, chap caracter barabar ba an
        printf("%6d = %c", i, i);
        if (i % 5 == 0)
        {
            // baray khanaiy bishtar
            putch('\n');
        }
    }
    return 0;
}
