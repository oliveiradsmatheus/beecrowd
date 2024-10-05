#include <stdio.h>

int main(void) {
    int i, qtBotas, qtde, tam, botasE[31], botasD[31];
    char lado;

    while (scanf("%d", &qtBotas) != EOF) {
        qtde = 0;
        for (i = 0; i < 31; i++) {
            botasE[i] = 0;
            botasD[i] = 0;
        }
        while (qtBotas--) {
            scanf("%d %c", &tam, &lado);
            if (lado == 'E') {
                if (botasD[tam - 30]) {
                    botasD[tam - 30]--;
                    qtde++;
                } else
                    botasE[tam - 30]++;
            } else {
                if (botasE[tam - 30]) {
                    qtde++;
                    botasE[tam - 30]--;
                } else
                    botasD[tam - 30]++;
            }
        }
        printf("%d\n", qtde);
    }
    return 0;
}