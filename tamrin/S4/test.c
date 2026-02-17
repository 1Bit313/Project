#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *x, *y, sum;
    x =(int *)malloc(sizeof(int));
    y =(int *)malloc(sizeof(int));

    printf("\nx = %d \t y = %d\n", *x, *y);

    printf("Enter num 1: ");
    scanf("%d", x);
    printf("Enter num 2: ");
    scanf("%d", y);

    printf("x = %d \t y = %d", *x, *y);

    sum = ((*y * *y) + (*x * *x));


    

    printf("\n\n%d\n\n", sum);

    free(x);
    free(y);

    printf("x = %d \t y = %d", x, y);

    return 0;
}
