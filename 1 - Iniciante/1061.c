#include <stdio.h>

int main() {
    int diai, horai, mini, segi, diaf, minf, horaf, segf, dias = 0, horas = 0, minutos = 0, segundos = 0;
    scanf("Dia %d", &diai);
    scanf("%d : %d : %d\n", &horai, &mini, &segi);
    scanf("Dia %d", &diaf);
    scanf("%d : %d : %d", &horaf, &minf, &segf);

    horas = horaf - horai;
    dias = diaf - diai;
    minutos = minf - mini;
    segundos = segf - segi;

    if (segundos < 0) {
        segundos += 60;
        minutos--;
    }
    if (minutos < 0) {
        minutos += 60;
        horas--;
    }
    if (horas < 0) {
        horas += 24;
        dias--;
    }
    printf("%d dia(s)\n", dias);
    printf("%d hora(s)\n", horas);
    printf("%d minuto(s)\n", minutos);
    printf("%d segundo(s)\n", segundos);

    return 0;
}