#include <stdio.h>

int main(void) {
    int casos, linha;
    long long int Triangulo[32][63], i, j, soma;

    for (i = 0; i < 32; i++)
        for (j = 0; j < 63; j++)
            Triangulo[i][j] = 0;
    Triangulo[0][31] = 1;
    for (i = 1; i < 32; i++)
        for (j = 0; j < 63; j++) {
            if (!j)
                Triangulo[i][j] = Triangulo[i - 1][j + 1];
            if (j == 62)
                Triangulo[i][j] = Triangulo[i - 1][j - 1];
            else
                Triangulo[i][j] = Triangulo[i - 1][j + 1] + Triangulo[i - 1][j - 1];
        }
    scanf("%d", &casos);
    while (casos--) {
        soma = 0;
        scanf("%d", &linha);
        for (i = 0; i < linha; i++)
            for (j = 0; j < 63; j++)
                soma += Triangulo[i][j];
        printf("%lld\n", soma);
    }
    return 0;
}