#include <stdio.h>

int main(void) {
    int qtde, leitor, ant = 0, i = 1;
    char falha = 0;

    scanf("%d", &qtde);
    while (qtde && falha == 0) {
        scanf("%d", &leitor);
        if (leitor < ant)
            falha = 1;
        else {
            ant = leitor;
            i++;
            qtde--;
        }
    }
    if (falha == 0)
        i = 0;
    printf("%d\n", i);
}