#include<bits/stdc++.h>
#define sf scanf
#define pf printf

using namespace std;

long ind[2050];

int main()
{
    memset(ind,0,sizeof(ind));
    int n,mx=0;
    cin >> n;

    for(int i=1; i<=n; i++)
    {
        long x;
        scanf("%ld" , &x);
        ind[x]++;
        if(x > mx) mx = x;

    }

    for(int i=0; i<=mx; i++)
    {
        if(ind[i] > 0)
        {
            pf("%d aparece %ld vez(es)\n",i,ind[i] );
        }
    }




    return 0;
}
