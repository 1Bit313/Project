#include <stdio.h>
void input(void);
float mohasebeh(float, float);
float output(float, float, float, float);

int main()
{
    input();
}

void input(void)
{
    float fot, inch;
    printf("fasele bar asas 'fot' vared konid: ");
    scanf("%f", &fot);
    printf("fasele bar asas 'fot' vared konid: ");
    scanf("%f", &inch);
    mohasebeh(fot, inch);
}

float mohasebeh(float fot, float inch)
{
    float f_meter, f_cmeter, i_meter, i_cmeter;
    f_meter = fot * 0.3048;
    f_cmeter = f_meter * 100;
    i_meter = (inch / 12) * 0.3048;
    i_cmeter = i_meter * 100;
    output(f_meter, f_cmeter, i_meter, i_cmeter);
}

float output(float f_meter, float f_cmeter, float i_meter, float i_cmeter)
{
    printf("f_meter = %-10.4ff_cmeter = %-10.4fi_meter = %-10.4fi_cmeter = %-10.4f", f_meter, f_cmeter, i_meter, i_cmeter);
}
