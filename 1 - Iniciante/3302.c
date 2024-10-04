#include <stdio.h>

int main() {
    int i, qt, resp;
    scanf("%d", &qt);
    i = 0;
    while (i < qt) {
        scanf("%d", &resp);
        printf("resposta %d: %d\n", i + 1, resp);
        i++;
    }
}