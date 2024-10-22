#include <stdio.h>

int main(void) {
    int qtde, x, y;

    scanf("%d", &qtde);
    while (qtde--) {
        scanf("%d %d", &x, &y);
        printf("%d cm2\n", x * y / 2);
    }
    return 0;
}