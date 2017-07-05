#include<bits/stdc++.h>
#define pf printf
#define sf scanf

using namespace std;


int main()
{
    int n,force;
    sf("%d",&n);
    string s;

    for(int i=0; i<n; i++)
    {
        cin >> s >> force;
        if(s == "Thor")
        {
            pf("Y\n");
        }
        else
        {
            pf("N\n");
        }

    }



    return 0;
}
