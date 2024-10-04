#include <stdio.h>
#include <math.h>

int main() {
    int lado1, lado2, lador, area;
    float porc, tam;

    scanf("%d", &lado1);
    while (lado1 > 0) {
        scanf("%d %f", &lado2, &porc);
        area = lado1 * lado2;
        tam = area / (porc / 100);
        lador = sqrt(tam);
        printf("%d\n", lador);
        scanf("%d", &lado1);
    }
}