#include <stdio.h>
#include <math.h>

int main() {
    int dias, i, saldo, mov, menorsaldo = pow(2, 30);
    scanf("%d%d", &dias, &saldo);
    for (i = 1; i <= dias; i++) {
        scanf("%d", &mov);
        saldo += mov;
        if (saldo < menorsaldo)
            menorsaldo = saldo;
    }
    printf("%d\n", menorsaldo);
}