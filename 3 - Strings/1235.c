#include <stdio.h>
#include <string.h>

int main(void) {
    char frase[101];
    int qtde, i, meio;

    scanf("%d", &qtde);

    while (qtde > 0) {
        getchar();
        scanf("%[^\n]", frase);

        meio = strlen(frase) / 2;

        for (i = meio - 1; i >= 0; i--)
            printf("%c", frase[i]);

        for (i = strlen(frase) - 1; i >= meio; i--)
            printf("%c", frase[i]);

        printf("\n");

        qtde--;
    }
}