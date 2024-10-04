#include <stdio.h>

int main(void) {
    int ponton, pontom, qtde, i, pontox, pontoy;

    scanf("%d", &qtde);

    while (qtde > 0) {
        scanf("%d %d", &ponton, &pontom);
        i = 0;
        while (i < qtde) {
            scanf("%d %d", &pontox, &pontoy);

            if (pontox == ponton || pontoy == pontom)
                printf("divisa\n");
            else if (pontox > ponton)
                if (pontoy > pontom)
                    printf("NE\n");
                else
                    printf("SE\n");
            else if (pontoy > pontom)
                printf("NO\n");
            else
                printf("SO\n");

            i++;
        }
        scanf("%d", &qtde);
    }

    return 0;
}