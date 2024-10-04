#include <stdio.h>

int main() {
    float preco, novopreco, porc;

    scanf("%f %f", &preco, &novopreco);
    porc = ((novopreco - preco) * 100) / preco;

    printf("%.2f%%\n", porc);

    return 0;
}