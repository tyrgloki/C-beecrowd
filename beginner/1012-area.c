// Make a program that reads three floating point values: A, B and C. Then, calculate and show:
// a) the area of the rectangled triangle that has base A and height C.
// b) the area of the radius's circle C. (pi = 3.14159)
// c) the area of the trapezium which has A and B by base, and C by height.
// d) the area of ​​the square that has side B.
// e) the area of the rectangle that has sides A and B.

int main() {

    double A, B, C;

    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);

    printf("TRIANGULO: %.3f\n", A * C / 2);
    printf("CIRCULO: %.3f\n", 3.14159 * (C * C));
    printf("TRAPEZIO: %.3f\n", (A + B) / 2 * C);
    printf("QUADRADO: %.3f\n", B * B);
    printf("RETANGULO: %.3f\n", A * B);
    
    return 0;
}