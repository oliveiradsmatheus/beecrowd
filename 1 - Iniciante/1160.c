#include <stdio.h>

int main() {
    int ent, i, pa, pb, anos;
    float ca, cb;
    scanf("%d", &ent);
    for (i = 1; i <= ent; i++) {
        scanf("%d%d%f%f", &pa, &pb, &ca, &cb);
        anos = 0;
        while (pa <= pb) {
            pa += (int) ((pa * ca) / 100);
            pb += (int) ((pb * cb) / 100);
            anos++;
        }
        if (anos > 100)
            printf("Mais de 1 seculo.\n");
        else
            printf("%d anos.\n", anos);
    }
}