#include <stdio.h>
#include <string.h>

int main(void) {
    char frase[501];

    scanf("%[^\n]", frase);

    if (strlen(frase) <= 140)
        printf("TWEET\n");
    else
        printf("MUTE\n");
}