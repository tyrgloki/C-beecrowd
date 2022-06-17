// In this problem, the task is to read a code of a product 1, the number of units of product 1, º
// the price for one unit of product 1, the code of a product 2, 
// the number of units of product 2 and the price for one unit of product 2.
// After this, calculate and show the amount to be paid.

#include <stdio.h>

void main() {

    int productID1, productID2, productUnit1, productUnit2;
    float productPrice1, productPrice2, total;

    scanf("%d %d %f", &productID1, &productUnit1, &productPrice1);
    
    scanf("%d %d %f", &productID2, &productUnit2, &productPrice2);
    
    total = productUnit1 * productPrice1 + productUnit2 * productPrice2;

    printf("VALOR A PAGAR: R$ %.2f\n", total);
}