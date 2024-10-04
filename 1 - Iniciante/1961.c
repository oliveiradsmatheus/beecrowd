#include <stdio.h>

int main(void) {
    int pulo, qtcano, i, cano[101], win = 1;

    scanf("%d %d", &pulo, &qtcano);

    for (i = 0; i < qtcano; i++)
        scanf("%d", &cano[i]);

    i = 0;

    while (i < qtcano - 1) {
        if ((cano[i] - cano[i + 1]) < (-pulo))
            win = 0;
        else if ((cano[i] - cano[i + 1]) > pulo)
            win = 0;
        i++;
    }
    if (win == 1)
        printf("YOU WIN\n");
    else
        printf("GAME OVER\n");

    return 0;
}