#include<bits/stdc++.h>

using namespace std;


int main()
{
    int kase,x,sum,t;
    scanf("%d",&kase);

    while(kase--)
    {
        sum =0;
        scanf("%d",&x);

        for(int i=1; i<x; i++)
        {
            if(x%i == 0)
            {
                sum += i;
            }
        }
        if(sum == x)
        {
            printf("%d eh perfeito\n",x);
        }
        else
        {
            printf("%d nao eh perfeito\n",x);
        }
    }



    return 0;
}
