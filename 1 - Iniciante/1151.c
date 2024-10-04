#include <stdio.h>

int main() {
    int ent, n1 = 0, n2 = 1, aux, i = 1;
    scanf("%d", &ent);
    printf("%d", n1);
    printf(" %d", n2);
    while (i <= ent - 2) {
        aux = n1 + n2;
        printf(" %d", aux);
        n1 = n2;
        n2 = aux;
        i++;
    }
    printf("\n");

    return 0;
}