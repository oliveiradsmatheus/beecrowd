#include<stdio.h>

#define TF 15

int main() {
    int mat[TF][TF], num, i, j, l, aux, dig, tam;
    scanf("%d", &num);
    while (num != 0) {
        for (i = 0; i < num; i++)
            for (j = 0; j < num; j++)
                mat[i][j] = 0;
        aux = 1;
        for (i = 0; i < num; i++)
            for (j = 0; j < num; j++) {
                mat[i][j] = aux;
                aux *= 2;
                if (j == num - 1) {
                    l = 0;
                    while (l < num - 1) {
                        aux /= 2;
                        l++;
                    }

                }
            }
        tam = mat[num - 1][num - 1];
        dig = 0;
        if (tam == 0)
            dig = 1;
        else
            while (tam != 0) {
                dig++;
                tam /= 10;
            }
        for (i = 0; i < num; i++)
            for (j = 0; j < num; j++) {
                printf("%*d", dig, mat[i][j]);
                if (j != num - 1)
                    printf(" ");
                else
                    printf("\n");
            }
        printf("\n");
        scanf("%d", &num);
    }
}