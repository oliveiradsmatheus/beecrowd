#include <stdio.h>

int main() {
    int N, ent, i = 1, in = 0, out = 0;
    scanf("%d", &N);
    while (i <= N) {
        scanf("%d", &ent);
        if (ent >= 10 && ent <= 20)
            in++;
        else
            out++;
        i++;
    }
    printf("%d in\n%d out\n", in, out);
    return 0;
}