#include<stdio.h>

#define tf 20

int main() {
    int num[tf], i, aux;
    for (i = 0; i < tf; i++)
        scanf("%d", &num[i]);
    for (i = 0; i < tf / 2; i++) {
        aux = num[i];
        num[i] = num[tf - 1 - i];
        num[tf - 1 - i] = aux;
    }
    for (i = 0; i < tf; i++)
        printf("N[%d] = %d\n", i, num[i]);
}