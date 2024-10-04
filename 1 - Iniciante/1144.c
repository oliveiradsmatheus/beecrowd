#include <stdio.h>

int main() {

    int n, i = 1, j;
    scanf("%d", &n);
    while (i <= n) {
        j = i * i;
        printf("%d %d %d\n", i, j, j * i);
        printf("%d %d %d\n", i, j + 1, (j * i) + 1);
        i++;
    }

    return 0;
}