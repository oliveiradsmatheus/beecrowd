#include <stdio.h>

int main(void) {
    int Carta[50], Descarte[50], i, TLC, TLD, num;

    scanf("%d", &num);

    while (num != 0) {
        TLC = num;
        TLD = 0;
        i = 0;
        while (i < TLC) {
            Carta[i] = i + 1;
            i++;
        }

        while (TLC > 1) {
            Descarte[TLD++] = Carta[0];
            Carta[TLC] = Carta[1];
            for (i = 0; i < TLC - 1; i++)
                Carta[i] = Carta[i + 2];
            TLC--;
        }

        printf("Discarded cards: ");
        for (i = 0; i < TLD; i++) {
            printf("%d", Descarte[i]);
            if (i == TLD - 1)
                printf("\n");
            else
                printf(", ");
        }
        printf("Remaining card: %d\n", Carta[0]);

        scanf("%d", &num);
    }
}