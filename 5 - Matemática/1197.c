#include <stdio.h>

int main(void) {
    int vel, tempo;

    while (scanf("%d %d", &vel, &tempo) != EOF) {
        printf("%d\n", 2 * vel * tempo);
    }
}