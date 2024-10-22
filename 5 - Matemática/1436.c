#include <stdio.h>

int main(void) {
    int casos, caso = 0, qtde, equipe[10], i;

    scanf("%d", &casos);
    while (caso < casos) {
        scanf("%d", &qtde);
        for (i = 0; i < qtde; i++)
            scanf("%d", &equipe[i]);
        printf("Case %d: %d\n", caso + 1, equipe[qtde / 2]);
        caso++;
    }
    return 0;
}