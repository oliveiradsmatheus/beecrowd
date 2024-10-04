#include <stdio.h>

int main() {

    int NUMBER, HR;
    float SALARY, SHR;
    scanf("%d%d%f", &NUMBER, &HR, &SHR);
    SALARY = HR * SHR;
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", NUMBER, SALARY);
    return 0;
}