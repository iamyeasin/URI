#include<bits/stdc++.h>
#define sf scanf
#define pf printf

using namespace std;

int josephus(int n,int k)
{

    int a=1;
    for(int i=1; i<=n; i++)
    {
        a=(a+k-1)%i+1;
    }
    return a;
}

int main()
{

    int kase;
    sf("%d",&kase);

    for(int ii=1; ii<=kase; ii++)
    {
        int n,k,cuts=0;
        sf("%d %d",&n,&k);
        pf("Case %d: %d\n",ii,josephus(n,k));

    }



	return 0;
}
