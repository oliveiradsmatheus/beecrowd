#include <stdio.h>
#include <string.h>

int main() {
    char medico[1001], jm[1001];
    scanf(" %s", jm);
    scanf(" %s", medico);
    if ((strlen(jm) >= strlen(medico)))
        printf("go\n");
    else
        printf("no\n");
}