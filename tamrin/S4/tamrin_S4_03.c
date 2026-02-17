#include <stdio.h>
#include <string.h>

const int n = 5;
int input_Array(int array[], int n);
int sortarray(int array[], int n);
int printarray(int array[], int n);
int cat(int array1[], int array2[], int n);

int main()
{
    int array1[n], array2[n];
    input_Array(array1, n);
    input_Array(array2, n);
    sortarray(array1, n);
    sortarray(array2, n);
    cat(array1, array2, n);
}


int input_Array(int array[], int n)
{
    int num;
    for (int i = 0; i < n; i++)
    {
        printf("Enter number(%d): ", i+1);
        scanf("%d", &num);
        array[i] = num;
    }
}


int sortarray(int array[], int n)
{
    int temp;
    for(int i = 0; i < n; i++)
        for(int j = 0; j <= i; j++)
            if(array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
}

int printarray(int array[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d\t", array[i]);
    }
}

