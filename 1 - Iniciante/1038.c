#include <stdio.h>

int main() {
    int cod, quant;
    float preco;

    scanf("%d%d", &cod, &quant);
    switch (cod) {
        case 1:
            preco = quant * 4.00;
            break;
        case 2:
            preco = quant * 4.50;
            break;
        case 3:
            preco = quant * 5.00;
            break;
        case 4:
            preco = quant * 2.00;
            break;
        case 5:
            preco = quant * 1.50;
            break;
    }
    printf("Total: R$ %.2f\n", preco);


    return 0;
}