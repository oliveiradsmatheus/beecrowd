#include<stdio.h>

int main() {
    int soma = 0, idade, somai = 0;
    float media = 0;
    scanf("%d", &idade);
    while (idade > 0) {
        soma++;
        somai += idade;
        scanf("%d", &idade);
    }
    media = (float) somai / (float) soma;
    printf("%.2f\n", media);
}