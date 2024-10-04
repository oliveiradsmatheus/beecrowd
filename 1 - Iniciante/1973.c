#include <stdio.h>

#define TF 1000000

int main() {
    int qtde, i, j = 0;
    long long int carneiro[TF], mov, totcarneiro = 0;

    scanf("%d", &qtde);

    for (i = 0; i < qtde; i++) {
        scanf("%lld", &carneiro[i]);
        totcarneiro += carneiro[i];
    }

    i = 0;

    while (i >= 0 && i < qtde) {
        mov = carneiro[i];
        if (carneiro[i] > 0) {
            carneiro[i]--;
            totcarneiro--;
        }
        if (i == j)
            j++;
        if (mov % 2 != 0)
            i++;
        else
            i--;
    }

    printf("%d %lld\n", j, totcarneiro);
}