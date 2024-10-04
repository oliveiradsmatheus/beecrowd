#include <stdio.h>

int main(void) {
    int i, qtde, num, maria, joao;

    scanf("%d", &qtde);

    while (qtde != 0) {
        i = 0;
        maria = 0;
        joao = 0;

        while (i < qtde) {
            scanf("%d", &num);
            if (num == 0)
                maria++;
            else
                joao++;
            i++;
        }

        printf("Mary won %d times and John won %d times\n", maria, joao);

        scanf("%d", &qtde);
    }
}