#include <stdio.h>

int main(void) {
    int num, i = 0, vet[100], menor;

    scanf("%d", &num);

    menor = 0;

    while (i < num) {
        scanf("%d", &vet[i]);

        if (vet[i] < vet[menor])
            menor = i;

        i++;
    }

    printf("%d\n", menor + 1);

    return 0;
}