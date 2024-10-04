#include<stdio.h>

int main() {
    int num, z, i, soma = 0;
    scanf("%d %d", &num, &z);
    while (z <= num) {
        scanf("%d", &z);
    }
    for (i = 0; soma <= z; i++) {
        soma += num;
        num++;
    }
    printf("%d\n", i);
}