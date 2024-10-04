#include <stdio.h>

int main() {
    int alg, i;
    long long int soma;
    char num[10];

    while (scanf("%d %s", &alg, num) != EOF) {
        soma = 0;
        i = 0;
        while (i < alg) {
            soma += num[i] - 48;
            i++;
        }
        if (soma % 3 == 0)
            printf("%lld sim\n", soma);
        else
            printf("%lld nao\n", soma);
    }
}