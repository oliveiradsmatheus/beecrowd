#include <stdio.h>
#include <string.h>

int main() {
    char palavra[20];
    scanf(" %s", palavra);
    if (strlen(palavra) >= 10)
        printf("palavrao\n");
    else
        printf("palavrinha\n");
}