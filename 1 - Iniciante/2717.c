#include <stdio.h>

int main() {
    int tempofim, tempofab1, tempofab2;

    scanf("%d", &tempofim);
    scanf("%d %d", &tempofab1, &tempofab2);
    if ((tempofab1 + tempofab2) <= tempofim)
        printf("Farei hoje!\n");
    else
        printf("Deixa para amanha!\n");
}