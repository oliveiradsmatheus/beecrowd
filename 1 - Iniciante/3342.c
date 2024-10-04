#include <stdio.h>

int main() {
    int lado, qtqd, preto, branco;
    scanf("%d", &lado);
    qtqd = lado * lado;
    if (qtqd % 2 == 0) {
        preto = qtqd / 2;
        branco = qtqd / 2;
    } else {
        preto = qtqd / 2;
        branco = qtqd / 2 + 1;
    }
    printf("%d casas brancas e %d casas pretas\n", branco, preto);
}