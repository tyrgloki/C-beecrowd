// Read two integer values.
// After this, calculate the product between them and store the result in a variable named PROD.
// Print the result like the example below.

#include <stdio.h>

int main() {

    int A, B, PROD;

    scanf("%d", &A);
    scanf("%d", &B);

    PROD = A * B;

    printf("PROD = %d\n", PROD);
    
    return 0;
}