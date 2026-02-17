// drayaft do adad az vorodi, yek operator az vorodi, mohasebeh
#include <stdio.h>
int main()
{
    // tarif moteghayer num1, num2 = adad vorody, flag = shart edameh halgheh
    int num1, num2;
    int flag = 1;
    char op;

    while(flag)
    {
        // daryaft vorody ha
        printf("\nEnter num1: ");
        scanf("%d", &num1);
        printf("Enter num2: ");
        scanf("%d", &num2);

        // daryaft operator
        printf("Enter operator : ");
        op = getche();
        // barresy operator
        switch(op)
        {
            case '+' :
                printf("\n jam = %d", num1 + num2);
                break;
            case '-' :
                printf("\n tafrigh = %d", num1 - num2);
                break;
            // ha do do vrody ra ghabol mi konad va javab mi dahad
            case '/' :
            case '\\' :
                printf("\n taghsim = %5.2f", (float)num1 / num2);
                break;
            case '*' :
                printf("\n zarb = %d", num1 * num2);
                break;
            case '%' :
                printf("\n baghymandeh = %d", num1 % num2);
                break;
            default:
                printf("\n Operator vared shodeh dorost nist.");
                flag = 0;
        }//end of switch

    }//end of while
 return 0;

}
