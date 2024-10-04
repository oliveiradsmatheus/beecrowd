#include<stdio.h>

#define TF 101

int main() {
    int mat[TF][TF], num, i, j;
    while (scanf("%d", &num) != EOF) {
        for (i = 0; i < num; i++)
            for (j = 0; j < num; j++)
                mat[i][j] = 0;
        for (i = 0; i < num; i++)
            for (j = i; j == i; j++)
                mat[i][j] = 2;
        for (i = 0; i < num; i++)
            for (j = num - 1 - i; j == num - 1 - i; j++)
                mat[i][j] = 3;
        for (i = num / 3; i < (num - num / 3); i++)
            for (j = num / 3; j < (num - num / 3); j++)
                mat[i][j] = 1;
        mat[num / 2][num / 2] = 4;
        for (i = 0; i < num; i++)
            for (j = 0; j < num; j++) {
                printf("%d", mat[i][j]);
                if (j == num - 1)
                    printf("\n");
            }
        printf("\n");
    }
}