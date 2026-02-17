// 
#include <stdio.h>

int main()
{
    const int pen = 150, paper = 50;
    int pen_price, paper_price, sum;
    float tavarom;

    printf("Enter the amount per pen: ");
    scanf("%d", &pen_price);

    printf("Enter the amount per paper: ");
    scanf("%d", &paper_price);

    printf("darsat tavarom ra vared konid");
    scanf("%f", &tavarom);

    tavarom/=100;

    sum = (pen_price * pen) + (paper_price * paper);
    sum = sum + (sum * tavarom);
    printf("%d", sum);


}
