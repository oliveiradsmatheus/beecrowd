#include <stdio.h>
#include <string.h>

int main(void) {
    int num, i = 0, leds, j;
    char numero[100];

    scanf("%d", &num);

    while (i < num) {
        leds = 0;
        scanf(" %s", numero);
        for (j = 0; j < strlen(numero); j++) {
            if (numero[j] == '1')
                leds += 2;
            else if (numero[j] == '2' || numero[j] == '3' || numero[j] == '5')
                leds += 5;
            else if (numero[j] == '4')
                leds += 4;
            else if (numero[j] == '6' || numero[j] == '9' || numero[j] == '0')
                leds += 6;
            else if (numero[j] == '7')
                leds += 3;
            else
                leds += 7;
        }
        printf("%d leds\n", leds);
        i++;
    }

    return 0;
}