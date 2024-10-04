#include <stdio.h>

int main() {
    int percent;
    double salario, reaj, novo;
    scanf("%lf", &salario);
    if (salario >= 0 && salario <= 400)
        reaj = salario * .15;
    else if (salario <= 800)
        reaj = salario * .12;
    else if (salario <= 1200)
        reaj = salario * .1;
    else if (salario <= 2000)
        reaj = salario * .07;
    else
        reaj = salario * .04;
    novo = salario + reaj;
    percent = reaj * 100 / salario;
    printf("Novo salario: %.2lf\n", novo);
    printf("Reajuste ganho: %.2lf\n", reaj);
    printf("Em percentual: %.d %%\n", percent);
    return 0;
}