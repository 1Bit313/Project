// estefadeh az moteghayer ham nam local, global
#include <stdio.h>
#include <conio.h>

int x; // x = global
// prototype function func1, func2
void func1(void);
void func2(void);

int main()
{
    x = 100; // x = global
    // farakhany tabe
    func1();
    func2();

    printf("\n in main x is : %d", x);

    return 0;
}


void func1(void)
{
    printf("\n in func1 x is : %d \n", x); // x = global
}


void func2(void)
{
    int x; // x = local
    printf(" in func2 x changes:");
    for(x = 1; x < 6; x ++)
    printf(" x = %d ", x) ;
}
