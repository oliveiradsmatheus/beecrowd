#include <stdio.h>
#include <string.h>

int main(void) {
    char frase[501];

    scanf("%[^\n]", frase);

    if (strlen(frase) <= 80)
        printf("YES\n");
    else
        printf("NO\n");
}