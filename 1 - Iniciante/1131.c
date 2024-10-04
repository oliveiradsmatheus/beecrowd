#include<stdio.h>

int main() {
    int ent = 1, golinter, golgremio, vitinter = 0, vitgremio = 0, empate = 0, grenais = 0;
    while (ent == 1) {
        scanf("%d%d", &golinter, &golgremio);
        if (golinter == golgremio)
            empate++;
        else if (golinter > golgremio)
            vitinter++;
        else
            vitgremio++;
        grenais++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &ent);
    }
    printf("%d grenais\n", grenais);
    printf("Inter:%d\n", vitinter);
    printf("Gremio:%d\n", vitgremio);
    printf("Empates:%d\n", empate);
    if (vitinter == vitgremio)
        printf("Nao houve vencedor\n");
    else if (vitinter > vitgremio)
        printf("Inter venceu mais\n");
    else
        printf("Gremio venceu mais\n");
    return 0;
}