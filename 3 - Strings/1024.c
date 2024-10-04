#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int num, i = 0, j, k, aux;
    char texto[1100];

    scanf("%d", &num);

    while (i < num) {
        scanf(" %[^\n]", texto);

        for (j = 0; j < strlen(texto); j++)
            if ((texto[j] >= 65 && texto[j] <= 90) || (texto[j] >= 97 && texto[j] <= 122))
                texto[j] += 3;

        for (k = 0, j = strlen(texto) - 1; k < strlen(texto) / 2; k++, j--) {
            aux = texto[k];
            texto[k] = texto[j];
            texto[j] = aux;
        }

        for (j = strlen(texto) / 2; j < strlen(texto); j++)
            texto[j] -= 1;

        printf("%s\n", texto);
        i++;
    }

    return 0;
}