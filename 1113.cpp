#include<stdio.h>
#include<string.h>

int main()
{
    int kase,i,j,a,b;
//    scanf("%d",&kase);

    while(1)
    {
       scanf("%d %d",&a,&b);
       if(a==b)
       {
           break;
       }
       else if(a>b)
       {
           printf("Decrescente\n");
       }
       else if(a<b)
       {
           printf("Crescente\n");
       }



    }

    return 0;
}

