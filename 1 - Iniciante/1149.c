#include<stdio.h>

int main() {
    int num, b, i, soma = 0;
    scanf("%d %d", &num, &b);
    while (b <= 0) {
        scanf("%d", &b);
    }
    for (i = 1; i <= b; i++) {
        soma += num;
        num++;
    }
    printf("%d\n", soma);
}