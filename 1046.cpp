#include<stdio.h>

int main()
{
    int m,n,x,y;
    scanf("%d %d",&m,&n);

    if(m == n)
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else
    {
        x = 24-m;
        if(n >= 12)
        {
            y = 24-n;
            printf("O JOGO DUROU %d HORA(S)\n",x-y);
        }
        else
        {
            printf("O JOGO DUROU %d HORA(S)\n",x+n);
        }
    }

    return 0;
}
