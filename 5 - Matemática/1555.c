#include <stdio.h>
#include <math.h>

int Rafael(int x, int y) {
    int resultado;
    resultado = pow(3 * x, 2) + pow(y, 2);
    return resultado;
}

int Beto(int x, int y) {
    int resultado;
    resultado = 2 * pow(x, 2) + pow(5 * y, 2);
    return resultado;
}

int Carlos(int x, int y) {
    int resultado;
    resultado = -100 * x + pow(y, 3);
    return resultado;
}

int main(void) {
    int rep, i = 0, x, y;

    scanf("%d", &rep);

    while (i < rep) {
        scanf("%d %d", &x, &y);
        if (Rafael(x, y) > Beto(x, y) && Rafael(x, y) > Carlos(x, y))
            printf("Rafael ganhou\n");
        else if (Beto(x, y) > Rafael(x, y) && Beto(x, y) > Carlos(x, y))
            printf("Beto ganhou\n");
        else if (Carlos(x, y) > Beto(x, y) && Carlos(x, y) > Rafael(x, y))
            printf("Carlos ganhou\n");
        i++;
    }

    return 0;
}