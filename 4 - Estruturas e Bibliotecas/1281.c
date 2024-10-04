#include <stdio.h>
#include <string.h>

int main(void) {
    int qtde, qtProd, qtProdComp, qtComp, pos;
    char Prod[100][51], TL, ProdComp[51];
    float Preco[100], ValorTot;

    scanf("%d", &qtde);

    while (qtde) {
        TL = 0;
        ValorTot = 0;

        scanf("%d", &qtProd);
        while (qtProd) {
            scanf("%s %f", Prod[TL], &Preco[TL]);
            TL++;
            qtProd--;
        }

        scanf("%d", &qtProdComp);
        while (qtProdComp) {
            scanf("%s %d", ProdComp, &qtComp);

            pos = 0;
            while (pos < TL && strcmp(ProdComp, Prod[pos]) != 0)
                pos++;
            if (pos < TL)
                ValorTot += Preco[pos] * qtComp;


            qtProdComp--;
        }

        printf("R$ %.2f\n", ValorTot);

        qtde--;
    }

    return 0;
}