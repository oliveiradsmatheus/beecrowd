#include <stdio.h>

int main() {

    int ent, i = 1;
    float num1, num2, divisao;
    scanf("%d", &ent);
    while (i <= ent) {
        scanf("%f%f", &num1, &num2);
        divisao = num1 / num2;
        if (num2 == 0)
            printf("divisao impossivel\n");
        else
            printf("%.1f\n", divisao);
        i++;
    }
    return 0;
}