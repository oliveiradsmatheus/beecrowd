#include <stdio.h>

int main(void) {
    int a, b, res;

    scanf("%d %d", &a, &b);
    res = a % b;

    printf("%d\n", res);

    return 0;
}