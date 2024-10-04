#include <stdio.h>

int main() {
    int ent, i = 1, maior = 0, posicao;
    scanf("%d", &ent);
    while (i <= 100) {
        if (ent > maior) {
            maior = ent;
            posicao = i;
        }
        scanf("%d", &ent);
        i++;
    }
    printf("%d\n%d\n", maior, posicao);

    return 0;
}