#include<bits/stdc++.h>
#define sf scanf
#define pf printf

using namespace std;

long bank[256];

int main()
{
    int n,b;
    while(sf("%d %d",&b,&n),(b||n))
    {
        memset(bank,0,sizeof(bank));
        for(int i=1; i<=b; i++){
            sf("%ld",&bank[i]);
        }

        for(int i=1; i<=n; i++)
        {
            long debt,cred,val;
            scanf("%ld %ld %ld",&debt,&cred,&val);
            bank[cred] += val;
            bank[debt] -= val;
        }

        int f=1,zero=0;
        for(int i=1; i<=b; i++)
        {
            if(bank[i] < 0)
            {
                f=0;
                break;
            }
        }

        if(f)pf("S\n");
        else pf("N\n");
    }

    return 0;
}
