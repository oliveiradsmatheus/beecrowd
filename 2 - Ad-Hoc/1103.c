#include<stdio.h>

int main() {
    int hi, mi, hf, mf, i, f, tempo;
    scanf("%d %d %d %d", &hi, &mi, &hf, &mf);
    while (hi != 0 || mi != 0 || hf != 0 || mf != 0) {
        i = (hi * 60) + mi;
        f = (hf * 60) + mf;
        if (i > f)
            f += 1440;
        tempo = f - i;
        printf("%d\n", tempo);
        scanf("%d %d %d %d", &hi, &mi, &hf, &mf);
    }
}