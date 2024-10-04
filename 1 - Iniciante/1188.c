#include<stdio.h>

#define TF 12

int main() {
    int i, j, cont = 0;
    double matriz[TF][TF], inicio, fim, soma = 0;
    char resp;
    scanf(" %c", &resp);
    for (i = 0; i < TF; i++)
        for (j = 0; j < TF; j++)
            scanf("%lf", &matriz[i][j]);
    inicio = 1;
    fim = 10;
    for (i = TF - 1; i > 6; i--) {
        for (j = inicio; j <= fim; j++)
            soma += matriz[i][j];
        cont++;
        inicio++;
        fim--;
    }
    if (resp == 'S')
        printf("%.1lf\n", soma);
    else if (resp == 'M')
        printf("%.1lf\n", soma / cont);
}