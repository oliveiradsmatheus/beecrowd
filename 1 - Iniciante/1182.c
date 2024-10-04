#include<stdio.h>

#define tf 12

int main() {
    int coluna, i, j;
    float matriz[tf][tf], soma = 0, media = 0, num;
    char operacao;
    scanf("%d %c", &coluna, &operacao);
    for (i = 0; i < tf; i++) {
        for (j = 0; j < tf; j++) {
            scanf("%f", &num);
            matriz[i][j] = num;
        }
    }
    for (i = 0; i < tf; i++)
        soma += matriz[i][coluna];
    if (operacao == 'S')
        printf("%.1f\n", soma);
    else if (operacao == 'M') {
        media = soma / tf;
        printf("%.1f\n", media);
    }
}