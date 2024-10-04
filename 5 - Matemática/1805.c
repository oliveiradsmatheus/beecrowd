#include <stdio.h>

int main(void) {
    long long int limiteinf, limitesup, i, soma = 0;

    scanf("%lld %lld", &limiteinf, &limitesup);

    for (i = limiteinf; i <= limitesup; i++)
        soma += i;

    printf("%lld\n", soma);
}