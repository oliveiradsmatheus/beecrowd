#include<stdio.h>

#define tf 12

int main() {
    int i, j, cont = 0, inicio = 7;
    double matriz[tf][tf], soma = 0;
    char resp;
    scanf(" %c", &resp);
    for (i = 0; i < tf; i++)
        for (j = 0; j < tf; j++)
            scanf("%lf", &matriz[i][j]);
    for (i = 1; i < 6; i++)
        for (j = tf - i; j < tf; j++) {
            soma += matriz[i][j];
            cont++;
        }
    for (i = 6; i < 11; i++) {
        for (j = inicio; j < tf; j++) {
            soma += matriz[i][j];
            cont++;
        }
        inicio++;
    }
    if (resp == 'S')
        printf("%.1lf\n", soma);
    else if (resp == 'M')
        printf("%.1lf\n", soma / cont);
}