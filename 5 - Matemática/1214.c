#include <stdio.h>

int main(void) {
    int i, casos, turma, qtAcima;
    float notas[1001], media, percAcima;

    scanf("%d", &casos);
    while (casos--) {
        scanf("%d", &turma);
        media = 0;
        for (i = 0; i < turma; i++) {
            scanf("%f", &notas[i]);
            media += notas[i];
        }
        media /= turma;
        qtAcima = 0;
        for (i = 0; i < turma; i++) {
            if (notas[i] > media) {
                qtAcima++;
            }
        }
        percAcima = (float)qtAcima/turma*100;
        printf("%.3f%%\n", percAcima);
    }
}