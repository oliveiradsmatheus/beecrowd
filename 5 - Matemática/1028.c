#include <stdio.h>

int MDC(int num1, int num2) {
    if (num2 == 0)
        return num1;
    else
        return MDC(num2, num1 % num2);
}

int main(void) {
    int i = 0, qtde, num1, num2;

    scanf("%d", &qtde);

    while (i < qtde) {
        scanf("%d", &num1);
        scanf("%d", &num2);
        printf("%d\n", MDC(num1, num2));
        i++;
    }
}