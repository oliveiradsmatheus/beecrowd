#include <stdio.h>

int main(void) {
    int qtde, i = 0, dias;
    float sup;

    scanf("%d", &qtde);

    while (i < qtde) {
        scanf("%f", &sup);
        dias = 0;

        while (sup > 1) {
            sup /= 2;
            dias++;
        }

        printf("%d dias\n", dias);
        i++;
    }
}