#include<stdio.h>
#include<string.h>

int main()
{
    int kase,i,j,a,b;
//    scanf("%d",&kase);

    while(1)
    {
        scanf("%d %d",&a,&b);
        if(a>0 && b >0)
        {
            printf("primeiro\n");
        }
        else if(a>0 && b<0)
        {
            printf("quarto\n");
        }
        else if(a<0 && b<0)
        {
            printf("terceiro\n");
        }
        else if(a<0 && b>0)
        {
            printf("segundo\n");
        }
        else if(a==0 || b == 0 || a == NULL || b == NULL)
        {
            break;
        }



    }

    return 0;
}

