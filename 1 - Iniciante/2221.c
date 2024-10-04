#include <stdio.h>

int main(void) {
    int qtde, bonus, ValorG, ValorD, AtG, AtD, DefD, DefG, LevG, LevD;

    scanf("%d", &qtde);

    while (qtde) {
        scanf("%d", &bonus);
        scanf("%d %d %d", &AtD, &DefD, &LevD);
        scanf("%d %d %d", &AtG, &DefG, &LevG);

        ValorD = (AtD + DefD) / 2;
        ValorG = (AtG + DefG) / 2;

        if (LevD % 2 == 0)
            ValorD += bonus;
        if (LevG % 2 == 0)
            ValorG += bonus;

        if (ValorG == ValorD)
            printf("Empate\n");
        else if (ValorG > ValorD)
            printf("Guarte\n");
        else
            printf("Dabriel\n");

        qtde--;
    }

    return 0;
}