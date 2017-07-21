#include<bits/stdc++.h>
#define sf scanf
#define pf printf

using namespace std;

int main()
{
    long number[100],D[100],E[100];
    long kase;
    while(sf("%d",&kase) != EOF){
        memset(number,0,sizeof(number));
        memset(D,0,sizeof(D));
        memset(E,0,sizeof(E));


        for(int i=1; i<=kase; i++)
        {
            char ch;
            long n;
            sf("%ld %c",&n,&ch);

            number[n]++;
            if(ch == 'D' ) D[n]++;
            else if(ch == 'E') E[n]++;
        }

        int ok=0;
        for(int i=30; i<=60; i++)
        {
            if(number[i] > 0)
            {
                int m = min(number[i], min(D[i],E[i]));
                ok+= m;
            }
        }

        pf("%d\n",ok);


    }


    return 0;
}
