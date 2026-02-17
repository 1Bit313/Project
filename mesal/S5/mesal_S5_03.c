#include <stdio.h>
void input(float *, float *);
void rect(float, float, float *, float *);
int main()
{
    float len, width, area, per;
    input(&len, &width);
    printf("length = %f, width = %f", len, width);
    rect(len, width, &area, &per);
    printf("length = %f, width = %f", len, width);
    printf("\narea = %f, perimeter = %f", area, per);
    return 0;
}

void input(float *p1, float *p2)
{
    printf("Enter length: ");
    scanf("%f", p1);
    printf("Enter width: ");
    scanf("%f", p2);
}

void rect(float x, float y, float *a, float *p)
{
    *a = x * y;
    *p = 2 * (x + y);
}
