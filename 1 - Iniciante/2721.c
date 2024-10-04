#include <stdio.h>

int main() {
    int i, num, soma = 0, rena = 0;

    for (i = 0; i < 9; i++) {
        scanf("%d", &num);
        soma += num;
    }
    while (soma > 0) {
        rena++;
        if (rena == 10)
            rena = 1;
        soma--;
    }
    if (rena == 1)
        printf("Dasher\n");
    else if (rena == 2)
        printf("Dancer\n");
    else if (rena == 3)
        printf("Prancer\n");
    else if (rena == 4)
        printf("Vixen\n");
    else if (rena == 5)
        printf("Comet\n");
    else if (rena == 6)
        printf("Cupid\n");
    else if (rena == 7)
        printf("Donner\n");
    else if (rena == 8)
        printf("Blitzen\n");
    else
        printf("Rudolph\n");
}