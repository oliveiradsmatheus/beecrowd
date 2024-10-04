#include <stdio.h>

int main() {
    int A1, A2, A3, tempo1 = 0, tempo2 = 0, tempo3 = 0;

    scanf("%d", &A1);
    scanf("%d", &A2);
    scanf("%d", &A3);
    tempo1 = (A2 * 2) + (A3 * 4);
    tempo2 = (A1 * 2) + (A3 * 2);
    tempo3 = (A1 * 4) + (A2 * 2);
    if (tempo1 <= tempo2 && tempo1 <= tempo3)
        printf("%d\n", tempo1);
    else if (tempo2 <= tempo1 && tempo2 <= tempo3)
        printf("%d\n", tempo2);
    else if (tempo3 <= tempo1 && tempo3 <= tempo2)
        printf("%d\n", tempo3);
}