#include<stdio.h>

#define TF 12

int main() {
    int i, j;
    float matriz[TF][TF], num, soma=0, cont = 0;
    char resp;
    scanf(" %c", &resp);
    for (i = 0; i < TF; i++)
        for (j = 0; j < TF; j++) {
            scanf("%f", &num);
            matriz[i][j] = num;
        }
    for (i = 1; i < TF; i++)
        for (j = 0; j < i; j++) {
            soma += matriz[i][j];
            cont++;
        }
    if (resp == 'S')
        printf("%.1f\n", soma);
    else if (resp == 'M')
        printf("%.1f\n", soma / cont);
}