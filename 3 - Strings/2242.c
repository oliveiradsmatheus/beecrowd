#include <stdio.h>
#include <string.h>

int main(void) {
    char risada[51], vogal[51], vogalinv[51];
    int i, j;

    scanf("%s", risada);

    j = 0;
    for (i = 0; i < strlen(risada); i++)
        if (risada[i] == 'a' || risada[i] == 'e' || risada[i] == 'i' || risada[i] == 'o' || risada[i] == 'u') {
            vogal[j] = risada[i];
            j++;
        }
    vogal[j] = '\0';
    for (i = 0, j = strlen(vogal) - 1; i < strlen(vogal); i++) {
        vogalinv[j] = vogal[i];
        j--;
    }
    vogalinv[strlen(vogal)] = '\0';
    i = 0;
    while (i < strlen(vogal) && vogal[i] == vogalinv[i])
        i++;
    if (i == strlen(vogal))
        printf("S\n");
    else
        printf("N\n");
}