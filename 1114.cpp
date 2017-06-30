#include<stdio.h>
#include<string.h>

int main()
{
    int kase,i,j,a,b;
//    scanf("%d",&kase);

    while(1)
    {
        scanf("%d",&kase);
        if(kase != 2002)
        {
            printf("Senha Invalida\n");
        }
        else
        {
            printf("Acesso Permitido\n");
            break;
        }


    }

    return 0;
}

