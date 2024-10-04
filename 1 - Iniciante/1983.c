#include <stdio.h>

int main(void) {
    int qtde, i = 0, mat, matmaior = 0;
    float nota, maior = 0;

    scanf("%d", &qtde);

    while (i < qtde) {
        scanf("%d %f", &mat, &nota);

        if (nota > maior) {
            maior = nota;
            matmaior = mat;
        }

        i++;
    }

    if (maior >= 8)
        printf("%d\n", matmaior);
    else
        printf("Minimum note not reached\n");

    return 0;
}