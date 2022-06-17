// Read four integer values named A, B, C and D.
// Calculate and print the difference of product A and B by the product of C and D (A * B - C * D).

#include <stdio.h>

void main() {

    int A, B, C, D, diff;

    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);

    diff = A * B - C * D;

    printf("DIFERENCA = %d\n", diff);
    
}