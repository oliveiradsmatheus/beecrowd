#include<stdio.h>

#define TF 12

int main() {
    int linha, i, j;
    float num, matriz[TF][TF], soma = 0;
    char resp;
    scanf("%d %c", &linha, &resp);
    for (i = 0; i < TF; i++) {
        for (j = 0; j < TF; j++) {
            scanf("%f", &num);
            matriz[i][j] = num;
        }
    }
    for (i = 0; i < TF; i++)
        soma += matriz[linha][i];
    if (resp == 'S')
        printf("%.1f\n", soma);
    else if (resp == 'M')
        printf("%.1f\n", soma / TF);
}