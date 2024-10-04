#include <stdio.h>

int main() {
    int n, i; //declaração de variáveis
    scanf("%d", &n);
    for (i = 1; i <= n * 4; i += 4) {
        printf("%d %d %d PUM\n", i, i + 1, i + 2);
    }

    return 0;
}