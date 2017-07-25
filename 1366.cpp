#include<bits/stdc++.h>

using namespace std;

int main()
{
    long kase;
    while(scanf("%ld",&kase),kase)
    {
        long a,b,x=0;

        int sz[1001],hw[1001];
        for(int i=0; i<kase; i++)
        {
            scanf("%ld %ld",&sz[i],&hw[i]);
            if(kase==1){
            printf("%d\n",hw[i]/4);
            x=1;
            break;
            }
        }
        if(x)continue;

        long rec=0,side=0;

        for(int i=0; i<kase; i++)
        {
            if(hw[i] >= 4)
            {
                rec += (hw[i]/4);
                hw[i] = hw[i]%4;
            }
            if(hw[i] >= 2)
            {
                side += 2;
                hw[i] %= 2;
            }

            if(side == 4)
            {
                rec++;
                side=0;
            }

        }

        printf("%d\n",rec);
    }


    return 0;
}
