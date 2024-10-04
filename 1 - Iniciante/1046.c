#include <stdio.h>

int main() {
    int entrada, saida, tempo;
    scanf("%d%d", &entrada, &saida);
    if (entrada == saida)
        printf("O JOGO DUROU 24 HORA(S)\n");
    else if (entrada > saida) {
        tempo = (saida + 24) - entrada;
        printf("O JOGO DUROU %d HORA(S)\n", tempo);
    } else {
        tempo = saida - entrada;
        printf("O JOGO DUROU %d HORA(S)\n", tempo);
    }
    return 0;
}