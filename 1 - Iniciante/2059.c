#include<stdio.h>

int main(void) {
    int escj1, valor1, valor2, roubo, acusa, numero;

    scanf("%d %d %d %d %d", &escj1, &valor1, &valor2, &roubo, &acusa);
    numero = valor1 + valor2;

    if (roubo == 1 && acusa == 1)
        printf("Jogador 2 ganha!\n");
    else if (roubo == 1 || acusa == 1)
        printf("Jogador 1 ganha!\n");
    else if (numero % 2 == 0)
        if (escj1 == 1)
            printf("Jogador 1 ganha!\n");
        else
            printf("Jogador 2 ganha!\n");
    else if (escj1 == 1)
        printf("Jogador 2 ganha!\n");
    else
        printf("Jogador 1 ganha!\n");

    return 0;
}