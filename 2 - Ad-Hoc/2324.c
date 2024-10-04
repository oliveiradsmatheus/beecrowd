#include <stdio.h>

int main() {
    int qtpos, qtpasta, i, pasta[1000000], pos[1001], valida = 1, teste = 0;

    scanf("%d %d", &qtpos, &qtpasta);
    for (i = 0; i < qtpos; i++)
        pos[i] = 0;
    i = 0;
    while (i < qtpasta) {
        scanf("%d", &pasta[i]);
        pos[pasta[i]]++;
        i++;
    }
    i = 1;
    while (i < qtpos && valida == 1) {
        valida = 0;
        if (pos[i] == pos[i + 1]) {
            valida = 1;
            i++;
        } else if (teste == 0 && (pos[i] == pos[i + 1] + 1)) {
            valida = 1;
            i++;
            teste = 1;
        }
    }
    if (valida == 1)
        printf("S\n");
    else
        printf("N\n");
}