#include<stdio.h>

int main(void) {
    int linha, coluna;
    scanf("%d %d", &linha, &coluna);

    if (linha % 2 == coluna % 2)
        printf("1\n");
    else
        printf("0\n");

    return 0;
}