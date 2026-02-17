// makos kardan adad ashary ba resteh
#include <stdio.h>
int main()
{
    char ch[30];
    scanf("%s", &ch);

    for(int i = 30; i >= 0; i--)
    {
        if(ch[i] >= 48 && ch[i] <= 57 || ch[i] == '.')
            printf("%c", ch[i]);
    }
}
