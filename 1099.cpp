#include<stdio.h>
#include<string.h>

int main()
{
    int kase,i;
    scanf("%d",&kase);



    while(kase--)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        int sum = 0;

        if(a>b)
        {
            int tem = a;
            a = b;
            b = tem;
        }

        for(i=a+1; i<b; i++)
        {
            if(i&1)
            {
                sum+=i;
            }
        }

        printf("%d\n",sum);
    }


    return 0;
}


