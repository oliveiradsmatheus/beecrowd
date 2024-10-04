#include<stdio.h>

#define tf 12

int main() {
    int i, j, cont = 0;
    double matriz[tf][tf], soma = 0, fim = 11;
    char resp;
    scanf(" %c", &resp);
    for (i = 0; i < tf; i++)
        for (j = 0; j < tf; j++)
            scanf("%lf", &matriz[i][j]);
    for (i = 0; i < 5; i++) {
        for (j = i + 1; j < fim; j++) {
            soma += matriz[i][j];
            cont++;
        }
        fim--;
    }
    if (resp == 'S')
        printf("%.1lf\n", soma);
    else if (resp == 'M')
        printf("%.1lf\n", soma / cont);
}