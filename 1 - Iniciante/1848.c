#include <stdio.h>

int main(void) {
    int cont = 3, num;
    char str[10];

    num = 0;
    while (cont > 0) {
        num = 0;
        while (scanf(" %[^\n]", str), str[0] != 'c') {
            if (str[0] == '*')
                num += 4;
            if (str[1] == '*')
                num += 2;
            if (str[2] == '*')
                num += 1;
        }
        printf("%d\n", num);
        cont--;
    }

    return 0;
}