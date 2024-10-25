#include <stdio.h>
#include <math.h>

int MaximoDC(int x, int y, int z) {
    int Divisor = 1, MDC = 1, cont;
    while (x != 1 || y != 1 || z != 1) {
        cont = 0;
        if (x % Divisor == 0) {
            cont++;
            x /= Divisor;
        }
        if (y % Divisor == 0) {
            cont++;
            y /= Divisor;
        }
        if (z % Divisor == 0) {
            cont++;
            z /= Divisor;
        }
        if (cont == 3)
            MDC *= Divisor;
        if (Divisor == 1 || cont == 0)
            Divisor++;
    }
    return MDC;
}

char TriplaPitagorica(int maior, int x, int y) {
    if (pow(maior,2) == pow(x,2) + pow(y,2))
        return 1;
    return 0;
}

int main(void) {
    int x, y, z, MDC;
    char TP;

    while (scanf("%d %d %d", &x, &y, &z) != EOF) {
        MDC = MaximoDC(x, y, z);

        if (x > y)
            if (x > z)
                TP = TriplaPitagorica(x, y, z);
            else
                TP = TriplaPitagorica(z, y, x);
        else
            if (y > z)
                TP = TriplaPitagorica(y, z, x);
            else
                TP = TriplaPitagorica(z, y, x);

        if(TP)
            if (MDC == 1)
                printf("tripla pitagorica primitiva\n");
            else
                printf("tripla pitagorica\n");
        else
            printf("tripla\n");
    }
    return 0;
}