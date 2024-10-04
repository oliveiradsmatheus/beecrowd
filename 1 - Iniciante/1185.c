#include<stdio.h>

#define tf 12

int main() {
    int i, j, cont = 0;
    float matriz[tf][tf], soma = 0;
    char resp;
    scanf(" %c", &resp);
    for (i = 0; i < tf; i++)
        for (j = 0; j < tf; j++)
            scanf("%f", &matriz[i][j]);
    for (i = 0; i < tf - 1; i++)
        for (j = 0; j < tf - 1 - i; j++) {
            soma += matriz[i][j];
            cont++;
        }
    if (resp == 'S')
        printf("%.1f\n", soma);
    else if (resp == 'M')
        printf("%.1f\n", soma / cont);
}