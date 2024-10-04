#include <stdio.h>

int main(void) {
    int num, i, cont, j, caso = 0;

    while (scanf("%d", &num) != EOF) {
        if (num == 0) {
            caso++;
            printf("Caso %d: 1 numero\n", caso);
            printf("0\n\n");
        } else {
            cont = 1;
            caso++;
            for (i = 0; i <= num; i++) {
                for (j = 0; j < i; j++)
                    cont++;
            }
            printf("Caso %d: %d numeros\n", caso, cont);
            for (i = 0; i <= num; i++) {
                if (i == 0)
                    printf("0");
                else {
                    for (j = 0; j < i; j++)
                        printf(" %d", i);
                }
            }
            printf("\n\n");
        }
    }
    return 0;
}