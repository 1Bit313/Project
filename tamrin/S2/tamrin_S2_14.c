#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, x1, x2, delta;

    printf("ax%c + bx + c = 0\n\n",0xFD);
    printf("Please enter coefficients of this equation.\n");
    printf("a = ");
    scanf("%f",&a);
    printf("b = ");
    scanf("%f",&b);
    printf("c = ");
    scanf("%f",&c);
    printf("\n");

    if(a==0)
    {
        if(b==0)
        {
            printf("Error: adad vared shodeh na motabar ast.\n");
        }
        else
        {
            x1 = -c/b;
            printf("yek risheh darim:\n");
            printf("x = %f\n",x1);
        }
    }
    else
    {
        delta = b*b - 4*a*c;
        if(delta==0)
        {
            printf("yek risheh darim:\n");
            x1 = -b/(2*a);
            printf("x1 = x2 = %f\n",x1);
        }
        else if(delta>0)
        {
            printf("do(2) risheh darim:\n");
            x1 = (-b + sqrt(delta))/(2*a);
            x2 = (-b - sqrt(delta))/(2*a);
            printf("x1 = %f\n",x1);
            printf("x2 = %f\n",x2);
        }
        else
        {
            if(b==0)
            {
                printf("This equation has two imaginary roots.\n");
                printf("x1 =  %fi\n",sqrt(-delta)/(2*a));
                printf("x2 = -%fi\n",sqrt(-delta)/(2*a));
            }
            else
            {
                printf("This equation has two complex roots.\n");
                printf("x1 =  %f + %fi\n",-b/(2*a),sqrt(-delta)/(2*a));
                printf("x2 =  %f - %fi\n",-b/(2*a),sqrt(-delta)/(2*a));
            }
        }
    }
}
