#include <stdio.h>

int main() {
    char VENDEDOR;
    double SALARIO, MVENDAS, TOTAL;
    scanf("%s%lf%lf", &VENDEDOR, &SALARIO, &MVENDAS);
    TOTAL = MVENDAS * 0.15 + SALARIO;
    printf("TOTAL = R$ %.2lf\n", TOTAL);
    return 0;
}