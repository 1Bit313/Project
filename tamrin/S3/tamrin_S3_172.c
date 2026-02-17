#include <stdio.h>
void print_char_in_columns(char , int, int);

int main()
{
    char input_char;
    int start_col, end_col;

    printf("Enter your character: ");
    scanf(" %c", &input_char);

    printf("(i): ");
    scanf("%d", &start_col);

    printf("(j): ");
    scanf("%d", &end_col);


    printf("\n--- Khorojy --- \n");
    print_char_in_columns(input_char, start_col, end_col);
    printf("--------------\n");

    return 0;
}
void print_char_in_columns(char character, int i, int j)
{
    if (i > j || i < 1)
    {
        printf("\n khata maghadir na motabar hastand \n");
        return;
    }

    for (int k = 1; k < i; k++)
    {
        printf(" ");
    }

    int count = j - i + 1;
    for (int k = 0; k < count; k++)
    {
        printf("%c", character);
    }

    printf("\n");
}
