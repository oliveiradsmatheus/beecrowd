#include<stdio.h>

int main() {
    int i = 1, q = 0;
    float num;
    while (i <= 6) {
        scanf("%f", &num);
        if (num > 0)
            q++;

        i++;
    }
    printf("%d valores positivos\n", q);
}