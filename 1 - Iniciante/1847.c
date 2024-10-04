#include <stdio.h>
#include <math.h>

int main(void) {
    int temp1, temp2, temp3, dif12, dif23;

    scanf("%d %d %d", &temp1, &temp2, &temp3);
    dif12 = abs(temp2 - temp1);
    dif23 = abs(temp3 - temp2);

    if (temp1 == temp2) {
        if (temp2 < temp3)
            printf(":)\n");
        else
            printf(":(\n");
    } else {
        if (temp1 > temp2) {
            if (temp2 == temp3 || temp2 < temp3)
                printf(":)\n");
            else {
                if (temp2 > temp3) {
                    if (dif12 > dif23)
                        printf(":)\n");
                    else
                        printf(":(\n");
                }
            }
        } else {
            if (temp2 > temp3 || temp2 == temp3)
                printf(":(\n");
            else {
                if (temp2 < temp3) {
                    if (dif12 > dif23)
                        printf(":(\n");
                    else
                        printf(":)\n");
                }
            }
        }
    }
    return 0;
}