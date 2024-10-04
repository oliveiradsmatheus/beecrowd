#include <stdio.h>

int main() {
    int quant, i;
    scanf("%d", &quant);
    for (i = 1; i <= quant; i++) {
        printf("Ho");
        if (i == quant)
            printf("%c\n", '!');
        else
            printf("%c", ' ');
    }
}