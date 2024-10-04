#include <stdio.h>

int main() {
    int ent, i, num, vezes, j, soma;
    scanf("%d", &ent);
    for (i = 1; i <= ent; i++) {
        scanf("%d%d", &num, &vezes);
        soma = 0;
        for (j = num; j < num + (vezes * 2); j += 2) {
            if (j % 2 == 0) {
                j += 1;
                soma += j;
            } else
                soma += j;
        }
        printf("%d\n", soma);
    }
}