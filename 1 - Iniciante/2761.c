#include <stdio.h>

int main(void) {
    int inteiro;
    float real;
    char carac, frase[50];

    scanf("%d %f %c %[^\n]", &inteiro, &real, &carac, frase);

    printf("%d%f%c%s\n", inteiro, real, carac, frase);
    printf("%d\t%f\t%c\t%s\n", inteiro, real, carac, frase);
    printf("%10d%10f%10c%10s\n", inteiro, real, carac, frase);

    return 0;
}