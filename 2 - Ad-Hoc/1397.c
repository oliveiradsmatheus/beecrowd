#include <stdio.h>

int main(void) {
    int rodadas, ogg, filho, ptsOgg, ptsFilho;

    scanf("%d", &rodadas);
    while (rodadas != 0) {
        ptsOgg = ptsFilho = 0;
        while (rodadas--) {
            scanf("%d %d", &ogg, &filho);
            if (ogg > filho)
                ++ptsOgg;
            else if (filho > ogg)
                ++ptsFilho;
        }
        printf("%d %d\n", ptsOgg, ptsFilho);
        scanf("%d", &rodadas);
    }
    return 0;
}