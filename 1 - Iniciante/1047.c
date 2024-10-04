#include <stdio.h>

int main() {
    int minicial, minfinal, hrinicial, hrfinal, tempo, tempoinicial, tempofinal, horas, minutos;
    scanf("%d%d%d%d", &hrinicial, &minicial, &hrfinal, &minfinal);
    tempoinicial = minicial + hrinicial * 60;
    tempofinal = minfinal + hrfinal * 60;
    if (minicial == minfinal && hrinicial == hrfinal)
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    else if (tempoinicial > tempofinal) {
        tempo = tempofinal + 1440 - tempoinicial;
        horas = tempo / 60;
        tempo = tempo % 60;
        minutos = tempo;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);
    } else {
        tempo = tempofinal - tempoinicial;
        horas = tempo / 60;
        tempo = tempo % 60;
        minutos = tempo;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);
    }
    return 0;
}