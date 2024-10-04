#include <stdio.h>

int main() {
    int i = 1, quantp = 0;
    float num, somapositivo = 0, media;
    while (i <= 6) {
        scanf("%f", &num);
        if (num > 0) {
            quantp++;
            somapositivo += num;
        }
        i++;
    }
    media = somapositivo / quantp;
    printf("%d valores positivos\n%.1f\n", quantp, media);
    return 0;
}