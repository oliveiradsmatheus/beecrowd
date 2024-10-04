#include <stdio.h>

int main() {
    int ent;
    scanf("%d", &ent);
    while (ent != 2002) {
        printf("Senha Invalida\n");
        scanf("%d", &ent);
    }
    if (ent == 2002)
        printf("Acesso Permitido\n");
    return 0;
}