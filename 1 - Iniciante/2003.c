#include <stdio.h>

int main(void) {
    int hora, min, mintot, horafeira = 480;

    while (scanf("%d:%d", &hora, &min) != EOF) {
        mintot = hora * 60 + min + 60;
        if ((mintot - horafeira) > 0)
            printf("Atraso maximo: %d\n", (mintot - horafeira));
        else
            printf("Atraso maximo: 0\n");
    }

    return 0;
}