#include<stdio.h>

int main() {
    int horas, vmedia;
    float litro;
    scanf("%d%d", &horas, &vmedia);
    litro = vmedia * horas / 12.00;
    printf("%.3f\n", litro);

    return 0;
}