#include <stdio.h>
#include <string.h>

#define TAM 2000

char Divide(char *Numero, int Divisor) {
    int i, resto;

    resto = 0;
    for (i = 0; i < strlen(Numero); i++)
        resto = ((Numero[i] - '0') + resto * 10) % Divisor;
    if (!resto)
        return 1;
    return 0;
}

int main(void) {
    char normal, primeira = 1, bissexto, huluculu, bulukulu, Ano[TAM], Div4, Div100, Div400;

    while (scanf("%s", Ano) != EOF) {
        if (!primeira)
            printf("\n");
        else
            primeira = 0;

        bissexto = huluculu = bulukulu = 0;
        normal = 1;

        Div4 = Divide(Ano, 4);
        Div100 = Divide(Ano, 100);
        Div400 = Divide(Ano, 400);
        bissexto = Div4 && (!Div100 || Div400);
        huluculu = Divide(Ano, 15);
        bulukulu = bissexto && Divide(Ano, 55);

        if (bissexto) {
            printf("This is leap year.\n");
            normal = 0;
        }
        if (huluculu) {
            printf("This is huluculu festival year.\n");
            normal = 0;
        }
        if (bulukulu) {
            printf("This is bulukulu festival year.\n");
            normal = 0;
        }
        if (normal)
            printf("This is an ordinary year.\n");
    }
    return 0;
}