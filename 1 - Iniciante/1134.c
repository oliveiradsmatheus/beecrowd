#include <stdio.h>

int main() {
    int ent, gas = 0, alc = 0, dies = 0;
    scanf("%d", &ent);
    while (ent != 4) {
        if (ent < 1 || ent > 3)
            scanf("%d", &ent);
        if (ent >= 1 && ent <= 3) {
            switch (ent) {
                case 1:
                    alc++;
                    break;
                case 2:
                    gas++;
                    break;
                case 3:
                    dies++;
            }
        }
        scanf("%d", &ent);
    }
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", alc, gas, dies);

    return 0;
}