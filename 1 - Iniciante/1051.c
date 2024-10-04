#include <stdio.h>

int main() {
    float salario, imposto, diferenca, diferenca1;
    scanf("%f", &salario);
    if (salario >= 0 && salario <= 2000.00)
        printf("Isento\n");
    else {
        if (salario <= 3000)
            imposto = (salario - 2000) * .08;
        else if (salario <= 4500) {
            diferenca = salario - 3000;
            imposto = (salario - 2000 - diferenca) * .08 + diferenca * .18;
        } else {
            diferenca = salario - 3000;
            diferenca1 = diferenca - 1500;
            imposto = (salario - 2000 - diferenca) * .08 + (diferenca - diferenca1) * .18 + diferenca1 * .28;
        }

        printf("R$ %.2f\n", imposto);
    }
    return 0;
}