#include <stdio.h>

int main(void) {
    int lados, barbantes;
    long long int total = 0;

    scanf("%d", &lados);
    if (lados < 4)
        barbantes = 0;
    else {
        barbantes = 2;
        while (lados >= 4) {
            total += barbantes;
            barbantes++;
            lados--;
        }
    }
    printf("%lld\n", total);
    return 0;
}