#include <stdio.h>
#include <string.h>

int Fatorial(int num) {
    int fatorial = 1;
    while (num >= 2) {
        fatorial *= num--;
    }
    return fatorial;
}

int main(void) {
    char numACM[6];
    int decimal, i, numero;

    scanf(" %s",&numACM);
    while (strcmp(numACM,"0")) {
        i = 0;
        decimal = 0;
        while(i<strlen(numACM)) {
            numero = numACM[i] - '0';
            decimal += numero * Fatorial(strlen(numACM)-i);
            i++;
        }
        printf("%d\n",decimal);
        scanf(" %s",&numACM);
    }
    return 0;
}