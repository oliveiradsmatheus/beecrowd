#include <stdio.h>
#include <string.h>

int main() {
    int qtde, i = 0;
    long long int num, res;
    char k[20];

    scanf("%d", &qtde);
    while (i < qtde) {
        scanf("%lld %s", &num, k);
        res = 1;
        while (num > 1) {
            res *= num;
            num -= strlen(k);
        }
        printf("%lld\n", res);

        i++;
    }
}