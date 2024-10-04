#include <stdio.h>

int main() {
    int hu, ze, lu;
    scanf("%d %d %d", &hu, &ze, &lu);
    if ((hu > ze && hu < lu) || (hu > lu && hu < ze))
        printf("huguinho\n");
    else if ((ze > hu && ze < lu) || (ze < hu && ze > lu))
        printf("zezinho\n");
    else if ((lu > ze && lu < hu) || (lu < ze && lu > hu))
        printf("luisinho\n");
}