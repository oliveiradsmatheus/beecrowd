#include <stdio.h>
#include <string.h>

int main(void) {
    int num, desloc, i = 0, j;
    char frase[100];

    scanf("%d", &num);
    while (i < num) {
        scanf(" %s %d", frase, &desloc);
        for (j = 0; j < strlen(frase); j++) {
            frase[j] -= desloc;
            if (frase[j] < 65)
                frase[j] += 26;
            printf("%c", frase[j]);
        }
        printf("\n");
        i++;
    }
    return 0;
}