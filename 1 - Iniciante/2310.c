#include <stdio.h>

int main(void) {
    char nome[50];
    int qtde, qts, qta, qtb, saq, atq, blo, totts = 0, totta = 0, tottb = 0, tots = 0, tota = 0, totb = 0;

    scanf("%d", &qtde);

    while (qtde) {
        getchar();
        scanf("%s", nome);

        scanf("%d %d %d", &qts, &qtb, &qta);
        scanf("%d %d %d", &saq, &blo, &atq);

        totts += qts;
        tots += saq;
        totta += qta;
        tota += atq;
        tottb += qtb;
        totb += blo;

        qtde--;
    }

    printf("Pontos de Saque: %.2f %%.\n", (float) tots / totts * 100);
    printf("Pontos de Bloqueio: %.2f %%.\n", (float) totb / tottb * 100);
    printf("Pontos de Ataque: %.2f %%.\n", (float) tota / totta * 100);
}