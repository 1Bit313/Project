#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[5];
    fgets(str, 2, stdin);
    printf("%s", str);
}
