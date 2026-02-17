#include <stdio.h>
#include <string.h>
char delcharinstr(char str[], int N);
const int N = 50;
int main()
{
    char str[N];
    gets(str);
    delcharinstr(str, N);
}

char delcharinstr(char str[], int N)
{
    for(int i = 0; i <= N; i++)
    {
        for(int j = 0; j <= N; j++)
            if (str[i] == str[j])
            {
                strcpy(&str[j], &str[j + 1]);
            }
    }
    puts(str);
}
