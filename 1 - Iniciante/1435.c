#include <stdio.h>

#define TF 101

int main() {
    int mat[TF][TF], num, k, i, j;
    scanf("%d", &num);
    while (num != 0) {
        for (i = 0; i < num; i++)
            for (j = 0; j < num; j++)
                mat[i][j] = 0;
        k = 0;
        while (k < num) {
            for (i = k; i < num - k; i++)
                for (j = k; j < num - k; j++)
                    mat[i][j]++;
            k++;
        }
        for (i = 0; i < num; i++)
            for (j = 0; j < num; j++) {
                printf("%3i", mat[i][j]);
                if (j != num - 1)
                    printf(" ");
                else
                    printf("\n");
            }
        printf("\n");
        scanf("%d", &num);
    }
}