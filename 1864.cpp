#include<bits/stdc++.h>
#define pf printf
#define sf scanf

using namespace std;


int main()
{
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);

    string s = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    int n;
    sf("%d",&n);

    for(int i=0; i<n; i++)
    {
        pf("%c",s[i]);
    }
    pf("\n");

    return 0;
}
