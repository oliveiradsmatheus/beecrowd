#include <stdio.h>

int main() {
    float a, b, c, aux;
    scanf("%f%f%f", &a, &b, &c);
    if (a > b && a > c)
        a = a;
    else if (b > a && b > c) {
        aux = a;
        a = b;
        b = aux;
    } else if (c > a && c > b) {
        aux = a;
        a = c;
        c = aux;
    }
    if (a >= (b + c))
        printf("NAO FORMA TRIANGULO\n");
    else {
        if ((a * a) == (b * b + c * c))
            printf("TRIANGULO RETANGULO\n");
        if ((a * a) > (b * b + c * c))
            printf("TRIANGULO OBTUSANGULO\n");
        if ((a * a) < (b * b + c * c))
            printf("TRIANGULO ACUTANGULO\n");
        if (a == b && a == c)
            printf("TRIANGULO EQUILATERO\n");
        else if (a == b || a == c || b == c)
            printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}