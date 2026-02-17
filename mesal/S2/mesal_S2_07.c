// khord kardan yek sekeh 100 rialy be chand sekeh 50, 20, 10, 5, 2 rialy
#include <stdio.h>

int main()
{
    int sum=0;
    for (int i2=0; i2<=50; i2++)
        for(int i5=0; i5<=20; i5++)
            for(int i10=0; i10<=10; i10++)
                for(int i20=0; i20<=5; i20++)
                    for (int i50 = 0; i50<=2; i50++)
                    {
                        // jam sekeh ha
                        sum=(i2*2)+(i5*5)+(i10*10)+(i20*20)+(i50*50);
                        if(sum==100)
                        {
                            printf("2 rialy: %d\n5 rialy: %d\n10 rialy: %d\n20 rialy: %d\n50 rialy: %d", i2, i5, i10, i20, i50);
                            printf("\n\n");
                        }
                    }
    return 0;
}
