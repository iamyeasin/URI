#include<bits/stdc++.h>
#define sf scanf
#define pf printf

using namespace std;


int main()
{
    int kase;
    sf("%d",&kase);

    for(int i=1; i<=kase; i++)
    {
        int n;
        sf("%d",&n);

        long year = (2015-n);
        if(year <= 0) pf("%d A.C.\n",-1*year+1);
        else pf("%d D.C.\n",year);
    }

    return 0;
}
