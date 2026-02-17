#include <stdio.h>
void fun(char ch, int n, int x);

int main()
{
    int n, x;
    char ch;
    printf("chy chap konam? ");
    ch = getchar();
    printf("chand bar chap konam? ");
    scanf("%d", &x);
    printf("chand rdif chap konam? ");
    scanf("%d", &n);
    fun(ch, n, x);
}
void fun(char ch, int n, int x)
{
    for(int i = 0; i <=n ; i++)
    {
        for (int j = 0; j <= x; j++)
        {
            printf("%c", ch);
        }
        putchar('\n');
    }
}
