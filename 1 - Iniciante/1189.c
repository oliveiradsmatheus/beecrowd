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
    for (i = 1; i < 6; i++)
        for (j = 0; j < i; j++) {
            soma += matriz[i][j];
            cont++;
        }
    for (i = 10; i > 5; i--)
        for (j = 0; j < tf - i - 1; j++) {
            soma += matriz[i][j];
            cont++;
        }
    if (resp == 'S')
        printf("%.1f\n", soma);
    else if (resp == 'M')
        printf("%.1f\n", soma / cont);
}