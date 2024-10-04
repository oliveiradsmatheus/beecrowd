#include<stdio.h>
#include<math.h>
#define tf 32

int main() {
    long long int n1, n2, i, aux, total, resto1[tf], resto2[tf], result[tf];
    while (scanf("%lld %lld", &n1, &n2) != EOF) {
        for (i = 0; i < tf; i++) {
            resto1[i] = 0;
            resto2[i] = 0;
        }
        i = 0;
        while (i < tf) {
            resto1[i] = n1 % 2;
            n1 /= 2;
            i++;
        }
        i = 0;
        while (i < tf) {
            resto2[i] = n2 % 2;
            n2 /= 2;
            i++;
        }
        for (i = 0; i < tf; i++) {
            if (resto1[i] == resto2[i])
                result[i] = 0;
            else
                result[i] = 1;
        }
        total = 0;
        for (i = 0; i < tf; i++) {
            total += result[i] * pow(2, i);
        }
        printf("%lld\n", total);
    }
}
