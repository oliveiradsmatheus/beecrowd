#include <stdio.h>
#include <string.h>

int main() {
    int i = 0, num, numj1, numj2, soma;
    char nomej1[100], escj1[10], nomej2[100], escj2[10];

    scanf("%d", &num);
    while (i < num) {
        scanf(" %s %s %s %s", nomej1, escj1, nomej2, escj2);
        scanf("%d %d", &numj1, &numj2);

        soma = numj1 + numj2;
        if (soma % 2 == 0)
            if (strcmp(escj1, "PAR") == 0)
                printf("%s\n", nomej1);
            else
                printf("%s\n", nomej2);
        else if (strcmp(escj1, "PAR") == 0)
            printf("%s\n", nomej2);
        else
            printf("%s\n", nomej1);

        i++;
    }
}