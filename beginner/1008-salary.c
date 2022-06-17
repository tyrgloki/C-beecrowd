// Write a program that reads an employee's number, his/her worked hours number in a month and the amount he received per hour.
// Print the employee's number and salary that he/she will receive at end of the month, with two decimal places. 

#include <stdio.h>

void main() {

    int employeNumber, hoursWorked;
    float amountPerHour, salary;

    scanf("%d", &employeNumber);
    scanf("%d", &hoursWorked);
    scanf("%f", &amountPerHour);

    salary = hoursWorked * amountPerHour;

    printf("NUMBER = %d\n", employeNumber);
    printf("SALARY = U$ %.2f\n", salary);
}