#include <stdio.h>

int main() {
    int ent;

    while (scanf("%d", &ent) != EOF) {
        if (ent == 0)
            printf("vai ter copa!\n");
        else if (ent != 0)
            printf("vai ter duas!\n");
    }
}