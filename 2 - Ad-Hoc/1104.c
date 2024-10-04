#include <stdio.h>

#define TF 100000

int main() {
    int vetA[TF], vetB[TF], i, maior, contA, contB, qtA, qtB, carta;
    scanf("%d %d", &qtA, &qtB);
    while (qtA != 0 && qtB != 0) {
        for (i = 0; i < TF; i++) {
            vetA[i] = 0;
            vetB[i] = 0;
        }
        contA = 0;
        contB = 0;
        if (qtA > qtB)
            maior = qtA;
        else
            maior = qtB;
        for (i = 0; i < qtA; i++) {
            scanf("%d", &carta);
            vetA[carta]++;
        }
        for (i = 0; i < qtB; i++) {
            scanf("%d", &carta);
            vetB[carta]++;
        }
        for (i = 0; i < TF; i++) {
            if (vetA[i] != 0 && vetB[i] == 0)
                contA++;
            else if (vetB[i] != 0 && vetA[i] == 0)
                contB++;
        }
        if (contA < contB)
            printf("%d\n", contA);
        else
            printf("%d\n", contB);
        scanf("%d %d", &qtA, &qtB);
    }
}