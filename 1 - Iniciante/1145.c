#include <stdio.h>

int main() {
    int num, fim, i;
    scanf("%d%d", &num, &fim);
    for (i = 1; i <= fim; i++) {
        printf("%d", i);
        if (i % num == 0)
            printf("%c", '\n');
        else
            printf("%c", ' ');
    }
}