#include<stdio.h>

int main(void) {
    int numero;
    while (scanf("%d", &numero) != EOF)
        printf("%d\n", numero - 1);

    return 0;
}