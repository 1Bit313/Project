#include <stdio.h>

int main()
{
    int k = 0;
    int num, count;
    int arr[50];
    printf("Enter your number: ");
    scanf("%d", &num);
    for(int i = 1; i <= num; i++)
    {
        count = 0;
        for(int j = 1; j <= i; j++)
        {
            if(i % j == 0)
                count ++;
            if(count > 2)
                break;
        }
        if(count == 2)
        {
            arr[k] = i;
            k ++;
        }
    }
    for(int m = 0; m <= k; m++)
    {
        if (arr[m] < 100)
        {
            printf("%d\t", arr[m]);
        }
    }
}
