// barnamehei keh neshan midahad function bar Argoman ha tasir nadarad

#include <stdio.h>
// prototype function void f1
void f1 (int, int);
int main()
{
    int num1, num2;
    printf("enter num1, num2: ");
    scanf("%d%d", &num1, &num2);
    printf("\nnumbers in function main: num1 = %d, num2 = %d", num1, num2);
    f1 (num1, num2);
    printf("\nnumbers after return from f1 in void main: num1 = %d, num2 = %d", num1, num2);
    return 0;
}

void f1 (int x, int y)
{
    printf("\nfunctin f1 recived numbers: num1  = %d, num2 = %d", x, y);
    x++;
    y++;
    printf("\nnew values number in functin f1: num1  = %d, num2 = %d", x, y);
}
