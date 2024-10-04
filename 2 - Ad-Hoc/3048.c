#include <stdio.h>

int main() {
    int ent, i, num, aux = 0, soma = 0;
    scanf("%d", &ent);
    for (i = 1; i <= ent; i++) {
        scanf("%d", &num);
        if (aux != num)
            soma++;
        aux = num;
    }
    printf("%d\n", soma);
}