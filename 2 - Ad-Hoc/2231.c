#include<stdio.h>

#define TF 10001

int main() {
    int qtde, intv, temp[TF], i, j, soma = 0, media, cont, maior, inicio, menor, teste = 0;
    scanf("%d %d", &qtde, &intv);
    while (qtde != 0 && intv != 0) {
        for (i = 0; i < qtde; i++)
            scanf("%d", &temp[i]);
        maior = -200;
        menor = 200;
        inicio = 0;
        for (i = 0; i <= qtde - intv; i++) {
            soma = 0;
            cont = 0;
            for (j = inicio; j < inicio + intv; j++) {
                soma += temp[j];
                cont++;
            }
            inicio++;
            media = soma / cont;
            if (media > maior)
                maior = media;
            if (media < menor)
                menor = media;
        }
        printf("Teste %d\n", teste + 1);
        printf("%d %d\n\n", menor, maior);
        scanf("%d %d", &qtde, &intv);
        teste++;
    }
}