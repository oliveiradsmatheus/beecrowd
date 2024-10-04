#include <stdio.h>

int main(void) {
    double qtcc, qtpessoas, media;

    scanf("%lf %lf", &qtcc, &qtpessoas);

    media = qtcc / qtpessoas;

    printf("%.2f\n", media);

    return 0;
}