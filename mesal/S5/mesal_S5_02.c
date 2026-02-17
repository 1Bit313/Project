#include <stdio.h>

void rect(int *, int *);
int main()
{
    int *aptr, *bptr, a, b;
    printf("Enter num 1: ");
    scanf("%d", &a);
    printf("Enter num 2: ");
    scanf("%d", &b);
    aptr = &a;
    bptr = &b;
    rect(aptr, bptr);
    printf("a =%d ,    b = %d", a, b);
}
void rect(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
