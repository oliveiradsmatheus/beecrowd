#include<stdio.h>

int main() {
    int tipo, a, b, c, d, e, certos = 0;
    scanf("%d", &tipo);
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    if (a == tipo)
        certos++;
    if (b == tipo)
        certos++;
    if (c == tipo)
        certos++;
    if (d == tipo)
        certos++;
    if (e == tipo)
        certos++;
    printf("%d\n", certos);
}