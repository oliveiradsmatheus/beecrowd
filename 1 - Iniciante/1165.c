#include <stdio.h>

int main() {
    int N, i = 1, num, j, q;
    scanf("%d", &N);
    while (i <= N) {
        num = 0;
        j = 2;
        q = 0;
        scanf("%d", &num);
        while (j <= num / 2) {
            if (num % j == 0)
                q++;
            j++;
        }
        if (q == 0)
            printf("%d eh primo\n", num);
        else
            printf("%d nao eh primo\n", num);
        i++;
    }
    return 0;
}