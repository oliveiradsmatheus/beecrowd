#include <stdio.h>

int main(void)
{
    int saida,tempo,fuso,resp;

    scanf("%d %d %d",&saida,&tempo,&fuso);

    resp = (saida + tempo + fuso);
    if(resp>=24)
        resp-=24;
    else
    if(resp<0)
        resp+=24;

    printf("%d\n",resp);

    return 0;
}