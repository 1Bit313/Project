// daryaft adad az vorodi dar mabna a, tabdil beh mabna b
#include <stdio.h>
#include <windows.h> // estefadeh baray sleeo dar barnameh

int main()
{
    // num = adad daryafty az vorodi dar mabna 10
    int num;
    printf("yek adad dar maban 10 vared kon: ");
    scanf("%d", &num);

    printf("dar hal tabdil dar mabna 16...");
    Sleep(5000);
    // tabdil adad dar mabna 16 ba estefadeh az character format
    printf("\n(%d)(10) = %X(16)", num, num);

    return 0;
}
