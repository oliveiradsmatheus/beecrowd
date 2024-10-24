#include <stdio.h>

int main(void) {
    int Triangulo[21][41], i, j, linha;
    long long int soma = 0;

    for (i = 0; i < 21; i++)
        for (j = 0; j < 41; j++)
            Triangulo[i][j] = 0;
    Triangulo[0][20] = 1;
    for (i = 1; i < 21; i++)
        for (j = 0; j < 41; j++) {
            if (!j)
                Triangulo[i][j] = Triangulo[i - 1][j] + Triangulo[i - 1][j + 1];
            else if (j == 40)
                Triangulo[i][j] = Triangulo[i - 1][j - 1] + Triangulo[i - 1][j];
            else
                Triangulo[i][j] = Triangulo[i - 1][j - 1] + Triangulo[i - 1][j] + Triangulo[i - 1][j + 1];
        }
    scanf("%d", &linha);
    for (i = 0; i < 41; i++)
        soma += Triangulo[linha][i];
    printf("%lld\n", soma);
    return 0;
}