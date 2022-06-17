// Make a program that reads a seller's name, 
// his/her fixed salary and the sale's total made by himself/herself in the month (in money).
// Considering that this seller receives 15% over all products sold, 
// write the final salary (total) of this seller at the end of the month , with two decimal places.

#include <stdio.h>

void main() {

    char name[10];
    double salary, sold;

    scanf("%s", &name);
    scanf("%lf", &salary);
    scanf("%lf", &sold);

    salary = salary + (sold * 0.15);

    printf("TOTAL = R$ %.2f\n", salary);
}