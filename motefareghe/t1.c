#include <stdio.h>
#include <string.h>

int main()
{
    char str1[81], str2[81];
    printf("Enter string 1: ");
    fgets(str1, 80, stdin);
    printf("Enter string 2: ");
    fgets(str2, 80, stdin);
    printf("%d", strcmp(str1, str2));
}
