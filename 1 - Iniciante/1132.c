#include<stdio.h>

int main() {
    int x, y, soma = 0, aux;
    scanf("%d%d", &x, &y);
    if (x < y) {
        aux = x;
        x = y;
        y = aux;
    }
    while (y <= x) {
        if (y % 13 != 0)
            soma += y;
        y++;
    }
    printf("%d\n", soma);
    return 0;
}