#include <stdio.h>

int main() {
    int ent, i, soma;
    scanf("%d", &ent);
    while (ent != 0) {
        soma = 0;
        for (i = ent; i <= ent + 9; i += 2) {
            if (i % 2 == 0)
                soma += i;
            else {
                i += 1;
                soma += i;
            }
        }
        printf("%d\n", soma);
        scanf("%d", &ent);
    }
}