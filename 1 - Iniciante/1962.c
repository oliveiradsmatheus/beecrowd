#include <stdio.h>

int main(void) {
    int qtde, i = 0, ano, resp;

    scanf("%d", &qtde);

    while (i < qtde) {
        scanf("%d", &ano);
        if (ano >= 2015) {
            resp = ano - 2015 + 1;
            printf("%d A.C.\n", resp);
        } else {
            resp = 2015 - ano;
            printf("%d D.C.\n", resp);
        }
        i++;
    }

    return 0;
}