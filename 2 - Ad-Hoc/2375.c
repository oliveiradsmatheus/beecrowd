#include<stdio.h>

int main(void) {
    int diam, alt, lar, prof;
    scanf("%d", &diam);
    scanf("%d %d %d", &alt, &lar, &prof);
    if ((diam <= alt) && (diam <= lar) && (diam <= prof))
        printf("S\n");
    else
        printf("N\n");
}