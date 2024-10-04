#include<stdio.h>

int main() {
    int ent, i, prod, qt;
    float preco, soma = 0;

    scanf("%d", &ent);
    for (i = 1; i <= ent; i++) {
        scanf("%d%d", &prod, &qt);
        if (prod == 1001)
            preco = 1.50;
        if (prod == 1002)
            preco = 2.50;
        if (prod == 1003)
            preco = 3.50;
        if (prod == 1004)
            preco = 4.50;
        if (prod == 1005)
            preco = 5.50;
        soma += qt * preco;
    }
    printf("%.2f\n", soma);
}