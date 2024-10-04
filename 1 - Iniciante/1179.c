#include<stdio.h>

#define tf 5

int main() {
    int par[tf], impar[tf], num, i, j, contpar = 0, contimpar = 0;
    for (j = 0; j < 15; j++) {
        scanf("%d", &num);
        if (num % 2 == 0) {
            par[contpar] = num;
            contpar++;
        } else {
            impar[contimpar] = num;
            contimpar++;
        }
        if (contpar == tf) {
            for (i = 0; i < tf; i++)
                printf("par[%d] = %d\n", i, par[i]);
            contpar = 0;
        }
        if (contimpar == tf) {
            for (i = 0; i < tf; i++)
                printf("impar[%d] = %d\n", i, impar[i]);
            contimpar = 0;
        }
    }
    for (i = 0; i < contimpar; i++)
        printf("impar[%d] = %d\n", i, impar[i]);
    for (i = 0; i < contpar; i++)
        printf("par[%d] = %d\n", i, par[i]);
}