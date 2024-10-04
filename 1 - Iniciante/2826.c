#include <stdio.h>
#include <string.h>

int main(void) {
    char texto1[20], texto2[20];

    scanf(" %s", texto1);
    scanf(" %s", texto2);

    if (strcmp(texto1, texto2) < 0) {
        printf("%s\n", texto1);
        printf("%s\n", texto2);
    } else {
        printf("%s\n", texto2);
        printf("%s\n", texto1);
    }
}