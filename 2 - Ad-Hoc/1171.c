#include <stdio.h>

int main(void) {
    int num[2001] = {0}, qtde, auxnum, i;

    scanf("%d", &qtde);
    i = 1;
    while (i <= qtde) {
        scanf("%d", &auxnum);
        num[auxnum]++;
        i++;
    }

    for (i = 1; i <= 2000; i++)
        if (num[i] > 0)
            printf("%d aparece %d vez(es)\n", i, num[i]);

    return 0;
}