#include <stdio.h>
#include <string.h>


void cmp(char *s1, char *s2, int (*cmp)(const char *, const char *));
int main()
{
    int (*p)(const char *, const char *);
    p = strcmp;
    char str1[81], str2[81];
    printf("Enter string 1: ");
    fgets(str1, 80, stdin);
    printf("Enter string 2: ");
    fgets(str2, 80, stdin);
    cmp(str1, str2, p);

}

void cmp(char *s1, char *s2, int (*cmp)(const char *, const char *))
{
    if ((*cmp)(s1, s2))
    {
        printf("mesl ham nistan");
    }
    else
    {
        printf("mesl ham hastan");
    }


}
