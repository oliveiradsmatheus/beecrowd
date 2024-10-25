#include <stdio.h>
#include <math.h>
#include <string.h>

char NumPrimo(int num) {
    int i = 2, cont = 0;

    if (num == 0 || num == 1)
        return 0;

    while (i <= sqrt(num)) {
        if (num % i == 0)
            cont++;
        i++;
    }

    if (!cont)
        return 1;
    return 0;
}

char SuperPrimo(char *num) {
    int i = 0;
    char super = 0;

    if (strlen(num) == 1)
        return 1;
    if (NumPrimo(num[i] - '0')) {
        i++;
        super = 1;
        while (i < strlen(num) && super) {
            super = 0;
            if (NumPrimo(num[i] - '0'))
                super = 1;
            i++;
        }
    }
    return super;
}

int Converte(char *numStr) {
    int num = 0, i = 0;

    while (i < strlen(numStr)) {
        num *= 10;
        num += numStr[i] - '0';
        i++;
    }
    return num;
}

int main(void) {
    char num[7], primo, super, i;

    while (scanf(" %s", num) != EOF) {
        super = 0;
        primo = NumPrimo(Converte(num));
        if (primo)
            super = SuperPrimo(num);
        if (primo)
            if (super)
                printf("Super\n");
            else
                printf("Primo\n");
        else
            printf("Nada\n");
    }
    return 0;
}