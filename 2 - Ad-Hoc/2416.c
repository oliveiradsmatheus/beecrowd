#include <stdio.h>

int main() {
    int metros, comp, resto;
    scanf("%d%d", &metros, &comp);
    resto = metros % comp;
    printf("%d\n", resto);
}