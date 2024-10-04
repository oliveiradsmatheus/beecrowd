#include <stdio.h>
#include <string.h>

int main() {
    char she[10], raj[10];
    int i, ncase;
    scanf("%d", &ncase);
    getchar();
    i = 0;
    while (i < ncase) {

        scanf(" %s %s", she, raj);

        if (strcmp(she, raj) == 0)
            printf("Caso #%d: De novo!\n", i + 1);
        else if (strcmp(she, "tesoura") == 0) {
            if ((strcmp(raj, "papel") == 0) || (strcmp(raj, "lagarto") == 0))
                printf("Caso #%d: Bazinga!\n", i + 1);
            else if ((strcmp(raj, "Spock") == 0) || (strcmp(raj, "pedra") == 0))
                printf("Caso #%d: Raj trapaceou!\n", i + 1);
        } else if (strcmp(she, "papel") == 0) {
            if ((strcmp(raj, "pedra") == 0) || (strcmp(raj, "Spock") == 0))
                printf("Caso #%d: Bazinga!\n", i + 1);
            else if ((strcmp(raj, "lagarto") == 0) || (strcmp(raj, "tesoura") == 0))
                printf("Caso #%d: Raj trapaceou!\n", i + 1);
        } else if (strcmp(she, "pedra") == 0) {
            if ((strcmp(raj, "lagarto") == 0) || (strcmp(raj, "tesoura") == 0))
                printf("Caso #%d: Bazinga!\n", i + 1);
            else if ((strcmp(raj, "Spock") == 0) || (strcmp(raj, "papel") == 0))
                printf("Caso #%d: Raj trapaceou!\n", i + 1);
        } else if (strcmp(she, "lagarto") == 0) {
            if ((strcmp(raj, "papel") == 0) || (strcmp(raj, "Spock") == 0))
                printf("Caso #%d: Bazinga!\n", i + 1);
            else if ((strcmp(raj, "tesoura") == 0) || (strcmp(raj, "pedra") == 0))
                printf("Caso #%d: Raj trapaceou!\n", i + 1);
        } else if (strcmp(she, "Spock") == 0) {
            if ((strcmp(raj, "pedra") == 0) || (strcmp(raj, "tesoura") == 0))
                printf("Caso #%d: Bazinga!\n", i + 1);
            else if ((strcmp(raj, "lagarto") == 0) || (strcmp(raj, "papel") == 0))
                printf("Caso #%d: Raj trapaceou!\n", i + 1);
        }
        i++;
    }
}