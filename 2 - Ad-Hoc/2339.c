#include<stdio.h>

int main() {
    int ncomp, nfolhas, nfcada;
    scanf("%d %d %d", &ncomp, &nfolhas, &nfcada);
    if (ncomp * nfcada <= nfolhas)
        printf("S\n");
    else
        printf("N\n");
}