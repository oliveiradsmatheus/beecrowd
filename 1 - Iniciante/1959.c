#include <stdio.h>

int main(void) {
    long long int comp, qtde, peri;

    scanf("%lld %lld", &qtde, &comp);

    peri = qtde * comp;

    printf("%lld\n", peri);

    return 0;
}