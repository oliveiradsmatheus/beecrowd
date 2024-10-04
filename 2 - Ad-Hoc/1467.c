#include <stdio.h>

int main(void) {
    int Alice, Beto, Clara;

    while (scanf("%d %d %d", &Alice, &Beto, &Clara) != EOF) {
        if (Alice == Beto && Alice == Clara)
            printf("*\n");
        else {
            if (Alice == Beto) {
                if (Alice != Clara)
                    printf("C\n");
            } else {
                if (Alice == Clara)
                    printf("B\n");
                else
                    printf("A\n");
            }
        }
    }

    return 0;
}