#include <stdio.h>

int main(void) {
    int esq, dir;

    scanf("%d %d", &esq, &dir);
    while (esq != 0 || dir != 0) {
        printf("%d\n", esq + dir);
        scanf("%d %d", &esq, &dir);
    }
}