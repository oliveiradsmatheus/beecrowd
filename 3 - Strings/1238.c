#include <stdio.h>
#include <string.h>

int main(void) {
    int num, i = 0, j, maior;
    char texto1[50], texto2[50];

    scanf("%d", &num);

    while (i < num) {
        scanf(" %s %s", texto1, texto2);

        if (strlen(texto1) > strlen(texto2))
            maior = strlen(texto1);
        else
            maior = strlen(texto2);
        j = 0;
        while (j < maior) {
            if (j < strlen(texto1))
                printf("%c", texto1[j]);
            if (j < strlen(texto2))
                printf("%c", texto2[j]);
            j++;
        }

        i++;

        printf("\n");
    }

    return 0;
}