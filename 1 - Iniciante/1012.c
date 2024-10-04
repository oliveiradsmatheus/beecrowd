#include <stdio.h>

int main() {
    double A, B, C, areat, areac, pi, areatpz, areaq, arearet;
    scanf("%lf%lf%lf", &A, &B, &C);
    pi = 3.14159;
    areat = A * C / 2;
    areac = pi * (C * C);
    areatpz = (A + B) * C / 2;
    areaq = B * B;
    arearet = A * B;
    printf("TRIANGULO: %.3lf\n", areat);
    printf("CIRCULO: %.3lf\n", areac);
    printf("TRAPEZIO: %.3lf\n", areatpz);
    printf("QUADRADO: %.3lf\n", areaq);
    printf("RETANGULO: %.3lf\n", arearet);

    return 0;
}