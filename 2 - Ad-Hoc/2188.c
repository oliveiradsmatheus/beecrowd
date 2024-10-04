#include <stdio.h>

#define TF 10001

int main(void) {
    int N, X[TF], Y[TF], U[TF], V[TF], XM, YM, UM, VM, i, j = 1;
    scanf("%d", &N);
    while (N != 0) {
        XM = -10001;
        YM = 10001;
        UM = 10001;
        VM = -10001;
        i = 0;
        while (i < N) {
            scanf("%d %d %d %d", &X[i], &Y[i], &U[i], &V[i]);
            if (X[i] > XM)
                XM = X[i];
            if (Y[i] < YM)
                YM = Y[i];
            if (U[i] < UM)
                UM = U[i];
            if (V[i] > VM)
                VM = V[i];
            i++;
        }
        if ((XM < UM) && (YM > VM))
            printf("Teste %d\n%d %d %d %d\n\n", j, XM, YM, UM, VM);
        else
            printf("Teste %d\nnenhum\n\n", j);
        j++;
        scanf("%d", &N);
    }
    return 0;
}