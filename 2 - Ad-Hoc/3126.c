#include <stdio.h>

int main() {
    int i, qt, auxcand, cont = 0;

    scanf("%d", &qt);
    i = 0;
    while (i < qt) {
        scanf("%d", &auxcand);
        if (auxcand == 1)
            cont++;
        i++;
    }
    printf("%d\n", cont);
}