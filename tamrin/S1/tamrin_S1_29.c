// mohasebeh tedad molkolhay Ab
#include <stdio.h>

int main()
{
    double liter;
    double molecules;

    // daryaft hajm ab
    printf("hajm ab ra be liter vared kon: ");
    scanf("%lf", &liter);

    // mohasebeh tedad molekul ha
    molecules = (liter * 9.5e2) / (3.0e-23);

    // namayesh natije
    printf("tedad molekul haye ab: %e\n", molecules);

    return 0;
}
