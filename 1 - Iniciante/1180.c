#include<stdio.h>

#define tf 1000

int main() {
    int num[tf], menor = 0, posicao, ent, i;
    scanf("%d", &ent);
    for (i = 0; i < ent; i++) {
        scanf("%d ", &num[i]);
        if (menor == 0) {
            menor = num[i];
            posicao = i;
        } else if (num[i] < menor) {
            menor = num[i];
            posicao = i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n", menor, posicao);
}