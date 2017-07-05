#include<bits/stdc++.h>
#define pf printf
#define sf scanf

using namespace std;


int main()
{
    int n,ind;
    sf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        sf("%d",&ind);
        if(ind&1)pf("1\n");
        else pf("0\n");
    }


    return 0;
}
