#include <stdio.h>
#include <math.h>

int main(void) {
    int rep, num, i = 0, soma, j;

    scanf("%d", &rep);

    while (i < rep) {
        scanf("%d", &num);
        soma = 0;
        for (j = 2; j < sqrt(num); j++)
            if (num % j == 0)
                soma++;
        if (soma > 0)
            printf("Not Prime\n");
        else
            printf("Prime\n");
        i++;
    }

    return 0;
}