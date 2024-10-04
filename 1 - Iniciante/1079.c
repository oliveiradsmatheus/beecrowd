#include <stdio.h>

int main() {
    int ent, i = 1;
    float valor1, valor2, valor3, media;
    scanf("%d", &ent);
    while (i <= ent) {
        scanf("%f%f%f", &valor1, &valor2, &valor3);
        media = (valor1 * 2 + valor2 * 3 + valor3 * 5) / (2 + 3 + 5);
        printf("%.1f\n", media);
        i++;
    }
    return 0;
}