// Make a program that reads 3 integer values and present the greatest one followed
// by the message "eh o maior". Use the following formula: MAIORAB = (a+b+abs(a-b)) / 2

#include <stdio.h>
#include <math.h>

int main() {

    int A, B, C, MAIOR;
    
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    
    MAIOR = (A + B + fabs(A - B)) / 2;
    MAIOR = (MAIOR + C + fabs(MAIOR - C)) / 2;

    printf("%d eh o maior\n", MAIOR);

    return 0;
}