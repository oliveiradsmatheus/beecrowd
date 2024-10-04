#include <stdio.h>

int main() {
    int carta1, carta2, carta3;
    scanf("%d%d", &carta1, &carta2);
    if (carta1 > carta2)
        carta3 = carta1;
    else
        carta3 = carta2;
    printf("%d\n", carta3);
}