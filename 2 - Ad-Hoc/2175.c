#include <stdio.h>

int main() {
    float otavio, bruno, ian;

    scanf("%f %f %f", &otavio, &bruno, &ian);

    if (otavio < bruno && otavio < ian)
        printf("Otavio\n");
    else if (bruno < otavio && bruno < ian)
        printf("Bruno\n");
    else if (ian < otavio && ian < bruno)
        printf("Ian\n");
    else
        printf("Empate\n");
}