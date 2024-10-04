#include <stdio.h>
#include <math.h>

int main() {
    int N;
    float hr, min, sec;
    scanf("%d", &N);
    hr = floor(N / 3600);
    min = floor(N / 60) - hr * 60;
    sec = N - (hr * 3600 + min * 60);
    printf("%.0f:%.0f:%.0f\n", hr, min, sec);

    return 0;
}