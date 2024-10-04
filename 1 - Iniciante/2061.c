#include<stdio.h>
#include<string.h>

int main() {
    int nac, i, nabas;
    char acao[6];

    scanf("%d%d", &nabas, &nac);
    for (i = 1; i <= nac; i++) {
        scanf("%s", acao);
        if (!strcmp(acao, "clicou"))
            nabas--;
        else if (!strcmp(acao, "fechou"))
            nabas++;
    }
    printf("%d\n", nabas);
}