#include <stdio.h>
#include <string.h>

int main(void) {
    char frase[51], mensagem[26];
    int casos, pos, TL;

    scanf("%d", &casos);

    while (casos) {
        getchar();
        scanf("%[^\n]", frase);

        TL = 0;
        pos = 0;
        while (pos < strlen(frase)) {
            if ((pos == 0 || frase[pos - 1] == ' ') &&
                ((frase[pos] >= 'a' && frase[pos] <= 'z') || (frase[pos] >= 'A' && frase[pos] <= 'Z'))) {
                mensagem[TL] = frase[pos];
                TL++;
            }
            pos++;
        }

        mensagem[TL] = '\0';
        printf("%s\n", mensagem);

        casos--;
    }
}