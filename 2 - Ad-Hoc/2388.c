#include <stdio.h>

int main() {
    int ent, i, t, v, soma = 0;
    scanf("%d", &ent);
    for (i = 1; i <= ent; i++) {
        scanf("%d%d", &t, &v);
        soma += t * v;
    }
    printf("%d\n", soma);
}