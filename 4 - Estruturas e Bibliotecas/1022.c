#include <stdio.h>

int MDC(int x, int y) {
    int mdc = 2, i = 2, resto;
    char div = 1;

    do {
        resto = x % y;
        x = y;
        y = resto;
    } while (resto != 0);

    return x;
}

int main(void) {
    int qt, n1, n2, d1, d2, nresp, dresp, nsimp, dsimp, mdc;
    char op;

    scanf("%d", &qt);
    while (qt--) {
        scanf("%d / %d %c %d / %d", &n1, &d1, &op, &n2, &d2);
        switch (op) {
            case '+':
                nresp = n1 * d2 + n2 * d1;
                dresp = d1 * d2;
                break;
            case '-':
                nresp = n1 * d2 - n2 * d1;
                dresp = d1 * d2;
                break;
            case '/':
                nresp = n1 * d2;
                dresp = d1 * n2;
                break;
            case '*':
                nresp = n1 * n2;
                dresp = d1 * d2;
        }
        mdc = MDC(nresp, dresp);

        nsimp = nresp / mdc;
        dsimp = dresp / mdc;

        if (dsimp < 0) {
            dsimp *= -1;
            nsimp *= -1;
        }
        printf("%d/%d = %d/%d\n", nresp, dresp, nsimp, dsimp);
    }

    return 0;
}