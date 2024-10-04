#include <stdio.h>

int Fibonacci(int num, int *Chamadas) {
    if (num == 0 || num == 1) {
        return num;
    } else {
        *Chamadas += 2;
        return Fibonacci(num - 1, &(*Chamadas)) + Fibonacci(num - 2, &(*Chamadas));
    }
}

int main(void) {
    int qtde, Chamadas, num, fibnum, i = 0;

    scanf("%d", &qtde);

    while (i < qtde) {
        Chamadas = 0;
        scanf("%d", &num);
        fibnum = Fibonacci(num, &Chamadas);
        printf("fib(%d) = %d calls = %d\n", num, Chamadas, fibnum);
        i++;
    }
}