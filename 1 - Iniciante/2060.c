#include <stdio.h>

int main(void) {
    int qt, i = 0, num, dois = 0, tres = 0, quatro = 0, cinco = 0;

    scanf("%d", &qt);
    while (i < qt) {
        scanf("%d", &num);
        if (num % 2 == 0)
            dois++;
        if (num % 3 == 0)
            tres++;
        if (num % 4 == 0)
            quatro++;
        if (num % 5 == 0)
            cinco++;
        i++;
    }
    printf("%d Multiplo(s) de 2\n", dois);
    printf("%d Multiplo(s) de 3\n", tres);
    printf("%d Multiplo(s) de 4\n", quatro);
    printf("%d Multiplo(s) de 5\n", cinco);
    return 0;
}