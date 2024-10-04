#include<stdio.h>

int main() {
    int M, N, soma = 0, i;
    scanf("%d%d", &N, &M);
    while (N > 0 && M > 0) {
        if (N > M) {
            i = M;
            while (i <= N) {
                soma += i;
                printf("%d ", i);
                i++;
            }
        } else {
            i = N;
            while (i <= M) {
                soma += i;
                printf("%d ", i);
                i++;
            }
        }
        printf("Sum=%d\n", soma);
        soma = 0;
        scanf("%d%d", &N, &M);
    }
    return 0;
}