#include <stdio.h>

int main(void) {
    int ladoMaior, areaMaior, ladoMenor, areaMenor, qtde;

    scanf("%d", &ladoMaior);
    while (ladoMaior != 0) {
        areaMaior = ladoMaior * ladoMaior;
        qtde = 0;
        ladoMenor = 1;
        areaMenor = ladoMenor * ladoMenor;
        while (areaMenor <= areaMaior) {
            qtde += areaMenor;
            ladoMenor++;
            areaMenor = ladoMenor * ladoMenor;
        }
        printf("%d\n", qtde);
        scanf("%d", &ladoMaior);
    }
    return 0;
}