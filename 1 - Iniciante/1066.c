#include <stdio.h>

int main() {
    int ent, i = 1, par = 0, impar = 0, positivo = 0, negativo = 0;
    while (i <= 5) {
        scanf("%d", &ent);
        if (ent != 0)
            if (ent > 0)
                positivo++;
            else
                negativo++;
        if (ent % 2 == 0)
            par++;
        else
            impar++;
        i++;
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", par,
           impar, positivo, negativo);
    return 0;
}