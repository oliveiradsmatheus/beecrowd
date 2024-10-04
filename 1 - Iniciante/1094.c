#include <stdio.h>

int main() {
    char tipo;
    int N, C, R, S, soma, animais;
    C = 0;
    R = 0;
    S = 0;
    soma = 0;
    scanf("%d", &N);
    while (N--) {
        scanf("%d %c", &animais, &tipo);
        soma += animais;
        if (tipo == 'C')
            C += animais;
        else if (tipo == 'R')
            R += animais;
        else if (tipo == 'S')
            S += animais;
    }
    printf("Total: %d cobaias\n", soma);
    printf("Total de coelhos: %d\n", C);
    printf("Total de ratos: %d\n", R);
    printf("Total de sapos: %d\n", S);
    printf("Percentual de coelhos: %.2f %%\n", ((float) C * 100.0) / soma);
    printf("Percentual de ratos: %.2f %%\n", ((float) R * 100) / soma);
    printf("Percentual de sapos: %.2f %%\n", ((float) S * 100) / soma);
    return 0;
}