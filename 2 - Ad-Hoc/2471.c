#include <stdio.h>
#include <math.h>

int main(void) {
    int lado, i, j, mat[50][50], somai[50], somaj[50], perfeito, linha, coluna, dif, resp;

    scanf("%d", &lado);
    for (i = 0; i < lado; i++) {
        for (j = 0; j < lado; j++)
            scanf("%d", &mat[i][j]);
    }

    for (i = 0; i < lado; i++) {
        somai[i] = 0;
        somaj[i] = 0;
        for (j = 0; j < lado; j++) {
            somai[i] += mat[i][j];
            somaj[i] += mat[j][i];
        }
        if (somai[i] == somaj[i])
            perfeito = somai[i];
    }

    for (i = 0; i < lado; i++) {
        if (somai[i] != perfeito)
            linha = i;
        if (somaj[i] != perfeito)
            coluna = i;
    }

    dif = perfeito - somai[linha];
    resp = abs(mat[linha][coluna] + dif);
    printf("%d %d\n", resp, mat[linha][coluna]);

    return 0;
}