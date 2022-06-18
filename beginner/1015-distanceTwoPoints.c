// Read the four values corresponding to the x and y axes of two points in the plane, p1 (x1, y1) 
// and p2 (x2, y2) and calculate the distance between them, showing four decimal places after the comma.

#include <stdio.h>
#include <math.h>

int main() {

    double x1, x2, y1, y2, distance;

    scanf("%lf %lf", &x1, &x2);
    scanf("%lf %lf", &y1, &y2);

    distance = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

    printf("%.4f\n", distance);

    return 0;
}