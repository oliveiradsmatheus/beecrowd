#include <stdio.h>

int main() {
    int i;
    char nome[10][31];
    for (i = 0; i < 10; i++)
        scanf(" %s", nome[i]);
    printf("%s\n", nome[2]);
    printf("%s\n", nome[6]);
    printf("%s\n", nome[8]);
}