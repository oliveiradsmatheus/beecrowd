#include <stdio.h>

int main() {
    int peca1, numero1, peca2, numero2;
    double vunit1, vunit2, pagto;
    scanf("%d%d%lf", &peca1, &numero1, &vunit1);
    scanf("%d%d%lf", &peca2, &numero2, &vunit2);

    pagto = numero1 * vunit1 + numero2 * vunit2;
    printf("VALOR A PAGAR: R$ %.2lf\n", pagto);

    return 0;
}