#include<stdio.h>

int main() {
    int ent, x, y, maior, menor, i, j, impar = 0;
    scanf("%d", &ent);
    for (i = 1; i <= ent; i++) {
        scanf("%d%d", &x, &y);
        if (x > y) {
            maior = x;
            menor = y;
        } else {
            maior = y;
            menor = x;
        }
        for (j = menor + 1; j < maior; j++) {
            if (j % 2 != 0)
                impar += j;
        }
        printf("%d\n", impar);
        impar = 0;
    }
    return 0;
}