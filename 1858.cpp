#include<bits/stdc++.h>
#define pf printf
#define sf scanf

using namespace std;


int main()
{
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);

    int kase,sm=10023;
    sf("%d",&kase);
    int indx[110],ind=0;

    for(int i=1; i<=kase; i++)
    {
        sf("%d",&indx[i]);
        if(indx[i] < sm){
            sm = indx[i];
            ind = i;
        }
    }
    pf("%d\n",ind);

    return 0;
}
