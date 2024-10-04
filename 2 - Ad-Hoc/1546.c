#include <stdio.h>

int main(void) {
    int casos, qtde, feedback;

    scanf("%d", &casos);

    while (casos) {
        scanf("%d", &qtde);
        while (qtde) {
            scanf("%d", &feedback);

            switch (feedback) {
                case 1:
                    printf("Rolien\n");
                    break;
                case 2:
                    printf("Naej\n");
                    break;
                case 3:
                    printf("Elehcim\n");
                    break;
                case 4:
                    printf("Odranoel\n");
            }

            qtde--;
        }

        casos--;
    }
}