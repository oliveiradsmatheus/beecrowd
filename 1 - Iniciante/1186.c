#include<stdio.h>

#define TF 12

int main() {
    int i, j, inicio = 11;
    float num, matriz[TF][TF], soma = 0, cont = 0;
    char oprc;
    scanf(" %c", &oprc);
    for (i = 0; i < TF; i++)
        for (j = 0; j < TF; j++) {
            scanf("%f", &num);
            matriz[i][j] = num;
        }
    for (i = 1; i < TF; i++) {
        for (j = inicio; j <= TF - 1; j++) {
            soma += matriz[i][j];
            cont++;
        }
        inicio--;
    }
    if (oprc == 'S')
        printf("%.1f\n", soma);
    else if (oprc == 'M')
        printf("%.1f\n", soma / cont);
}