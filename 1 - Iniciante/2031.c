#include <stdio.h>
#include <string.h>

int main() {
    int i = 0, qtde;
    char j1[10], j2[10];

    scanf("%d", &qtde);
    while (i < qtde) {
        scanf(" %s", j1);
        scanf(" %s", j2);

        if (strcmp(j1, j2) == 0) {
            if (strcmp(j1, "ataque") == 0)
                printf("Aniquilacao mutua\n");
            else {
                if (strcmp(j1, "papel") == 0)
                    printf("Ambos venceram\n");
                else
                    printf("Sem ganhador\n");
            }
        } else {
            if (strcmp(j1, "ataque") == 0)
                printf("Jogador 1 venceu\n");
            else {
                if (strcmp(j2, "ataque") == 0)
                    printf("Jogador 2 venceu\n");
                else {
                    if (strcmp(j1, "papel") == 0)
                        printf("Jogador 2 venceu\n");
                    else {
                        if (strcmp(j2, "papel") == 0)
                            printf("Jogador 1 venceu\n");
                    }
                }
            }
        }

        i++;
    }
}