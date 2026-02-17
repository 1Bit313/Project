#include <stdio.h>
const int n = 20;
int input_Array(int arrayid[], int n);
int sortarray(int arrayid[], int n);
int printarray(int arrayid[], int n);

int main()
{
    int num;
    int arrayid[n];
    input_Array(arrayid, n);
    sortarray(arrayid, n);
    printarray(arrayid, n);
}


int input_Array(int arrayid[], int n)
{
    int num;
    for (int i = 0; i < n; i++)
    {
        printf("Enter your ID(%d): ", i+1);
        scanf("%d", &num);
        arrayid[i] = num;
    }
}


int sortarray(int arrayid[], int n)
{
    int min, temp;
    for(int i = 0; i <= n; i++)
    {
        min = arrayid[i];
        for (int j = i+1; j < n; j++)
        {
            if(arrayid[j] < min)
            {
                min = arrayid[j];
                temp = arrayid[i];
                arrayid[i] = min;
                arrayid[j] = temp;
            }
        }
        arrayid[i] = min;
    }
}


int printarray(int arrayid[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d\t", arrayid[i]);
    }
}
