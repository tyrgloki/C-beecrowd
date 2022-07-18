#include <stdio.h>

int main() {

int spenttime, avgspeed, distance;
double fuelspent;

scanf("%d", &spenttime);
scanf("%d", &avgspeed);

distance = spenttime * avgspeed;
fuelspent = distance / 12;

printf("%.3f", fuelspent);

    return 0;
}