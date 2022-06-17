// Make a program that calculates and shows the volume of a sphere being provided the value of its radius (R) .
// The formula to calculate the volume is: (4/3) * pi * R3. Consider (assign) for pi the value 3.14159.

#include <stdio.h>
#include <math.h>

int main() {

    double R, volum;

    scanf("%lf", &R);

    volum = (4.0 / 3) * 3.14159 * pow(R, 3);

    printf("VOLUME = %.3f\n", volum);
    return 0; 
}