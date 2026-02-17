// 3 adad az vorody daryaft mikonad va max An ra pyda mikonad
#include <stdio.h>
// prototype function findmax
void findmax(int, int, int);

int main()
{
    // daryaft vorody ha 3 adad dar num1, num2, num3
    int num1, num2, num3;
    printf("\nEnter num1: ");
    scanf("%d", &num1);
    printf("\nEnter num2: ");
    scanf("%d", &num2);
    printf("\nEnter num3: ");
    scanf("%d", &num3);
    // frakhany function
    findmax(num1, num2, num3);
    return 0;
}
// 'void function
void findmax(int p1, int p2, int p3)
{
    int maxp;
    maxp = (p1 > p2) ? p1 : p2;
    maxp = (p3 > maxp) ? p3 : maxp;
    printf("Maximum = %d", maxp);
}
