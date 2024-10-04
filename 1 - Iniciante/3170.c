#include<stdio.h>

int main() {
    int bola, galho, qtde;

    scanf("%d %d", &bola, &galho);
    if (bola >= (galho / 2))
        printf("Amelia tem todas bolinhas!\n");
    else {
        qtde = (galho / 2) - bola;
        printf("Faltam %d bolinha(s)\n", qtde);
    }
}