#include <stdio.h>

int main() {
    int N, num, q = 0, i = 1, j;
    scanf("%d", &N);
    while (i <= N) {
        num = 0;
        j = 1;
        q = 0;
        scanf("%d", &num);
        while (j < num) {
            if (num % j == 0)
                q += j;
            j++;
        }

        i++;
        if (num == q)
            printf("%d eh perfeito\n", num);
        else
            printf("%d nao eh perfeito\n", num);
    }
    return 0;
}