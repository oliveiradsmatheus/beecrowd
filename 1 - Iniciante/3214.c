#include<stdio.h>

int main() {
    int vazia, achada, posse, latanec, ref, latas = 0;
    scanf("%d %d %d", &vazia, &achada, &latanec);
    posse = vazia + achada;
    while (posse >= latanec) {
        ref = posse / latanec;
        latas += ref;
        posse = (posse % latanec) + ref;
    }
    printf("%d\n", latas);
}