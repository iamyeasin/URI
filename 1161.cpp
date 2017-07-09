#include<bits/stdc++.h>
#define sf scanf
#define pf printf

using namespace std;

unsigned long long int f[25];

void fact()
{
    f[0] = 1;
    for(int i=1; i<=20; i++)
    {
        f[i] = f[i-1]*i;
    }

}


int main()
{
    fact();

    int a,b;
    while(sf("%d %d",&a,&b) != EOF)
    {
        pf("%llu\n",f[a]+f[b]);
    }




    return 0;
}
