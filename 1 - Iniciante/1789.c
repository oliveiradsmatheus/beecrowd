#include<stdio.h>

#define TF 500

int main() {
    int num, vel[TF], i, maior;
    while (scanf("%d", &num) != EOF) {
        maior = 0;
        for (i = 0; i < num; i++)
            scanf("%d", &vel[i]);
        for (i = 0; i < num; i++) {
            if (maior == 0)
                maior = vel[i];
            else if (vel[i] > maior)
                maior = vel[i];
        }
        if (maior < 10)
            printf("1\n");
        else if (maior < 20)
            printf("2\n");
        else
            printf("3\n");
    }
}