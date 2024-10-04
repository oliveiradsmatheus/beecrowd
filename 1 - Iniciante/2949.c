#include <stdio.h>

int main() {
    int qt, i = 0, hob = 0, hum = 0, elf = 0, mag = 0, anao = 0;
    char nome[100], raca;

    scanf("%d", &qt);
    while (i < qt) {
        scanf(" %s %c", nome, &raca);
        if (raca == 'A')
            anao++;
        else if (raca == 'H')
            hum++;
        else if (raca == 'E')
            elf++;
        else if (raca == 'X')
            hob++;
        else
            mag++;
        i++;
    }
    printf("%d Hobbit(s)\n%d Humano(s)\n%d Elfo(s)\n%d Anao(oes)\n%d Mago(s)\n", hob, hum, elf, anao, mag);
}