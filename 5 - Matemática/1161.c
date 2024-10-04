#include<stdio.h>

int main(void) {
    int num1, num2;
    unsigned long long int fat1, fat2, soma;

    while (scanf("%d %d", &num1, &num2) != EOF) {
        if (num1 == 0)
            num1 = 1;
        if (num2 == 0)
            num2 = 1;

        fat1 = num1;
        fat2 = num2;
        num1--;
        num2--;

        while (num1 > 0) {
            fat1 *= num1;
            num1--;
        }

        while (num2 > 0) {
            fat2 *= num2;
            num2--;
        }

        soma = fat1 + fat2;

        printf("%llu\n", soma);
    }

    return 0;
}