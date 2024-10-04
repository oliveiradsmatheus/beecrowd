#include <stdio.h>

int main(void) {
    char nome[100], sexo;
    int f = 0, m = 0, i = 0, qt;
    scanf("%d", &qt);
    while (i < qt) {
        scanf(" %s %c", nome, &sexo);
        if (sexo == 'F')
            f++;
        else
            m++;
        i++;
    }
    printf("%d carrinhos\n%d bonecas\n", m, f);
    return 0;
}