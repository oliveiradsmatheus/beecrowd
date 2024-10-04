#include<stdio.h>

#define tf 61

int main() {
    long long int fib[tf];
    int i, ent, num;

    for (i = 2; i < tf; i++) {
        fib[0] = 0;
        fib[1] = 1;
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    scanf("%d", &ent);
    for (i = 1; i <= ent; i++) {
        scanf("%d", &num);
        printf("Fib(%d) = %lld\n", num, fib[num]);
    }
}