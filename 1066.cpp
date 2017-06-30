#include<stdio.h>

int main()
{
    int p,n,e,o,k;
    int arr[5];
    for(int i=0; i<=4; i++)
    {
        scanf("%d",&arr[i]);
    }
    o = p = n = k = e=0;
    for(int j=0; j<=4; j++)
    {
        if(arr[j] & 1)
        {
            o++;
        }
        if(!(arr[j] & 1))
        {
            e++;
        }
        if(arr[j] > 0)
        {
            p++;
        }
        if(arr[j] < 0)
        {
            n++;
        }
    }

    printf("%d valor(es) par(es)\n",e);
    printf("%d valor(es) impar(es)\n",o);
    printf("%d valor(es) positivo(s)\n",p);
    printf("%d valor(es) negativo(s)\n",n);


    return 0;
}

